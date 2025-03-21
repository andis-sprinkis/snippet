# Bash and ZSH shell startup sequences (the loading order of the script files)

The implementation as infered from the Bash and ZSH manpages:

![Graph diagram of the implementation as infered from the Bash and ZSH manpages](./impl-man-pages.svg)

The _actual_ implementation:

![Graph diagram of the actual implementation](./impl-actual.svg)

The above SVG images were generated from the Graphviz files authored and published by Peter Ward as part of the article [Shell startup scripts — flowblok’s blog](https://blog.flowblok.id.au/2013-02/shell-startup-scripts.html).

Hihglights from comments of the article:

1. Jason:

    > Worth noting that on macOS there's also /etc/zshrc, /etc/zshrc_Apple_Terminal, and a /etc/zprofile as well (each called before the user's dot equivalent). This shouldn't matter too often, except that setting a $PROMPT in .zshenv will be overridden by the $PS1 set in /etc/zshrc, for example.

1. fumyas:

    > Where are /etc/zshrc and $ENV in the zsh diagram?

    flowblok:

    > According to the man page, $ENV is not run in a normal zsh startup procedure (only if it’s emulating sh).
    > But you’re right on the /etc/zshrc point, I’ll hopefully update the article soon.

1. Aneesh P U:

    > When I run bash as an interactive login shell, this seems to be the order of execution of the dotfiles and I think it is slightly different from what you have described.
    > /etc/bash.bashrc
    > /etc/profile
    > \~/.bashrc
    > \~/.profile
    > and when ~/. bash_profile is present
    > /etc/bash.bashrc
    > /etc/profile
    > \~/.bash_profile

    Jesús Gómez:

    > At the very least, the bash red path, from /etc/profile split differently between both diagrams, so one of the orders (left to right) is wrong. You mention that the actually correct is the last one... I just want to know if it is not an error in the diagram...
    > So i did the test, creating the 3 files with only an ECHO command, discarding according, and the order I got was the one in the first diagram:
    > `~/.bash_profile || ~/.bash_login || ~/.profile`

    Ian Kirker:

    > To further complicate the issue, I believe reading /etc/bash.bashrc is added by patches in the Debian build.

Copyright of the files in the snapshot of the [flowblok / shell-startup · GitLab](https://heptapod.host/flowblok/shell-startup/-/tree/branch/default?ref_type=heads) repository stored in `./shell-startup-branch-default` subdirectory is owned by Peter Ward.

# Resources

- [flowblok / shell-startup · GitLab](https://heptapod.host/flowblok/shell-startup/-/tree/branch/default?ref_type=heads)
- [Shell startup scripts — flowblok’s blog](https://blog.flowblok.id.au/2013-02/shell-startup-scripts.html) ([archived](https://archive.is/20220318215750/https://blog.flowblok.id.au/2013-02/shell-startup-scripts.html))
- [Faster and enjoyable ZSH (maybe) • Alex T.](https://htr3n.github.io/2018/07/faster-zsh/) ([archived](https://archive.is/30xVW))
