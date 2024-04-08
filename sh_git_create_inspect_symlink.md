# Symbolic link use in a Git repository

Creating, committing and inspecting the details of a symbolic link to a file that exists in a repository:

```sh
ln -s "./example/the_file" "./the_link"
git add "./the_link"
git commit -m "added the_link"
git ls-files -s "./the_link"
# 120000 1596f9db1b9610f238b78dd168ae33faa2dec15c 0       symlink
git cat-file -p "1596f9db1b9610f238b78dd168ae33faa2dec15c"
# example/the_file
```
