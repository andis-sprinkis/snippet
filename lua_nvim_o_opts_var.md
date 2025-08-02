# Neovim options and variables

TODO: Add code examples.
TODO: `vim.api.nvim_get/set_option_value("option_name", { })`, `vim.api.nvim_get/set_option_value("option_name", { buf/win = 1 })`

## Options

- `vim.o`

    - > Get or set options.
      >
      > Works like `:set`, so buffer/window-scoped options target the current buffer/window.
      >
      > Invalid key is an error.
    - > Vim options can be accessed through `vim.o`, which behaves like Vimscript `:set`.
      >
      > Vimscript: `set number`
      >
      > Lua: `vim.o.number = true`

    - Variants:

        - `vim.go`

            - > Get or set global options. Like `:setglobal`. Invalid key is an error.
              >
              > Note: this is different from `vim.o` because this accesses the global option value and thus is mostly useful for use with global-local options.

        - `vim.bo[{bufnr}]`
            - > Get or set buffer-scoped options for the buffer with number `{bufnr}`.
              >
              > Like `:setlocal`. If `{bufnr}` is omitted then the current buffer is used.
              >
              > Invalid `{bufnr}` or key is an error.
        - `vim.wo[{winid}][{bufnr}]`

            - > Get or set window-scoped options for the window with handle {winid} and buffer with number {bufnr}. Like `:setlocal` if setting a global-local option or if {bufnr} is provided, like `:set` otherwise.
              >
              > If {winid} is omitted then the current window is used.
              >
              > Invalid {winid}, {bufnr} or key is an error.
            - > Note: only {bufnr} with value `0` (the current buffer in the window) is supported.

- `vim.opt`
    - > A special interface `vim.opt` exists for conveniently interacting with list- and map-style options from Lua: It allows accessing them as Lua tables and offers object-oriented method for adding and removing entries.
    - Variants:
        - `vim.opt_local`
            - > In any of the above examples, to replicate the behavior `:setlocal`, use `vim.opt_local`.
        - `vim.opt_global`
            - > \[...\] Additionally, to replicate the behavior of `:setglobal`, use `vim.opt_global`.

## Variables

> The Vim editor global dictionaries `g:` `w:` `b:` `t:` `v:` can be accessed from Lua conveniently and idiomatically by referencing the `vim.*` Lua tables described below. In this way you can easily read and modify global Vimscript variables from Lua.

- `vim.g`
    - > Global (`g:`) editor variables.
      >
      > Key with no value returns `nil`.
- `vim.w`
    - > Window-scoped (`w:`) variables for the current window.
      >
      > Invalid or unset key returns `nil`. Can be indexed with an integer to access variables for a specific window.
- `vim.b`
    - > Buffer-scoped (`b:`) variables for the current buffer.
      >
      > Invalid or unset key returns `nil`. Can be indexed with
      >
      > an integer to access variables for a specific buffer.
- `vim.t`
    - > Tabpage-scoped (`t:`) variables for the current tabpage.
      >
      > Invalid or unset key returns `nil`. Can be indexed with an integer to access variables for a specific tabpage.
- `vim.v`

    - Predefined Vim variables (`vvars`).

    - > `v:` variables.
      >
      > Invalid or unset key returns `nil`.
