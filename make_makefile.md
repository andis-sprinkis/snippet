# `make` `makefile`-s

```makefile
DOLOR_OBJECTS = lorem.txt ipsum.txt
clean:
    -rm lorem.txt ipsum.txt           # 'make' ignores the exit status if program begins with a '-'
dolor: $(DOLOR_OBJECTS)               # target ... : prerequisites ...
    baz $(DOLOR_OBJECTS) -o dolor.txt # recipe
    # ...
ipsum: ipsum.txt
    bar ipsum.txt -o dolor.txt
lorem: lorem.txt
    foo lorem.txt -o ipsum.txt
```

Making all targets:

```sh
make
```

## Resources

-   [GNU make](https://www.gnu.org/software/make/manual/make.html)
-   [Makefile - Quick Guide](https://www.tutorialspoint.com/makefile/makefile_quick_guide.htm)
