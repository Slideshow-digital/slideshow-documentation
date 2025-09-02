# Root on Android

While Slideshow works without any problems on non-rooted Android devices, there are a couple of extra features which are available only on rooted devices, mostly due to security restrictions of Android.

If you are not familiar with the concept of rooted Android, you can find out more for example on [https://en.wikipedia.org/wiki/Rooting_(Android)](https://en.wikipedia.org/wiki/Rooting_(Android)).

Here is list of Slideshow’s extra features available only on rooted devices:

- **Web interface on port 80** – Slideshow’s web interface is available by default on port 8080 on non-rooted devices and port 80 on rooted devices (the default HTTP port). Similar situation is with HTTPS (port 443 on rooted, 8443 on non-rooted) and FTP (port 21 on rooted, 8021 on non-rooted). The reason is that ports below 1000 are restricted only to system apps on non-rooted devices. All these ports can be changed in Slideshow’s settings.
- **Update app remotely** – on rooted device, you can upload an APK file with a new version of Slideshow via web interface, menu `Setting` → `Application update`, or synchronize it via Google Drive / Dropbox / HTTP server / USB flash drive with the help of the setup.csv file.
- **Possibility to reboot the whole device remotely** – Slideshow can trigger the system reboot on rooted devices, either by clicking on a button via menu `Settings` → `Reboot / reload`, or by setting `Reboot time (watchdog)` in `Settings` → `Device settings`.
- **Possibility to setup Slideshow as a device owner and administrator** through menu `Settings` → `Device administrator`.
- **Set device’s bootanimation to Slideshow logo**, via menu `Settings` → `Device Settings` → button `Set bootanimation` on the bottom.

On many Android versions, even if your device is rooted, you will be asked whether you want to allow root (or superuser) access for Slideshow on the app’s first start. You might also want to turn off notification every time Slideshow uses the root access, usually through an app called SuperSU.

!!! warning "Be careful when rooting"
    Rooting Android by yourself may damage your device and/or void the warranty. Be careful!
