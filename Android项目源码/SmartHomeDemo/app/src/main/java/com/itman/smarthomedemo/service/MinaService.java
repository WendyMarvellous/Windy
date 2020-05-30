package com.itman.smarthomedemo.service;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.os.HandlerThread;
import android.os.IBinder;
import android.support.annotation.Nullable;
import android.util.Log;

/**
 * Created by Layne_Yao on 2017/10/8.
 * CSDN:http://blog.csdn.net/Jsagacity
 */
public class MinaService extends Service {

    private ConnectionThread thread;


    @Override
    public void onCreate() {
        super.onCreate();

        thread = new ConnectionThread("mina", getApplicationContext());
        thread.start();
        Log.e("tag", "启动线程尝试连接");
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        return super.onStartCommand(intent, flags, startId);
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        thread.disConnect();
        thread = null;

    }

    @Nullable
    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

    class ConnectionThread extends HandlerThread {

        private Context context;
        boolean isConnection;
        ConnectionManager mManager;

        public ConnectionThread(String name, Context context) {
            super(name);
            this.context = context;
            ConnectionConfig config = new ConnectionConfig.Builder(context)
                    .setIp("47.95.15.238")
                    .setPort(10011)
                    .setReadBufferSize(10240)
                    .setConnectionTimeout(10000).builder();

            mManager = new ConnectionManager(config);
        }

        @Override
        protected void onLooperPrepared() {
            while (true) {
                isConnection = mManager.connect();
                if (isConnection) {
                    String macId = "CONN_9527";
                    Log.e("tag", "连接成功");
                    Log.e("SendAsyncTask", "设备id:" + macId);
                    SessionManager.getInstance().writeToServer(macId);
                    break;
                }
                try {
                    Log.e("tag", "尝试重新连接");
                    Thread.sleep(3000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }

        public void disConnect() {
            mManager.disConnect();
        }
    }
}
