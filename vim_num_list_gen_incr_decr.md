# Generating and modifying an incremental or decremental numerical range list in Vim

## Using `<C-a>`, `<C-x>`

Generating a list:

1. Generate the initial list with 6 items and 0 as the starting number with `i0<Esc>yy5p`:

    ```
    0
    0
    0
    0
    0
    0
    ```

1. Select the list lines with `k<C-v>5j`
1. Increment or decrement:
    - By 1 with `g<C-a>`.
        ```
        1
        2
        3
        4
        5
        6
        ```
    - By 5 with `5g<C-a>`.
        ```
        5
        10
        15
        20
        25
        30
        ```
    - By -1 with `g<C-x>`.
        ```
        -1
        -2
        -3
        -4
        -5
        -6
        ```
    - By -5 with `5g<C-x>`.
        ```
        -5
        -10
        -15
        -20
        -25
        -30
        ```

Incrementing or decrementing an existing list:

```
35
36
37
38
39
40
```

1. Select the list lines with `<C-v>5j`
1. Increment or decrement.
    - By 1 with `<C-a>`
        ```
        36
        37
        38
        39
        40
        41
        ```
    - By 5 with `5<C-a>`
        ```
        40
        41
        42
        43
        44
        45
        ```
    - By -1 with `<C-x>`
        ```
        34
        35
        36
        37
        38
        39
        ```
    - By -5 with `5<C-x>`
        ```
        30
        31
        32
        33
        34
        35
        ```

## Using `:put=range()`

Generate a list with 6 items, incremented by 1 and 0 as the starting number:

```vim
:put=range(0,5)
```

```
0
1
2
3
4
5
```

Generate a list with 6 items, incremented by -1 and 5 as the starting number:

```vim
:put=range(5,0,-1)
```

```
5
4
3
2
1
0
```

Generate a list with 6 items, incremented by 5 and 0 as the starting number:

```vim
:put=range(0,30,5)
```

```
0
5
10
15
20
25
```

Generate a list with 6 items, incremented by -5 and 0 as the starting number:

```vim
:put=range(0,-25,-5)
```

```
0
-5
-10
-15
-20
-25
```

Generate a list with 6 items, incremented by 5 and -25 as the starting number:

```vim
:put=range(-25,0,5)
```

```
-25
-20
-15
-10
-5
0
```
