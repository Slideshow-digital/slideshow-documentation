# Kiosk mode

To ensure end‑users cannot exit the SlideShow app or access the standard Android interface, SlideShow provides several mechanisms for fully locking down the device.

!!! Warning "Be careful"
    Enabling kiosk mode can be **irreversible** if you lose access to the device’s web interface (username + password). Only advanced users or Digital Signage professionals should enable these features.

## Android kiosk mode

Android includes a native kiosk mode (also called Lock Task Mode) that prevents switching between apps and keeps a single application permanently in the foreground. SlideShow integrates with this system, allowing you to configure device lockdown.

To enable kiosk mode for SlideShow:

1. **Set SlideShow as the Device Owner:**

    - **Rooted devices**: Open the SlideShow [web interface](../network-access/web-interface.md) → menu `Settings` → `Device administator` then click `Enable` below `Device owner`. 
    - **Non-rooted devices**: Use Android Debug Bridge (ADB) to set SlideShow as the device owner. Run the following command from a PC: 
   
        ```
        adb shell dpm set-device-owner sk.mimac.slideshow/.AppAdminReceiver
        ```
     
2. **Enable Lock Task Features:** 

    On the `Device administrator` page, click on `Enable` below both `Set lock task application` and `Lock task mode`.

3. **Enable Kiosk Mode at Startup:** 

    Navigate to `Settings` → `Device settings` and toggle `Enable kiosk mode after start`.

4. **Enable Automatic App Startup:** 

    Make sure the app is configured to [start automatically after boot](automatic-startup.md).

![Device administrator page in the web interface](kiosk-mode-web.png)
/// caption
Device administrator page in the web interface
///

On many Android devices, you must also disable the **status bar** and **navigation bar** within system settings to prevent users from pulling down notifications or using system gestures. The setting names vary by manufacturer and Android version (e.g., *Hide system bar*, *Navigation gestures*, *Disable notification swipe*, etc.).

Once kiosk mode is active, the only way to exit the app is from the on-screen menu → `Exit`. This ensures end-users cannot accidentally or intentionally leave the SlideShow environment.

## Locking on-screen menu

By default, the SlideShow on‑screen menu can be opened by swiping from the left edge of the screen or pressing Enter or Menu on a keyboard or remote control. For Digital Signage deployments, this behavior may allow unauthorized users to access management features.

In the [white-label version](../../commercial/white-label.md), you can lock the on‑screen menu so that it becomes accessible only by a secret touch sequence and a username + password login. This provides a secure method for technicians or operators to access the menu without exposing system controls to end users.

!!! Note "For Digital Signage providers only"
    The locked on‑screen menu feature is available **exclusively** in the paid white‑label version intended for Digital Signage providers.
