# Accessing JSON array and object elements with jq

Print a formatted and colored output from JSON input:

```sh
json='{ "lorem": [ { "ipsum": "hello world" } ] }'

echo "$json" | jq
# or
echo "$json" | jq "."
```

```json
{
  "lorem": [
    {
      "ipsum": "hello world"
    }
  ]
}
```

Return value at `lorem[0].ipsum`:

```sh
json='{ "lorem": [ { "ipsum": "hello world" } ] }'

echo "$json" | jq ".lorem[0].ipsum"
```

```json
"hello world"
```

Return element with entry `ipsum` value `bye`:

```sh
json='[ { "ipsum": "hello" }, { "ipsum": "bye" } ]'

echo "$json" | jq '.[] | select(.ipsum == "bye")'
```

```json
{
  "ipsum": "bye"
}
```
