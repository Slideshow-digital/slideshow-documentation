# Content and playlists

Content and playlists allow you to customize what is displayed on the screen.

You can manage these settings from Slideshow's [web interface](../../network-access/web-interface.md).

## Content

Content describes what exactly should be played or displayed on the screen. There several types of content:

- **Single file** - play exactly one file stored in the device's internal memory
- **Files alphabetically** - play one or more [files](../../playback/supported-media-types.md) stored in the device's internal memory in alphabetical order. You can group files based on the folder they are in, prefix of their name or their extension.
- **Files randomly** - play one or more files stored in the device's internal memory in random order (a special algorithm is used, so you won't get the same file two consecutive times). You can group files based on the folder they are in, prefix of their name or their extension.
- **Audio/video stream** - network stream containing audio or video (e.g. webcam feed, [internet radio](../../playback/special-content/audio-stream.md), internet TV, [video stream](../../playback/special-content/video-stream.md))
- **Date/time** - displays current date and/or time. Device's internal clock and time zone is used.
- **Weather** - displays weather forecast or current weather from an [online service](../../playback/special-content/weather-forecast.md)
- **RSS messages** - displays [RSS feeds](../../playback/special-content/rss-feeds.md) (e.g. news)
- **Plain text** - displays single line of static text, without any formatting
- **Nothing** - just zone background is displayed (solid color or linear / radial gradient), useful for advanced screen layouts
- **Today's name day** - display first name that currently celebrates [name day](../../playback/special-content/name-days.md)
- **Video input** - preview from [camera or HDMI input](../../playback/special-content/video-input.md)
- **YouTube video** - online video from YouTube
- **Android widget** - [widget](../../playback/special-content/android-widgets.md) installed in the Android operating system

For types **Files alphabetically** and **Files randomly** you can enter the field `Path` in several formats according to which files you would like to pick, even combine the formats:

- Only one file, by entering file name directly, as is (e.g. `image1.jpg`. You can also use File manager (via menu Files) -- right click on a file -- Create new content from here, which will pre-fill the entire path.
- All files in one folder, by entering folder name and a wildcard sign (e.g. `folder1/*`). You can also use File manager (via menu Files) -- right click on a folder -- Create new content from here, which will pre-fill the entire path.
- All files in one folder and its subfolders, by entering folder name and a double wildcard (e.g. `folder1/**`).
- All files in all folders and subfolders, by entering a double wildcard (`**`).
- Several paths, separated by colon sign (e.g. `folder1/*:folder2/*`)

Content can be created and edited through menu `Content`.

## Playlist

Playlist consists of one or more content, which is played in the set order in an endless cycle, until the playlist is changed (either manually or due to schedule). During the cycle, each content is resolved to only a single file, image or stream. This is then played for a set amount of seconds (except for audio files, video files and moving RSS messages, which are always played for their full length). After finishing the content, the playlist moves on to the next content. There are three types of playlists based on how the audio is played:

- **Mute** - no audio is played from the videos and streams in this playlist
- **From video** - audio is played if video or video stream is displayed
- **Audio playlist** - special playlist for only audio files/streams, playlist with this type cannot be assigned to a screen layout zone, see [Audio playlists schedule](layout-playlist-scheduling.md)

After creating a content, playlist containing the new content is created automatically as well. If you want to use just one content in the playlist, it is not necessary to create a separate playlist.

Playlists can be created and edited through menu `Playlists`.
