# Configuration backup and restore

If you want to copy your Slideshow's configuration to more devices or simply make a backup in case something goes wrong, the best way to do it is use **XML configuration backup / restore**.

Via web interface → menu `Settings` → `Backup & Restore`, you can export the entire configuration of Slideshow to the XML file and download this file to your computer. Afterward, you can use this XML file to restore this configuration in Slideshow on the same or different device.

Alternatively, you can pack a configuration XML file into a ZIP file, enter its file name in [setup.csv file](https://slideshow.digital/documentation/setup-csv-file/) (see directive `:CONFIG`) and setup [file synchronization](../network_access/file_synchronization/index.md) of this ZIP file. This way, you can modify the configuration of Slideshow entirely remotely. For security reasons, setting "External config import" has to be enabled in order for Slideshow to actually process the external configuration.

!!! Warning "Version compatibility"
    The configuration file might not be compatible between different versions of Slideshow. We suggest importing the configuration only to the same version of Slideshow as it was exported from.

## What is included in the backup

- Your device's **settings** - content of web interface → menu `Settings` → `Device settings` ([more information](settings.md))
- **User accounts** - including password in a hashed form, so be cautious with this option
- Configuration of **screen layouts, panels, playlists, content**
- Configuration of **file synchronization**, login to Google Drive and Dropbox account cannot be exported due to security reasons ([more information](https://slideshow.digital/documentation/file-synchronization-http-ftp/))
- List of on-device **RSS messages** - content of web interface → menu Tools → RSS messages ([more information](../playback/special_content/rss_feeds.md))
- List of **file metadata** for scheduled deletions ([more information](playback_configuration/scheduled_file_deletion.md))
- **Key mapping** for keyboard shortcuts ([more information](../interactivity/keyboard.md))
- **Triggers** ([more information](../interactivity/triggers.md))
- **Media files** (optional - if checked, Slideshow will produce a ZIP file instead of XML)

## Manual modification of the backup

As the configuration backup is in human-readable XML format, it can be (very, very carefully) modified manually. This can be helpful, for example, if you want to do some batch modification. Just remember to open the XML backup file in a text editor which supports UTF-8 encoding natively (for example, [Notepad++](https://notepad-plus-plus.org/) on Windows platform).

After updating the file manually, you can validate the XML file against the configuration XSD schema (provided below), for example using XML Tools in Notepad++, online service such as <http://www.utilities-online.info/xsdvalidation/>, or any other tool supporting XML validation against XSD schema.

-   [configuration.xsd - XSD schema for version 4.10.x (current)](https://slideshow.digital/xsd/configuration-v4_10.xsd)
-   [configuration.xsd - XSD schema for version 4.9.x (old)](https://slideshow.digital/xsd/configuration-v4_9.xsd)
-   [configuration.xsd - XSD schema for version 4.8.x (old)](https://slideshow.digital/xsd/configuration-v4_8.xsd)
-   [configuration.xsd - XSD schema for version 4.7.x (old)](https://slideshow.digital/xsd/configuration-v4_7.xsd)
-   [configuration.xsd - XSD schema for version 4.6.x (old)](https://slideshow.digital/xsd/configuration-v4_6.xsd)
-   [configuration.xsd - XSD schema for version 4.5.x (old)](https://slideshow.digital/xsd/configuration-v4_5.xsd)
-   [configuration.xsd - XSD schema for version 4.4.x (old)](https://slideshow.digital/xsd/configuration-v4_4.xsd)
-   [configuration.xsd - XSD schema for version 4.0.x, 4.1.x, 4.2.x, 4.3.x (old)](https://slideshow.digital/xsd/configuration-v4_0.xsd)
-   [configuration.xsd - XSD schema for version 3.24.x (old)](https://slideshow.digital/xsd/configuration-v3_24.xsd)
