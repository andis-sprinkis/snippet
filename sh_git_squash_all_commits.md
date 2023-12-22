# Squash the entire commit history in a Git respository

There are several ways to squash the entire commit history in Git.

-   ```sh
    git checkout --orphan new-master master
    git commit -m "Squash"
    git branch -M new-master master
    ```
-   ```sh
    git branch beforeReset
    git reset --soft $root_commit
    git commit --amend
    ```
-   Initiate rebase of all commits:

    ```sh
    git rebase --root -i
    ```

    For each commit except the first, change `pick` to `squash`. Vim command:

    ```vim
    2,s/^pick/squash/
    ```
