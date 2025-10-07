# NovaStar TB40 LED controller

## Installation of Slideshow 

1. Connect the LED matrix controller to the computer via USB A-B cable
2. Open ViPlex Express
3. Type `novasoft` anywhere in the app
4. Open the newly shown User Software tab
5. Connect to the device using username `admin`, password `SN2008@+` (if you changed the password, enter the changed one)
6. Enable ADB and disable PlayService
7. Pick the APK, check Auto launch on startup, install app
8. Run command `adb shell`. If you get `adb.exe: device offline` error, unplug the USB B cable from the LED controller, re-plug it and try the command again. 
9. Allow permissions through adb:

    ``` 
    pm grant sk.mimac.slideshow android.permission.READ_EXTERNAL_STORAGE;
    pm grant sk.mimac.slideshow android.permission.WRITE_EXTERNAL_STORAGE;
    appops set sk.mimac.slideshow MANAGE_EXTERNAL_STORAGE allow;
    ```
   
10. Optional:

    ```
    pm grant sk.mimac.slideshow android.permission.CAMERA;
    pm grant sk.mimac.slideshow android.permission.SYSTEM_ALERT_WINDOW;
    pm grant sk.mimac.slideshow android.permission.READ_LOGS;
    dpm set-device-owner sk.mimac.slideshow/.AppAdminReceiver;
    setprop persist.sys.timezone "Europe/Bratislava";
    settings put global ntp_server pool.ntp.org;
    settings put global auto_time 1;
    settings put global package_verifier_user_consent -1;
    ```

11. Run the app

The app can't be set as launcher, otherwise NovaStar's configuration won't work properly

We also had an opportunity to test NovaStar TB60, which has a higher limit for LED pixels. The process of the installation is exactly the same.
