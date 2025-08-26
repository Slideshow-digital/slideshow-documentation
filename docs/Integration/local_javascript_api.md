# Local JavaScript API

Local JavaScript API allows you to create interactive digital signage screens by creating an HTML file, which can change the content displayed in each zone on the screen. For example, clicking a button in one part of the screen can trigger the display of a particular file in another part of the screen. Setting up such an HTML file requires at least basic knowledge of HTML and JavaScript.

All methods of the API are static methods in class `SlideshowAPI`. It can be accessed from HTML files displayed on the screen, the HTML file is displayed either from the internal memory, or as a website loaded from an URL file saved in the internal memory.

Local JavaScript API is disabled by default for security reasons and can be enabled via web interface – menu `Settings` – `Device settings` – `Allow local API for web pages`.

!!! warning "Security consideration"
    Enabling local JavaScript API and displaying 3rd party web pages may expose your Android device to an attacker. Make sure you display only verified web pages if you enable the local JavaScript API.

## Available methods

``` title="Display file on the screen:"
SlideshowAPI.showFile(zoneName, fileName, duration);

    zoneName – name of the zone, in which the file should be displayed, 
	           or null for the main zone
    fileName – name of the file to display
    duration – duration of display in seconds
```

``` title="Set playlist:"
SlideshowAPI.setPlaylist(zoneName, playlistName);

    zoneName – name of the zone, in which the playlist should be displayed, 
	           or null for the main zone
    playlistName – name of the playlist to display
```

``` title="Clear set playlist:"
SlideshowAPI.clearPlaylist(zoneName);

    zoneName – name of the zone, in which the playlist should be cleared 
	           (returning to the scheduled playlist), 
	           or null for the main zone
```

``` title="Move to the next file in playlist:"
SlideshowAPI.next(zoneName);

    zoneName – name of the zone, in which the file should be displayed, 
	           or null for the main zone
```

``` title="Pause playback:"
SlideshowAPI.pause(zoneName);

    zoneName – name of the zone, in which the playback should be paused, 
	           or null for the main zone
```

``` title="Resume playback:"
SlideshowAPI.resume(zoneName);

    zoneName – name of the zone, in which the playback should be resumed, 
	           or null for the main zone
```

## Example

You can use the HTML file bellow as an example. It contains several buttons, each which a description what it does. The JavaScript call is in the “onclick” property of the each button.

[Example HTML file with JavaScript API](local_js_api_example.html){:download}

``` html
<html>
  <head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <style> body { background-color: white; } </style>
  </head>
  <body>
    <h1>Examples for Slideshow's Local JavaScript API</h1>

    <h2>Method SlideshowAPI.showFile(zoneName, fileName, length)</h2>

    <button onclick="SlideshowAPI.showFile(null, 'image1.jpg', 5);"> 
        Display file image1.jpg <br>in the main zone <br>for 5 seconds 
    </button>
    <button onclick="SlideshowAPI.showFile('Side zone', 'images/image2.jpg', 10);">
        Display file image2.jpg from folder images <br>on the zone called Side zone <br>for 10 seconds
    </button>
    <button onclick="SlideshowAPI.showFile(null, 'video1.mp4', 10);">
        Display file video1.mp4 <br>in the main zone <br>(length is ignored)
    </button>
    <button onclick="SlideshowAPI.showFile('audio', 'song1.mp3', 10);">
        Play file song1.mp3 <br>as a background audio <br>(length is ignored)
    </button>

    <h2>Method SlideshowAPI.next(zoneName)</h2>

    <button onclick="SlideshowAPI.next(null);">
        Go to the next item <br>in the playlist in the main zone
    </button>
    <button onclick="SlideshowAPI.next('Side zone');">
        Go to the next item <br>in the playlist on the zone called Side zone
    </button>
    <button onclick="SlideshowAPI.next('audio');">
        Go to the next item <br>in the audio playlist
    </button>

    <h2>Method SlideshowAPI.setPlaylist(zoneName, playlistName)</h2>

    <button onclick="SlideshowAPI.setPlaylist(null, 'Video playlist');">
        Set playlist called Video playlist <br>in the main zone
    </button>
    <button onclick="SlideshowAPI.setPlaylist('Side zone', 'Image playlist');">
        Set playlist called Image playlist <br>on the zone called Side zone
    </button>

    <h2>Method SlideshowAPI.pause(zoneName) / SlideshowAPI.resume(zoneName)</h2>

    <button onclick="SlideshowAPI.pause(null);">
        Pause playback <br>in the main zone
    </button>
    <button onclick="SlideshowAPI.resume('Side zone');">
        Pause playback <br>on the zone called Side zone
    </button>
    <button onclick="SlideshowAPI.resume(null);">
        Resume playback <br>in the main zone
    </button>
  </body>
</html>
```