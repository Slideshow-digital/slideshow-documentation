# Web pages

Slideshow app can display web pages and HTML files directly on the screen using of the Android device.

## Displaying web page

Entire web pages from the internet can be displayed using a file with `.url` file extension. If Slideshow detects such a file, it will read the URL address and display the containing website on the screen.

The format of the .url file can be:

- Plain text file with a single line containing the URL address of the website
- URL file created by File manager in Slideshow’s web interface (right-click → `New file` → `URL`) and edited (right-click → `Edit file` → `Enter web page`)
- URL file created in Windows (see [https://fileinfo.com/extension/url](https://fileinfo.com/extension/url))

Online websites can be displayed on the screen only if the device running Slideshow app is connected to the internet. Only pages which are successfully loaded are displayed on the screen. If you are an IT specialist, you can use this functionality for example for displaying Zabbix or Grafana dashboards.

### Password-protected web pages 

Password-protected web pages can be displayed using two methods:

- Pages protected with HTTP basic authentication can be displayed by entering the URL in format `https://username:password@webpage.domain`, for example `https://user:pass123@example.com`. In case the username or password contains a special character, it has to be URL-encoded.
- Pages protected with a login form, you can use the `Enter web page` editor in File Manager. Click on the `Scan page` button, fill in the details and click on `Save`. As there are many various methods for a login form, this method might not work on all pages.

Accessible domains can be restricted via the `Enter web page` editor, by filling `Available domains`. If you leave this field empty, all domains are allowed. Multiple domains can be separated by comma (`,`). In case you fill some domains, Slideshow will allow redirecting only to links in the listed domains, including their subdomains. Loading external JavaScript, CSS and font files is not restricted by this domain list.

![Opening Enter web page in File manager](webpageparser_1.png)
/// caption
Opening `Enter web page` in File manager
///

![Dialog for entering the web page](webpageparser_2.png)
/// caption
Dialog for entering the web page
///

### User Agent

User-Agent HTTP header used for requesting external web pages can be changed with a [setting](../configuration/settings.md) `User agent for HTTP requests`. The default User-Agent based on the actual browser core (which is used if the setting is empty) is the best option for most use-cases.

## Displaying HTML file

Slideshow can directly render files with .html file extension. The HTML file can contain regular HTML code, including iframes and JavaScript, which gives you vast possibilities. The exact supported set HTML/CSS/JavaScript features depend on the version of Android System WebView app.

The default background is transparent, in order to allow HTML overlay. If you would like to have a non-transparent background, add `style="background-color: white"` to the `<body>` tag the HTML file.

HTML files can be also directly edited in a WYSIWYG editor via the web interface → menu `File Manager` → right-click an HTML file → `Edit file` → `CKEditor`. Other editors are available as well, including plain-text editor TextArea.

## Displaying HTML widgets

As an example, using Twitter Publish, you can create an HTML snippet with your Twitter feed, save it as an HTML file to Slideshow and display the Twitter feed on the screen. You can find example with Slideshow’s Twitter bellow: content of the HTML file on the left and the result as rendered by Slideshow app on the screen on the right.

``` html
<html>
  <style>body, html {margin: 0}</style>
  <body>
    <a class="twitter-timeline" data-lang="en" data-width="960" 
	   data-height="1080" data-theme="dark" 
	   href="https://twitter.com/SlideshowPlay?ref_src=twsrc%5Etfw">
	     Tweets by SlideshowPlay
    </a>
    <script async src="https://platform.twitter.com/widgets.js" charset="utf-8">
	</script>
  </body>
</html>
```

![Twitter feed as a widget](webpages_twitter.jpg){ width="320" }
/// caption
Twitter feed as a widget
///

## WebView component

Slideshow is using WebView component to render the web pages. The WebView component can be updated separately from Android system and Slideshow app. The default WebView component is based on Chrome browser, you can change the provider via `Android settings` → `Developer options` → `WebView implementation`.

!!! tip "Keep WebView updated"
    Keeping the WebView component up to date is important for displaying web pages that require the most recent version of the web browser.

- Updating via Google Play Store: <https://play.google.com/store/apps/details?id=com.google.android.webview>
- Updating via direct APK installation: <https://www.apkmirror.com/apk/google-inc/android-system-webview/>

## Video tutorial

<iframe style="width: 100%; aspect-ratio: 16 / 9;" src="https://www.youtube.com/embed/mO5zhGsNdJc?feature=oembed&start&end&wmode=opaque&loop=0&controls=1&mute=0&rel=0&modestbranding=0" frameborder="0" allowfullscreen></iframe>
