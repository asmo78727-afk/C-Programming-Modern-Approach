
# Project 2: Justify (Truncation Handling)

## Description
This project is a solution to Programming Project 2 from Chapter 15. 
It modifies the `justify` program so that the `read_word` function is responsible for storing the `*` character at the end of a truncated word, instead of having `main` do it.

## Files
* `main.c`
* `line.c` / `line.h`
* `word.c` / `word.h`

## How to Compile & Run
Using GCC in the terminal:
```bash
gcc main.c line.c word.c -o justify
./justify