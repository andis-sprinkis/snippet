# Access JSON array and object elements with jq

Print a colored and formatted output:

```sh
example='{ "lorem": [ { "ipsum": "hello world" } ] }'

echo "$example" | jq
# or
echo "$example" | jq "."
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

Select and ouput value `lorem[0].ipsum`:

```sh
example='{ "lorem": [ { "ipsum": "hello world" } ] }'

echo "$example" | jq ".lorem[0].ipsum"
```

```json
"hello world"
```
