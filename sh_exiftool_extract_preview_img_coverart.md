# Extracting the embedded preview images from audio, video, image files using `exiftool`

- Extract `Picture` type of preview image from the file `./audio.mp3`, saving it as file `./picture.jpg`:

    ```sh
    exiftool -b -picture -W "./picture.jpg" "./audio.mp3"
    ```

- Extract all types of preview images from files in directory `./media`, adding the tag name to the output preview image file names e.g. `./media/media-file-name_Picture.jpg` as the `Picture` preview file from `./media/media-file-name.mp3`:

    ```sh
    exiftool -a -b -W "%d%f_%t%-c.%s" -preview:all "./media"
    ```

- List all of the preview image type tags the `exiftool` build supports:

    ```sh
    exiftool -list -Preview:All
    ```

    Example output:

    ```
    Available Preview tags:
    BannerImage BinaryData ConfidenceMapImage CoverArt DepthMapImage
    DualCameraImage EmbeddedImage EmbeddedImage2 EmbeddedJPG EmbeddedPNG
    FullSizeImage GainMapImage HDRImage IDCPreviewImage JpgFromRaw JpgFromRaw2
    MPImage ObjectPreviewData OtherImage PageImage Photo PhotoshopBGRThumbnail
    PhotoshopThumbnail Picture Preview PreviewImage PreviewImage1 PreviewImage2
    PreviewJXL PreviewPDF PreviewPICT PreviewPNG PreviewTIFF PreviewWMF
    RatioImage RawThermalImage RightAlbedo SanyoThumbnail TIFFPreview
    ThumbnailImage ThumbnailPNG ThumbnailTIFF UnknownThumbnail ZoomedPreviewImage
    ```

## Resources

- [exiftool Application Documentation](https://exiftool.org/exiftool_pod.html)
- [exiftool Application Documentation - READING EXAMPLES](https://exiftool.org/exiftool_pod.html#READING-EXAMPLES)
