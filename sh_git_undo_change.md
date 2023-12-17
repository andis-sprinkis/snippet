# Undoing changes in a Git repository

Undo last commit:

```sh
git reset --soft HEAD~1
git reset --hard HEAD~1
```

Remove from repo:

```sh
git rm -rf *
```

Unstage a directory:

```sh
git rm --cached -r dir
```

Abort a merge:

```sh
git merge --abort
```
