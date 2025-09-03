# Audio streams

Slideshow supports playing HTTP audio streams as a background audio using content with type `Audio/video stream`. 

Only HTTP / HTTPS audio streams are supported. Audio stream URLs for various internet radios can be found, for example, on [https://streamurl.link](https://streamurl.link), or on the website of your favorite radio. The URL has to point directly to the audio stream, not to a website containing an embedded audio player.

If the stream also has a video part, and it is set as an audio playlist, the video part of the stream will be ignored and only audio will be played.

## Setting up audio stream

Steps necessary to set up playing audio streams through Slideshow’s web interface:

1. Create new content with the following setup:
    - Type: `Audio/video stream`
    - Path: direct URL of audio stream of your choosing
2. Edit automatically created playlist and set `Sound` to `Audio playlist`.
3. Go to menu `Playlist` → `Audio playlists schedule` and set up schedule for the audio playlist

## Video tutorial

<iframe style="width: 100%; aspect-ratio: 16 / 9;" src="https://www.youtube.com/embed/uETKG_qH--8?feature=oembed&start&end&wmode=opaque&loop=0&controls=1&mute=0&rel=0&modestbranding=0" frameborder="0" allowfullscreen></iframe>
