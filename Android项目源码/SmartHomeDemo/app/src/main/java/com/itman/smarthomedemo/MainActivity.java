package com.itman.smarthomedemo;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.support.v4.content.LocalBroadcastManager;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import com.itman.smarthomedemo.dao.HttpAsyncTask;
import com.itman.smarthomedemo.service.MinaService;

import java.util.Arrays;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    private Button btnSend;

    private Intent serviceIntent;
    private MessageBroadcastReceiver receiver;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btnSend = findViewById(R.id.btnSend);
        btnSend.setOnClickListener(this);

        //开启长连接服务
        serviceIntent = new Intent(this, MinaService.class);
        startService(serviceIntent);

        registerBroadcast();
    }

    @Override
    public void onClick(View view) {
        switch (view.getId()){
            case R.id.btnSend:
                byte[] msg = new byte[]{(byte) 0x01, (byte) 0x02, (byte) 0x03};
                String name = "layne";
                String sessionId = "CONN_9527";
                //发出请求
                serviceCONN(msg,name,sessionId);
                break;
        }
    }

    private void serviceCONN(byte[] bytes, String username, String sessionId) {
        //将byte数组转化成字符串
        String data_msg = Arrays.toString(bytesToInt(bytes));
        //服务器的url
        String url = "http://47.95.15.238:10088/BackStageSystem/servlet/AppControlServlet";
        //将数据拼接起来
        String data = "username=" + username + "&sessionId=" + sessionId + "&data=" + data_msg;
        String[] str = new String[]{url, data};

        //发出一个请求
        new HttpAsyncTask(MainActivity.this, new HttpAsyncTask.PriorityListener() {

            @Override
            public void setActivity(int code) {
                switch (code) {
                    case 200:
                        //如果返回的resultCode是200,那么说明APP的数据传送成功，并成功解析返回的json数据
                        Toast.makeText(MainActivity.this, "发送数据：[0x01,0x02,0x03]", Toast.LENGTH_SHORT).show();
                        break;
                    case 202:
                        Toast.makeText(MainActivity.this, "设备离线状态", Toast.LENGTH_SHORT).show();
                        break;
                    default:
                        Toast.makeText(MainActivity.this, "网络传输异常", Toast.LENGTH_SHORT).show();
                        break;
                }

            }
        }).execute(str);
    }

    /**
     * byte转化为int
     */
    public static int[] bytesToInt(byte[] src) {
        int value[] = new int[src.length];
        for (int i = 0; i < src.length; i++) {
            value[i] = src[i] & 0xFF;
        }
        return value;
    }

    //动态注册广播
    private void registerBroadcast() {
        receiver = new MessageBroadcastReceiver();
        IntentFilter filter = new IntentFilter("com.ssy.mina.broadcast");
        LocalBroadcastManager.getInstance(this).registerReceiver(receiver, filter);
    }

    //接收发送的广播
    private class MessageBroadcastReceiver extends BroadcastReceiver {
        @Override
        public void onReceive(Context context, Intent intent) {

            String msg = intent.getStringExtra("message");
            Toast.makeText(MainActivity.this, "esp8266发送过来的数据："+msg, Toast.LENGTH_SHORT).show();
        }
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        //退出时关掉长连接服务
        stopService(serviceIntent);
    }
}
