# Preventing out-of-memory errors on Git hosts with small amount of memory

On the remote server add to the respository `.git/config` file:

```gitconfig
[pack]
  window = 0
```

## Resources

-   [Git - Packfiles](https://git-scm.com/book/en/v2/Git-Internals-Packfiles)
-   [Git - git-repack Documentation](https://git-scm.com/docs/git-repack)
-   [Git - git-pack-objects Documentation](https://git-scm.com/docs/git-pack-objects)
-   [Git - git-gc Documentation](https://git-scm.com/docs/git-gc)
-   [Git - pack-heuristics Documentation](https://git-scm.com/docs/pack-heuristics)
