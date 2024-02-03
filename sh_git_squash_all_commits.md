# Squash the entire commit history in a Git respository

There are multiple ways to do this.

1.  ```sh
    git checkout --orphan new-master master
    git commit -m "Squash"
    git branch -M new-master master
    ```
1.  ```sh
    git branch beforeReset
    git reset --soft $root_commit
    git commit --amend
    ```
1.  Initiate rebase of all commits:

    ```sh
    git rebase --root -i
    ```

    For each commit except the first, change `pick` to `squash`. Vim command:

    ```vim
    2,s/^pick/squash/
    ```
