# Settings

General settings of Slideshow can be changed via the web interface → menu `Settings` → `Device settings`. Applying the change of some settings requires reload of the application (close and reopen), for example, through menu `Settings` → `Reboot / reload` → `Reload application`.

A few of the settings are available also through the on-screen menu → `Basic settings`.

You can back up and restore these settings using [XML configuration backup](configuration-backup-restore.md).

## List of available settings

### General settings
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Device name | Text | Device model | Name of the device. |
| Default volume in % | Number (0–100) | — | Volume for videos, music or internet radio, from 0% to 100%. You can change the current volume on the home page. |
| Language | Choice | Device language or English | Language of the user interface. |
| User agent for HTTP requests | Text | — | User agent header used for requests made by this app (e.g., for displaying web pages or downloading content). *Reload is required for applying this change.* |
| Allow uploading all file types | Checkbox | No | Allow all file types (not just supported images, videos, etc.) through the File manager, File synchronization and USB flash drive. |
| Keep screen on | Checkbox | Yes | Keep the device’s screen on while this app is running. *Reload is required for applying this change.* |
| Keep the background service | Checkbox | No | Keep the background service running even if the app is not in the foreground. Web interface, FTP and other services will be available even if the app is closed, as long as the notification in the Android status bar is active. |
| Enable watchdog service | Checkbox | No | Enable background watchdog service, which will start the app again if it is not in the foreground for longer than 2 minutes. Only for devices used exclusively with this app. *Device restart is required for applying this change.* |

### Screen layout
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Screen orientation | Choice | Default | Screen orientation for this application. Some options might not work on some devices (support depends on the hardware). *Reload is required for applying this change.* |
| Rotate layout every day | Checkbox | No | Swap the screen layout vertically or horizontally every 24 hours to prevent screen burn-in. |
| Use screen layout intervals | Checkbox | No | Use screen layout intervals to determine the current screen layout automatically, instead of the screen layouts schedule. *Reload is required for applying this change.* |
| Wait with screen layout change | Checkbox | No | Change the screen layout based on interval or schedule only after the content playing in the main zone is finished (don’t interrupt videos). |
| Length of showing playlist manually | Number | 3600 (= 1 hour) | How many seconds a manually chosen playlist (through keyboard or web interface) will be shown. |
| Reset order on playlist change | Checkbox | No | Reset order of items with alphabetical type after the playlist is changed or manually selected. If not checked, the order will be preserved across playlists and screen layouts. |

### On-screen formatting
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Image scale type | Choice | Fit center | How to scale images (and videos, if enhanced video player is used) shown on the screen. *Reload is required for applying this change.* |
| Respect image orientation | Checkbox | Yes | Read image orientation from JPEG EXIF attributes and rotate the image on screen accordingly (slightly lowers performance). |
| Video player type | Choice | ExoPlayer + TextureView | Type of internal player for video playback on the screen. If you have a problem with video playback, try changing this setting. *Reload is required for applying this change.* |
| Preload content in playlist | Checkbox | No | Load some of the content (e.g., video files) in advance so the delay between files is shorter. |
| Video input compatibility mode | Checkbox | No | Usable only on Zidoo Z9X box. *Reload is required for applying this change.* |
| Max video duration | Number | Infinity | Maximum time for video playback in seconds. Usable only on older devices if videos tend to get stuck. |
| Video stream buffering (in ms) | Number | — | Duration of network buffering in milliseconds before the video stream playback is started. For ExoPlayer only. *Reload is required for applying this change.* |
| CSS style for Excel | Text | — | CSS rules for showing Excel files, e.g., `font-size:120%`. |
| Mute video for audio playlist | Checkbox | No | Mute audio from any video on screen while any audio playlist is active, so audio sources don’t mix. |
| Show YouTube controls | Checkbox | Yes | Show control slider with YouTube videos. *Reload is required for applying this change.* |
| Show captions from YouTube | Checkbox | No | Show captions (subtitles) from YouTube videos. Does not work with automatically generated captions. *Reload is required for applying this change.* |
| Force audio passthrough | Checkbox | No | Force passthrough of audio track when playing a video. Works only with Video player type **ExoPlayer + SurfaceView** and requires device/TV support. *Reload is required for applying this change.* |
| Display PDF as scrollable | Checkbox | No | Display PDF files as vertically scrollable, instead of page-by-page. |

### WebView

| Setting name | Type | Default value | Description |
|---|---|---|---|
| Default web page zoom | Number | 0 | Zoom of web pages displayed on screen, in percentage. Zero means default (system) zoom. Can be overridden in the `.url` file using the “Enter web page” editor in File manager. |
| Disable security for web pages | Checkbox | No | For displaying web pages on the screen, CORS check and HTTPS certificate check will be completely disabled. **Very insecure — enable only if you understand the implications.** *Reload is required for applying this change.* |
| Allow local API for web pages | Checkbox | No | Allow usage of the local API in web pages displayed on screen. *Reload is required for applying this change.* |
| Clear web cache on start | Checkbox | Yes | Clear the cache for webpages on each start, including cookies, form data and web storage. *Reload is required for applying this change.* |
| Grant web pages permissions | Checkbox | No | Automatically grant permission to access camera, microphone, etc., to web pages displayed inside this app. |

### Content defaults
| Setting name | Type   | Default value | Description |
|---|--------|---------------|---|
| Description text position | Choice | OpenMeteo     | Position of description text in zone. The default is set in Device settings and can be overridden in Content. |
| Description text size | Number | 5             | Size of the description text, as a percentage of the zone height (1-100%). The default is set in Device settings and can be overridden in Content. |

### Weather forecast
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Weather source | Choice | OpenMeteo | Online service used as a source of weather forecast. |
| API key for weather | Text | — | API key for downloading weather information (e.g., OpenWeatherMap or Here). Review licensing of the provider before use. |

### RSS messages
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Maximal length of RSS title | Number | 105 | How many characters of the RSS title should be displayed before clipping. Applied next time the RSS file is fetched. |
| Maximal length of RSS message | Number | 215 | How many characters of the RSS message should be displayed before clipping. Applied next time the RSS file is fetched. |

### External storages
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Storage for media | Checkbox | Internal storage | Select storage where files for playing will be saved. Choose from internal storage of the Android device or external storage (SD card or USB flash drive, if available). External storage has to be always present when this app is running. Check setting `Action on Flash drive insert` if using non-permanent external storage. *Reload is required for applying this change.* |
| Action on Flash drive insert | Choice | Copy files from Flash drive | What should happen when a Flash drive is inserted into the device’s USB port. |
| Folder on Flash drive | Text | slideshow | From which folder on Flash drive to copy files. Empty means the root folder on the Flash drive. Used only if copying from Flash drive is allowed. |
| Priority folder on Flash drive | Text | — | Priority folder on the Flash drive. If this folder exists, only it will be used and the regular folder will be ignored. Keep empty to skip priority folder checking. |
| Target folder from Flash drive | Text | / | Target folder in this app where files from the Flash drive are copied. Slash means the root folder. Used only if copying from Flash drive is allowed. |

### Network interfaces
| Setting name | Type | Default value | Description |
|---|---|---|---|
| HTTP port number | Number | 80 | HTTP port for the Web interface. Rooted device and a free port 8080 is required to use a port number lower than 1024. *Reload is required for applying this change.* |
| HTTPS port number | Number | 443 | HTTPS port for the Web interface. Rooted device and a free port 8443 is required to use a port number lower than 1024. *Reload is required for applying this change.* |
| FTP port number | Number | 21 | FTP port for the FTP interface. Rooted device and a free port 8021 is required to use a port number lower than 1024. *Reload is required for applying this change.* |
| Disable all non‑SSL network interfaces | Checkbox | No | Disable non-secure interfaces on public networks: HTTP and FTP. *Reload is required for applying this change.* |
| Allow reset password | Checkbox | Yes | Allow resetting the admin password through the web interface (requires direct access to the Android device). |
| Keep WiFi on | Checkbox | Yes | Tell Android to keep Wi‑Fi always on and in high performance mode. *Reload is required for applying this change.* |
| Disable HTTP security for loading data | Checkbox | No | Disable HTTPS certificate check while loading external data via HTTPS (weather forecast, RSS feeds, File synchronization, etc.). **Very insecure — enable only if you understand the implications.** *Reload is required for applying this change.* |
| Devices group code | Text | — | Code for discovering other devices with this app. Set the same value on all devices. If empty, discovery is turned off. *Reload is required for applying this change.* |
| Enable device discovery on the internet | Checkbox | No | Enable discovery of other devices with this app on the public internet; otherwise only the local network is scanned. *Reload is required for applying this change.* |

### On-screen control
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Disable keyboard | Checkbox | No | Disable keyboard shortcuts for app control. |
| Enable touch gestures | Checkbox | Yes | Enable touch gestures on screen. |

### Startup
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Start at system boot | Checkbox | No | Start this application automatically after Android boots. On Android 10+ a special permission may be required, accessible from on-screen menu `Basic settings`. |
| Enable kiosk mode after start | Checkbox | No | Automatically lock this app in the foreground after it starts (Lock Task Mode). Setup must be done first via `Settings` → `Device administrator`. Use carefully — may completely lock the device. |
| After start script | Text | — | Bash commands that run after the application starts. |
| Reboot time (watchdog) | Text | — | Automatic device reboot schedule: number of hours, a 24‑hour time for daily reboot, or `HH:MMxN` for every Nth day (e.g., `23:00x3`). Works only on rooted devices. *Reload is required for applying this change.* |
| Reboot on HDMI plug in | Checkbox | No | After detecting HDMI cable plug‑in, automatically reboot the device (useful for some devices with video decoding problems when no HDMI device is plugged in). |

### File synchronization
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Synchronization interval | Number | — | Frequency in seconds for automatic file synchronization. *Reload is required for applying this change.* |
| Allow external config import | Checkbox | No | Allow importing XML configuration and updating the application from external sources (ZIP files, USB Flash drive, Google Drive, Dropbox). |
| How often to check files | Number | 18000 (= 5 hours) | Frequency in seconds to check files that should be deleted at a set time. Requires Internet for time sync. *Reload is required for applying this change.* |
| Google Docs convert settings | Text | — | Settings for automatic Google Docs → PDF conversion. For landscape displays: `top_margin=0.1;bottom_margin=0.1;left_margin=0.1;right_margin=0.1;size=16x9;portrait=false.` |

### MQTT
| Setting name | Type | Default value | Description |
|---|---|---|---|
| MQTT server address | Text | — | MQTT broker address. *Reload is required for applying this change.* |    
| MQTT username | Text | — | Username for authentication. *Reload is required for applying this change.* |
| MQTT password | Text | — | Password for authentication. *Reload is required for applying this change.* |
| Require TLS for MQTT | Checkbox | false | Require TLS for MQTT. *Reload is required for applying this change.* |
| Use websockets for MQTT | Checkbox | false | Use WebSockets for MQTT. *Reload is required for applying this change.* |
| MQTT topic prefix | Text | SLIDESHOW | Topic prefix. *Reload is required for applying this change.* |
| MQTT topic name | Text | Device’s MAC address | Identifier; if not entered, the device MAC address (if available) will be used. *Reload is required for applying this change.* |
| Report data through MQTT | Checkbox | false | Automatically send device info through MQTT every 2 minutes. *Reload is required for applying this change.* |
| Report statistics through MQTT | Checkbox | false | Automatically report display statistics of files through MQTT every 2 minutes. *Reload is required for applying this change.* |

### Serial port
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Serial port path | Text | — | Enter `USB` for serial over USB or `/dev/ttyXX` for direct serial. If empty, the app will not read data from the serial port. *Reload is required for applying this change.* |
| Serial port baud rate | Number | 9600 | Baud rate of the serial connection, usually 4800, 9600, 19200, 38400 or 57600. *Reload is required for applying this change.* |
| Serial port data bits | Number | 8 | *Reload is required for applying this change.* |
| Serial port stop bits | Number | 1 | *Reload is required for applying this change.* |
| Serial port parity | Number | 0 | *Reload is required for applying this change.* |

### Face detection
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Camera for face detection | Choice | — | Which camera to use. If no camera is selected, face detection is turned off. Camera permission is required (grant via on-screen menu → Basic settings → Request camera permission). *Reload is required for applying this change.* |
| Frame rotation for face detection | Number | 0 | Rotation of camera frame in degrees (0, 90, 180 or 270). |
| Delay between frames for face detection | Number | 800 | Delay in milliseconds between two face detection frame processing runs. Higher values lower CPU load. |

### Open Sound Control (OSC)
| Setting name | Type | Default value | Description |
|---|---|---|---|
| Enable OSC communication | Checkbox | false | Enable integration using the Open Sound Control network protocol. *Reload is required for applying this change.* |
| OSC protocol | Choice | UDP | Network protocol used for listening for Open Sound Control commands. *Reload is required for applying this change.* |
| OSC network port | Number | 57110 | Network port on which the app will listen for Open Sound Control commands. *Reload is required for applying this change.* |

### Network watchdog (ping)
| Setting name | Type | Default value | Description |
|---|---|---|---|
| IP address for pings | Text | — | IP address or hostname of a network device that should be pinged for watchdog. If no address is entered, the network watchdog is turned off. *Reload is required for applying this change.* |
| Ping default gateway | Checkbox | No | Use default gateway for watchdog pings (may be used instead of IP address). Watchdog will be active only if the default gateway is known during app startup. *Reload is required for applying this change.* |
| Delay between pings (in s) | Number | 30 | Delay in seconds between consecutive pings. *Reload is required for applying this change.* |
| No. of failed pings for reboot | Number | 3 | Number of consecutive failed pings after which the device is rebooted. Works only on rooted devices. |

### SNMP

| Setting name | Type     | Default value | Description                                                                                                                          |
|---|----------|---------------|--------------------------------------------------------------------------------------------------------------------------------------|
| Enable SNMP agent | Checkbox | false         | Whether to enable SNMP (Simple Network Management Protocol) v2c agent for monitoring. *Reload is required for applying this change.* |
| Port for SNMP agent | Number   | 1161          | UDP port number for SNMP agent. Only port numbers higher than 1000 are available. *Reload is required for applying this change.*                  |
| SNMP community string | Text     | public        | Security community string for SNMP. *Reload is required for applying this change.*            |
