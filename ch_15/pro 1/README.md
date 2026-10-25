# Project 1: Justify (Alternating Gaps)

## Description
This project is a solution to Programming Project 1 from Chapter 15. 
It modifies the text justification program so that the `write_line` function alternates the placement of larger gaps between the start and the end of the lines, rather than always placing them at the end.

## Files
* `main.c`
* `line.c` / `line.h`
* `word.c` / `word.h`

## How to Compile & Run
Using GCC in the terminal:
```bash
gcc main.c line.c word.c -o justify
./justify