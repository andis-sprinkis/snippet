# Use Imagemagick in shell to rotate a batch of images

By specific file names:

```sh
mkdir -p "./rotated"

images="image0.JPG
image1.JPG"
# or
images="$(cat file_list.txt)"

ifs_old="$IFS"
IFS="
"

for img in $images; do
  echo "$img"
  convert "$img" -rotate "-90" "./rotated/${img%.JPG}.JPG"
done

IFS="$ifs_old"

mv -f ./rotated/* ./
rm -rf ./rotated
```

By an integer range of file names:

```sh
mkdir -p "./rotated"

for img in ./ADFE{0019..0293}.JPG; do
  echo "$img"
  convert $img -rotate "-90" "./rotated/${img%.JPG}.JPG"
done

mv -f ./rotated/* ./
rm -rf ./rotated
```
