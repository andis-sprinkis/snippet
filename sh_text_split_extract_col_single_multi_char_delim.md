# Extracting a single or a multi character sequence delimited text column in Shell

Single character delimiter - printing the second text column, delimited by character `~`:

```sh
text="lorem~ipsum~dolor
minim~labore~adipisicing"

echo "$text" | cut -d "~" -f "2"
# or
echo "$text" | awk -F"~" '{ print $2 }'
```

Multiple characters delimiter - printing the second text column, delimited by character sequence `~#~`:

```sh
text="lorem~#~ipsum~#~dolor
minim~#~labore~#~adipisicing"

echo "$text" | awk -F"~#~" '{ print $2 }'
```

Output:

```
ipsum
labore
```
