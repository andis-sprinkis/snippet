# Listing files in a Git repository

List files that are in the index:

```sh
git ls-files
```

List the staged files:

```sh
git ls-files --stage
```

Lists files in the index and are different than `HEAD` or aren't commited:

```sh
git ls-files --modified
```

List the files not in the index:

```sh
git ls-files --others
```
