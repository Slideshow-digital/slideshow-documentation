# Synchronized playback

Synchronized playback means displaying media on two or more screens at the same time. For example, the same video is started at the same moment on two TVs, or two sets of pictures are always changed at the same moment.

Slideshow supports synchronized playback either across multiple screen layout zones on the same device or across multiple devices on the same local network.

## Synchronizing devices

For synchronized playback across multiple devices, all devices have to be on the same local network, connected via LAN cable (Wi-Fi is not supported for synchronized playback) and communication between devices has to be set up. Synchronized playback will work only between devices with the same `Devices group code` [setting](../configuration/settings.md#network-interfaces).

We highly suggest using the same hardware and firmware version for synchronized playback across multiple players, for example, the same model of Android boxes. As video loading differs a lot between various devices, the delay between starting video playback on two devices from various manufacturers might be too high (more than 200 milliseconds). Using the same model of display is also important in order to reduce the lag.

When using the same device model, the delay between synchronized playback on multiple devices is usually lower than 50 milliseconds, which is not visible to regular viewers.

## Synchronizing playlists

Playlists that should be played synchronously should have the same `Sync code` set. This can be changed via Slideshow’s web interface → menu `Playlists` → `Edit playlist` → `Sync code`. If no `Sync code` is set, the playback won’t be synchronized.

We suggest using content type `Files alphabetically` instead of `Files randomly` for synchronized playback. Enabling `Preload content in playlist` [setting](../configuration/settings.md#on-screen-formatting) is also encouraged.

## Checklist for synchronized playback across multiple devices

1. Navigate to menu `Settings` → `Other devices`, set up the same `Devices group code` on all devices and verify that you can see all devices in the list on this page.
2. Edit the playlist that should be played synchronously, set the same `Sync code` and `Content duration` on all devices.
3. Verify that there is either the same number of content in the playlist, or (in case of files) that the content type is `Files alphabetically` (not `Files randomly`) and that there are the same number of files in this content across all devices.
4. Activate the playlist on all devices, preferably adjust the schedules as well.

## Video tutorial

<iframe style="width: 100%; aspect-ratio: 16 / 9;" src="https://www.youtube.com/embed/76jpISSD4Hk?feature=oembed&start&end&wmode=opaque&loop=0&controls=1&mute=0&rel=0&modestbranding=0" frameborder="0" allowfullscreen></iframe>

<iframe style="width: 100%; aspect-ratio: 16 / 9;" src="https://www.youtube.com/embed/6iK_nhGdpnA?feature=oembed&start&end&wmode=opaque&loop=0&controls=1&mute=0&rel=0&modestbranding=0" frameborder="0" allowfullscreen></iframe>
