# Hardware suggestions

Picking the right Android device for your digital signage usage is very important, because you usually want it to work properly for a longer time without any necessary maintenance. We prepared a short walk-through, which contains some general recommendations for choosing a good device from the point of view of Slideshow app, but most of the points are valid also for any other digital signage application.

You won’t find suggestions for any particular brands or models here, as we don’t want to recommend something we haven’t tested personally.

## Type of device

Some of the most common hardware set-ups used with Slideshow are:

- **Android box or stick** connected to a regular TV via HDMI cable. Majority of the installations use this combination, as it’s the most flexible solution. There are many different models available on the market, and it’s straightforward to set up and upgrade.
- **Android TV**, which combines the previous solution in one device – you have a TV with a special version of Android installed. The number of models available on the market is a little bit lower, and it might take a while to find the right model for you.
- **Android tablet**, which is very useful when you want just a small display. The market with tablets is really huge, so you can pick a device that satisfies your requirements.

## Hardware recommendation

Here are some suggestion what to look for when you are choosing a new Android device for Slideshow:

- **Android version** – Slideshow has support for all the way back to Android 5, but not all features are available on this ancient Android version. If you are picking a new box, look for at least Android 9 and newer.
- **Performance** – Slideshow in its base form isn’t a very performance hungry app, it can run without any problems on a single core 800 MHz CPU. However, once you start adding many panels, RSS news with moving text, transitions between images, etc., it may start lagging on slow low-end devices. If you are picking a new device, we would recommend not going lower than quad core CPU and 2 GB RAM.
- **Graphic performance** – as there are no 3D effects in Slideshow, raw performance of the device’s GPU isn’t really important. However, if you are planning to display high definition videos, it is important to check which video codecs are supported by the GPU. There is usually no problem with H.264 codec up to 1080p, but 4K H.265 is not supported on some devices.
- **Video output** *(only applicable for box or stick)* – HDMI output port is basically a standard feature. If you have a 4K display, look out for the HDMI version, only HDMI 2.0 and newer will provide you real 4K/60Hz output. Note that HDMI 2.0 only will not guarantee you true 4K output (not up-scaled) , as you also need a device with 4K framebuffer for that, which is still quite rare.
- **Networking** – connection via wired LAN cable is highly preferred because of the stability, so we suggest using a box with RJ45 LAN connector. If a wired connection won’t be available at the location, look for a box with stable WiFi, external antenna is usually a plus. Unstable WiFi connection can cause a lot of headache if you are using Slideshow’s web interface, synchronizing files over the internet or playing audio/video streams.
- **Other ports** – depending on your planned usage, you may want to look for a device with enough USB ports (for mouse, keyboard, remote control, USB flash storage) and 3.5 mm audio jack or S/PDIF optical connector (direct output to the speakers instead of sound through HDMI)
- **Storage** – Slideshow stores all files in the device’s memory, even if you are synchronizing the files from web / Google Drive / Dropbox, so it’s necessary to have enough memory for all files you would like to display. Don’t forget that some of the storage space will be occupied by Android itself, so for example if you get a device with 16 GB storage, you may find that only 12 GB is available for your files. For displaying just images and a couple of short videos, a device with 16 GB storage should be enough for you. Large amount of long and high quality videos will require large storage. If you don’t want to be limited by the internal memory of an Android device, look for a device with a micro SD card slot, as Slideshow can also use a micro SD card for file storage.
- **Rooted device** – if you pick a device with rooted Android, you can access some extra features in Slideshow, which are very useful for commercial digital signage.
- **Stability** – this is something you won’t find in any specification, but it’s crucial for usage as a digital signage device. Many devices on the market are not suitable for 24/7 usage and they will become unstable after some time, often getting stuck or rebooting. If you are planning larger deployment of devices for digital signage, remember to thoroughly test the device first.
