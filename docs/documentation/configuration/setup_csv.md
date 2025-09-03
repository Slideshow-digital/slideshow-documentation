# Setup.csv file

You can use setup.csv file for definition which uploaded file should be played in which time interval. This functionality can be used for changing the displayed files over time without direct access to Slideshow's web interface.

## Location

File setup.csv can be located:

- In ZIP archive, which can be uploaded through web interface, FTP, USB Flash drive or downloaded from internet via [File synchronization](https://slideshow.digital/documentation/file-synchronization-http-ftp/).
- In [Google Drive](https://slideshow.digital/documentation/file-synchronization-google-drive/) or [Dropbox](https://slideshow.digital/documentation/file-synchronization-dropbox/) folder, which is synchronized via File synchronization
- In "slideshow" folder on the [USB Flash drive](https://slideshow.digital/documentation/file-storage/)

If this file isn't present in ZIP archive or in the directory, all files will be copied and no special handling of any file is performed (the default behavior).

## File format

File setup.csv is a text file (UTF-8 encoded) with one command on each line. The number of commands in one file is not limited, use as many commands as you need to.

You can use comma `,` or semicolon `;` as a separator of the parts of the command, Slideshow will recognize either of the characters.

## Commands

Each line of setup.csv file can contain one of the following commands:

- The line starts with two slashes `//` or hash sign `#` - used for comment, this line won't be processed, it is just a note for the author of the file.
- The line starts with colon `:` - special command:
    - `:VALID;date from;date to` - whole setup.csv file is valid only between the two dates. Outside of this interval, no subsequent commands will be processed and no file at all will be copied. One of the dates may be an empty string.
    - `:DELETE;file name` - deletes file in the folder where files should be copied. You can either enter the exact file name or use the wildcard `*` to specify multiple files.
    - `:CONFIG;file name;delete` - restore [XML configuration backup](https://slideshow.digital/documentation/xml-configuration/) from the file. "External config import" has to be enabled in [Device settings](https://slideshow.digital/documentation/settings/) in order for this functionality to work (this setting acts a security check). The part `delete` means that the previous configuration will be replaced. Skip this part if you want to just add the new configuration and keep the previous one at the same time.
    - `:UPDATE;APK file name;version` - [remotely update](https://slideshow.digital/documentation/remote-update/) Slideshow application. The version part should be set to the version of Slideshow app which is in the APK file, it is used as a check if the app is already updated or not (e.g. "3.13.0"). "External config import" has to be enabled in Device settings in order for this functionality to work (this setting acts as a security check). Works only on [rooted devices](https://slideshow.digital/documentation/root-on-android/).
    - `:WIFI;ssid;password` - tries connecting to a WiFi network. Progress of the connection is displayed as a short message at the bottom of the screen. Confirmation on the screen of the Android device might be needed, depending on the Android version.
    - `:RELOAD` - reload Slideshow app after processing of the files is finished. "External config import" has to be enabled in Device settings in order for this functionality to work (this setting acts as a security check).
    - `:REBOOT` - reboot the Android device after processing of the files is finished. "External config import" has to be enabled in Device settings in order for this functionality to work (this setting acts as a security check). Works only on [rooted devices](https://slideshow.digital/documentation/root-on-android/).
- Other lines - definition from when until when should the file be displayed/played (provided that it will be in a playlist). The order is file name, date from, date to. One of the dates may be an empty string. If date to is in the future, the file will be [automatically deleted](https://slideshow.digital/documentation/scheduled-file-deletion/) at that date.

## Date formats

The dates in setup.csv file can be in the one of the following formats:

- `yyyy-MM-dd` (e.g. 2019-12-07)
- `yyyy-MM-dd HH:mm` (e.g. 2019-12-07 13:20)
- `dd.MM.yyyy` (e.g. 07.12.2019)
- `dd.MM.yyyy HH:mm` (e.g. 07.12.2019 13:20)
- `yyyy-MM-dd'T'HH:mm:ss` (e.g. 07.12.2019T13:20:00) - ISO 8601 format without time zone
- Timestamp - number of milliseconds since 1 January 1970, 00:00:00 GMT

All times are parsed in 24-hour format.

## Examples with explanation

Valid from 1 December 2019, delete all files with .jpg extension and copy all files from ZIP / USB Flash drive:
```
:VALID;2019-12-01;
:DELETE;*.jpg
```

Valid until 31 December 2019, delete file test.png, display file banner.jpg only after 15 December 2019, display other files at all times (until the global valid date of 31 December 2019):

```
:VALID;;31.12.2019
:DELETE;test.png
"banner.jpg";15.12.2019;
```

Valid always, files image1.jpg and image2.jpg will be displayed only in December 2019 and they will be automatically deleted on 31 December 2019 at 12:00:

```
// Comment example
image1.jpg,1.12.2019,31.12.2019 12:00
image2.jpg,1.12.2019,31.12.2019 12:00
```

Import XML configuration from file configuration.xml and replace the previous configuration of Slideshow:
```
:CONFIG,configuration.xml,delete
```

## Sample


Try uploading this ZIP file containing two images and setup.zip to the Slideshow app. Only one image will be played at any time.

-   [files.zip - download](https://slideshow.digital/wp-content/uploads/2020/01/files.zip)

## Troubleshooting

You can check whether the file was recognized by checking the logs (through the web interface → menu `Information` → `Log`) and looking for the line similar to this:
```
02.01.20 18:43:26 DEBUG sk.mimac.slideshow.csv.FileDataParser - Detected file data file 'setup.csv'
```
