```lua
local status_mod, mod = pcall(require, "mod")

if (status_mod) then
    mod.foo()
end
```
