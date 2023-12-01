# Attempting to load and use a Lua module which may not exist

```lua
local status_mod, mod = pcall(require, "mod")

if (status_mod) then
    mod.foo()
end
```
