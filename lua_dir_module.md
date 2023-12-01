# Loading all Lua modules from a directory as one module

Files:

```
example.lua
mod/init.lua
mod/mod0.lua
mod/mod1.lua
mod/mod2.lua
```

`example.lua`:

```lua
require('mod')
```

`mod/init.lua`:

```lua
require('mod.mod0')
require('mod.mod1')
require('mod.mod2')
```

`mod/mod0.lua`, `mod/mod1.lua`, `mod/mod2.lua`:

```lua
local M = {}

return M
```
