# Project 4: Remind (Separating `read_line`)

## Description
This project is a solution to Programming Project 4 from Chapter 15. 
It modifies the `remind.c` program (from Section 13.5) by moving the `read_line` function into a separate file named `readline.c`. A header file `readline.h` is created to hold the function prototype.

## Files
* `main.c`
* `readline.c` / `readline.h`

## How to Compile & Run
Using GCC in the terminal:
```bash
gcc main.c readline.c -o remind
./remind