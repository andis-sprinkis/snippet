# Git remotes

Add a remote:

```sh
git remote add private SSH
```

Change the remote URL:

```sh
git remote set-url private SSH
```

Rename a remote:

```sh
git remote rename origin private
```

Remove a remote:

```sh
git remote rm private
```

Add a remote upstream (e.g. for a fork):

```sh
git remote add upstream SSH
```

Set the default upstream:

```sh
git push --set-upstream origin master
```

## Sources

-   [Git cheat sheet](https://steinbaugh.com/posts/git.html)
