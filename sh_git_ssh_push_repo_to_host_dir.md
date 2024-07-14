# Pushing a Git repository to a remote host file system directory over SSH

On the host:

```sh
mkdir -p /var/git/repo.git
cd /var/git/repo.git
git init --bare
```

Locally:

```sh
cd repo
git remote rm origin
git remote add origin ssh://usr0@host.alias/var/git/repo.git
git push --set-upstream origin master
```

## Resources

-   [How To Set Up Automatic Deployment with Git with a VPS | DigitalOcean](https://www.digitalocean.com/community/tutorials/how-to-set-up-automatic-deployment-with-git-with-a-vps)
