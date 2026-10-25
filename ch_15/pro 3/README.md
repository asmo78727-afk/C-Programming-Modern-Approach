# Project 3: Quicksort (Multiple Source Files)

## Description
This project is a solution to Programming Project 3 from Chapter 15. 
It splits the original `qsort.c` program (from Section 9.6) into multiple files. The `quicksort` and `split` functions are moved to a separate file `quicksort.c`, with their prototypes declared in `quicksort.h`.

## Files
* `main.c`
* `quicksort.c` / `quicksort.h`

## How to Compile & Run
Using GCC in the terminal:
```bash
gcc main.c quicksort.c -o qsort
./qsort