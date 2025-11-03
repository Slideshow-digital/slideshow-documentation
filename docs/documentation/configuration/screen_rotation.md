# Screen rotation

In case you want to display content on your TV in portrait mode or rotate the content by any other way, Slideshow offers two options for how to achieve it:

## Screen Layout Rotation

This method rotates only the Slideshow content layout while leaving the on-screen menu and system UI untouched.

Screen layout rotation can be set through the web interface → menu `Screen layout` → `Edit screen layout` → `Rotation`. The layout can be rotated by 90°, 180° or 270°.

Rotating screen layout is supported universally on every device (the support doesn’t depend on the hardware). For video playback on rotated layouts we suggest using the player type `ExoPlayer + TextureView` or `ExoPlayer + SurfaceView` (see [Device settings](settings.md#on-screen-formatting)).

## Android System Orientation

This method changes the entire Android system orientation, affecting Slideshow and any other running apps.

It can be set through the web interface → menu `Settings` → `Device settings` → `Screen orientation`, or through on-screen menu → `Basic settings` → `Screen orientation in on-screen menu`.

There are two sets of options:

- Default, Portrait or Landscape
- Simulating change of orientation sensor, only supported by some [rooted devices](../hardware/root_on_android.md) (might affect other apps as well)

Support of these options depends on the particular hardware model, not every manufacturer supports all of them on their devices. If changing Screen orientation and restarting Slideshow app produces no change on your device, we suggest falling back to Screen layout rotation described above.

![Setting screen orientation through Basic settings](screen_rotation.jpg)
/// caption
Setting screen orientation through Basic settings
///

## Quick Decision Guide

| Need                                                  | Recommended method                                                                    |
|-------------------------------------------------------|---------------------------------------------------------------------------------------|
| Rotate only Slideshow content                         | Screen Layout Rotation                                                                |
| Rotate entire system (e.g., for kiosk mode)           | Android System Orientation *(if supported)*                                           |
| Device does not respond to system orientation changes | Screen Layout Rotation                                                                |
| Playing videos on a rotated layout                    | Ensure `ExoPlayer` is selected in [Device settings](settings.md#on-screen-formatting) |
