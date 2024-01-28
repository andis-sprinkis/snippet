# Piping `piper` TTS audio ouput to the `mpv` media player

```sh
 cat ./input.txt | piper --model ./piper-voices/en/en_US/lessac/medium/en_US-lessac-medium.onnx --output-raw | mpv --demuxer=rawaudio --demuxer-rawaudio-rate=22050 --demuxer-rawaudio-channels=1 -
```

## Resources

-   [rhasspy/piper: A fast, local neural text to speech system](https://github.com/rhasspy/piper)
-   [rhasspy/piper-voices · Hugging Face](https://huggingface.co/rhasspy/piper-voices)
