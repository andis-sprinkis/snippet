# Use Imagemagick in shell to rotate images specified by an integer range of file names

```sh
for img in ./ADFE{0019..0293}.JPG; do
  echo "$img"
  convert $img -rotate "-90" "./rotated/${img%.JPG}.JPG"
done

rm ADFE{0019..0293}.JPG
mv ./rotated/* ./
rm -rf ./rotated
```
