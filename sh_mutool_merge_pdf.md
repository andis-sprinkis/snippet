# Merging multiple PDF files into one using `mutool`

```sh
mutool merge -o output_merge.pdf ./src_document.pdf ./other_src_documents/*.pdf
```

To clean and linearize the merged file:

```sh
mutool clean -gggg -c -l ./output_merge.pdf output_clean.pdf
```

## Resources

-   `mutool` manpage
