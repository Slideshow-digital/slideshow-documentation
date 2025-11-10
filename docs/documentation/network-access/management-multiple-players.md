# Management of multiple players

Each installation of Slideshow app on an Android device is by default independent. As there is no direct cloud dependency (thanks to which you can enjoy Slideshow for free), there is no universal full remote or centralized management.

However, there are still some very good ways to manage multiple players with Slideshow together and even remotely. The setup might require more than just two clicks, but in the end, it gives you a stable solution without any additional costs and any unwanted dependency on a cloud provider. There are several possibilities, you can find all of them below.

## Synchronization from Google Drive

Slideshow allows you to set up automatic file synchronization from a Google Drive folder (see [documentation](file-synchronization/file-synchronization-google-drive.md) for information about how to set it up). If you set up synchronization from the same Google Drive folder to multiple players with Slideshow, you can upload new files just once to the Google Drive folder, and they will be automatically synchronized to all players within a few minutes and displayed on the screen (if the playlist    and schedules are set up).

It is possible to set up automatic synchronization of not only media files, but configuration as well, including playlists, schedules, screen layouts and settings. Once you have the file synchronization working, the steps to add configuration synchronization are as follows:

1. On each player enable the [setting](../configuration/settings.md#file-synchronization) "Allow external config import" via the web interface → menu `Settings` → `Device settings` *(this step has to be done only during the first setup)*
2. Prepare the changes in the configuration on one player with Slideshow app
3. Go to that player's web interface → menu `Settings` → `Configuration backup`, check the parts of the configuration you would like to synchronize to the other players and click on `Download backup` *(more information about configuration backup is in [documentation](../configuration/configuration-backup-restore.md))*
4. Rename the resulting XML file to `configuration.xml` and upload it to the Google Drive folder that is synchronized to the other devices
5. Create file `setup.csv` with the following content (just a single line, as a text) and upload it to the Google Drive folder *(more information about this file is in [documentation](../configuration/setup-csv.md))*
```
:CONFIG;configuration.xml;delete`
```
6. Wait for the automatic synchronization from this Google Drive folder, and the configuration change will be applied automatically

If you have [rooted devices](../hardware/root-on-android.md), you can even use File Synchronization for [remote update](../configuration/remote-update.md) of Slideshow app on multiple players at the same time.

## Synchronization from Dropbox, WebDAV or SFTP

Similarly as with Google Drive, you can set up synchronization of the same [Dropbox](file-synchronization/file-synchronization-dropbox.md) folder to multiple players, including media files and configuration.

Synchronization with WebDAV or SFTP works similarly as well, but you will need your own WebDAV or SFTP server. This option may be preferred in case you have your own server for storing media files, or if you don’t want to upload files to a third-party service. Slideshow doesn’t need full internet connection for WebDAV and SFTP synchronization, just connection to the particular server, so it is usable in private networks or behind restricted firewall as well.

## Communication between devices

Slideshow offers a possibility to set up direct communication between multiple devices (players). It can be activated from the web interface → menu `Settings` → `Other devices`. More information can be found in the [particular documentation](communication-between-devices.md). It works if the devices are on the same wired local network, or (if your router supports it) if they are on different networks as well.

After the communication is set up, you can use the Other devices page to monitor whether the other players are online and send commands to multiple players at the same time.
