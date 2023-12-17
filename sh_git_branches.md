# Git branches

Fetch remotes. This will update the list of remote branches available:

```sh
git fetch --all
```

Check out a remote branch locally:

```sh
git checkout -b master origin/master
```

Rename a branch locally and remotely:

```sh
# Rename branch locally.
git branch -m old_branch new_branch
```

```sh
# Delete the old branch.
git push origin :old_branch
```

```sh
# Push the new branch, set local branch to track the new remote.
git push --set-upstream origin new_branch
```

Delete a local branch:

```sh
git branch -D develop
```

Delete a remote branch:

```sh
git push origin --delete develop
```

Update local branch information:

```sh
git remote update origin --prune
git branch --all
```

## Sources

-   [Git cheat sheet](https://steinbaugh.com/posts/git.html)
