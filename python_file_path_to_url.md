# Converting a UNIX file path to file URL in Python

```py
import pathlib

pathlib.Path("/example/test path/").as_uri()
```

Output:

```
'file:///example/test%20path'
```
