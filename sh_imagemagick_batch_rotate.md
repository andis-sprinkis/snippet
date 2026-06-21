# Use Imagemagick in shell to rotate a batch of images

By specific file names:

```sh
#!/usr/bin/env sh
set -euf

mkdir -p "./rotated"

# paths_images="image0.JPG
# image1.JPG"
# or
paths_images="$(cat file_list.txt)"

IFS_="$IFS" IFS="
"
for img_path in $paths_images; do
  IFS="$IFS_"
  echo "$img_path"
  img_name="$(basename "$img_path")"
  magick "$img_path" -rotate "-90" "./rotated/${img_name%.JPG}.JPG"
done
IFS="$IFS_"

set +f
mv -f ./rotated/* ./
set -f
rm -rf ./rotated
```

By an integer range of file names:

```sh
#!/usr/bin/env sh
set -euf

mkdir -p "./rotated"

for img in ./ADFE{0019..0293}.JPG; do
  echo "$img"
  magick "$img" -rotate "-90" "./rotated/${img%.JPG}.JPG"
done

set +f
mv -f ./rotated/* ./
set -f
rm -rf ./rotated
```
