# Configuration backup and restore

If you want to copy your Slideshow configuration to multiple devices or keep a backup for safety, the recommended method is to use **XML configuration backup and restore**.

You can access this feature via web interface → menu `Settings` → `Backup & Restore`

From there, you can export your current configuration to an XML file and download it to your computer. Later, you can restore this configuration on the same or another device using the same XML file.

Alternatively, you can pack a configuration XML file into a ZIP file, enter its file name in [setup.csv file](setup-csv.md) (see directive `:CONFIG`) and setup [file synchronization](../network-access/file-synchronization/index.md) of this ZIP file. This way, you can modify the configuration of Slideshow entirely remotely. For security reasons, the [setting](settings.md#file-synchronization) `External config import` must be enabled before Slideshow can process a remote configuration file.

!!! Warning "Version compatibility"
    Configuration files may not be compatible between different Slideshow versions. Always import configurations into the same version they were exported from.

## What is included in the backup

- Your device's **settings** - equivalent to web interface → menu `Settings` → `Device settings` ([details](settings.md))
- **User accounts** - including password in a hashed form (handle with care)
- Configuration of **screen layouts, zones, playlists, and content**
- Configuration of **file synchronization**, logins for Google Drive and Dropbox account cannot be exported for security reasons ([details](../network-access/file-synchronization/index.md))
- List of on-device **RSS messages** - accessible under web interface → menu Tools → RSS messages ([details](../playback/special-content/rss-feeds.md))
- List of **file metadata** for scheduled deletions ([details](playback-configuration/scheduled-file-deletion.md))
- **Key mapping** for keyboard shortcut mappings ([details](../interactivity/keyboard.md))
- **Triggers** ([details](../interactivity/triggers.md))
- **Media files** (optional; if selected, the backup is saved as a ZIP file that includes the XML, instead of plain XML)

## Manual modification of the backup

The backup file is stored in a human-readable XML format, so it can be modified manually — though this should be done very carefully. Manual editing can be useful for batch changes or automated setup generation. Use a text editor that supports UTF-8 encoding (for example, [Notepad++](https://notepad-plus-plus.org/) on Windows).

After editing, validate the file against the correct XSD schema to ensure it is structurally valid, for example using XML Tools plugin for Notepad++, or an online validators like <http://www.utilities-online.info/xsdvalidation/>.

## XSD Schemas by Version

You can download the XSD schema that matches your Slideshow version:

-   [configuration.xsd - XSD schema for version 4.11.x (current)](xsd/configuration-v4_10.xsd)
-   [configuration.xsd - XSD schema for version 4.10.x (old)](xsd/configuration-v4_10.xsd)
-   [configuration.xsd - XSD schema for version 4.9.x (old)](xsd/configuration-v4_9.xsd)
-   [configuration.xsd - XSD schema for version 4.8.x (old)](xsd/configuration-v4_8.xsd)
-   [configuration.xsd - XSD schema for version 4.7.x (old)](xsd/configuration-v4_7.xsd)
-   [configuration.xsd - XSD schema for version 4.6.x (old)](xsd/configuration-v4_6.xsd)
-   [configuration.xsd - XSD schema for version 4.5.x (old)](xsd/configuration-v4_5.xsd)
-   [configuration.xsd - XSD schema for version 4.4.x (old)](xsd/configuration-v4_4.xsd)
-   [configuration.xsd - XSD schema for version 4.0.x, 4.1.x, 4.2.x, 4.3.x (old)](xsd/configuration-v4_0.xsd)
-   [configuration.xsd - XSD schema for version 3.24.x (old)](xsd/configuration-v3_24.xsd)
