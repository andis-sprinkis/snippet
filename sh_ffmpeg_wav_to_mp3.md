# Converting WAV audio format file to MP3 with ffmpeg

```sh
ffmpeg -i input.wav -vn -ar 44100 -ac 2 -b:a 320k output.mp3
```

From the ffmpeg manpage:

> A stream specifier can match several streams, so that the option is applied to all of them. E.g. the stream specifier in __"-b:a 128k"__ matches all audio streams.
