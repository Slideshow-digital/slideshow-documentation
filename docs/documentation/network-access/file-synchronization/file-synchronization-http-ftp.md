# File synchronization from HTTP or FTP

There are several ways how to add new files for display to Slideshow application, but most of them require being near the device (either within the physical reach for upload via USB flash drive or on the same LAN network for [web interface](../web-interface.md) access -- not counting remote VPN / TeamViewer / RDP, which may be quite challenging to set up or not desired for other reasons).

One of the ways to manage files on Slideshow remotely, even if you are hundreds or thousands kilometers away from the device, is file synchronization using ZIP file from HTTP or FTP server.

## Prerequisites

- Android device with stable access to the internet
- Slideshow application [installed](../../../get-started/index.md) on that device
- HTTP or FTP server accessible from the internet
- WinZip / WinRar / 7-Zip / any other software for creating ZIP files

## How to do it

1. Create a ZIP file with all files (images, videos, etc.) you would like to display with Slideshow app.
2. Upload that ZIP file to your HTTP or FTP server.
3. Login into Slideshow's [web interface](../web-interface.md).
4. Through menu `Settings` → `Device settings` set `Synchronization interval` to `3600` (= 1 hour), or any other interval of your choosing.
5. Through menu `Tools` → `File synchronization` add new entry. Fill the URL address pointing to the ZIP file on your HTTP or FTP server, the address should start with `http://`, `https://` or `ftp://`. Set the file name to `file.zip`, it is important that the file name ends with `.zip`.
![](http_ftp_file_synchronization.jpg)
6. Reload the Slideshow application. After a few seconds, Slideshow will automatically download the ZIP file from your server, unpack it and start displaying the files.
7. If you would like to add new files, just pack them into the ZIP file and upload this new ZIP file to the same location on your HTTP or FTP server from anywhere in the world. Slideshow application will automatically download and unpack it within the download interval (e.g., one hour).

If you encounter any problems with the file synchronization, for example, you can't see any new files in Slideshow, try checking menu `Information` → `Log` for possible problems.

You can also insert [setup.csv](../../configuration/setup-csv.md) file into the ZIP file in order to get more control over which files will be copied.

## Server protected by password

If you would like to protect the file on your server (which is encouraged), you can set up password protection for your HTTP or FTP server. Slideshow supports Basic Authentication mode for both HTTP and FTP.

You can add the username and password to the URL address in Slideshow in the following way:

- **Format:** protocol://username:password@server.domain\
- **Example:** http://admin:admin123@files.slideshow.digital

Slideshow can automatically parse username and password from the URL and use it to log in to the HTTP or FTP server.
