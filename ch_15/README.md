# C Programming: A Modern Approach - Chapter 15 Solutions

This repository contains my solutions for the Programming Projects in Chapter 15 (Writing Large Programs) of the book "C Programming: A Modern Approach" by K.N. King.

## Projects Overview:

*   **Project 1 (Justify - Alternating Gaps):** Modifies the `justify` program so that the `write_line` function alternates the placement of larger gaps between the start and the end of the lines.
*   **Project 2 (Justify - Truncation Handling):** Modifies the `justify` program so that the `read_word` function (instead of `main`) is responsible for storing the `*` character at the end of a truncated word.
*   **Project 3 (Quicksort Split):** Splits the original `qsort.c` program into multiple files. The `quicksort` and `split` functions are moved to a separate `quicksort.c` file with their prototypes in `quicksort.h`.
*   **Project 4 (Remind - Separating `read_line`):** Modifies the `remind.c` program by moving the `read_line` function into a separate file named `readline.c`, with a corresponding `readline.h` header file.
*   **Project 5 (Stack Module):** Modifies the RPN Calculator (Stack program) to use separate `stack.h` and `stack.c` files, following the modular design described in Section 15.2.

## How to Navigate
Each project is contained in its own folder (`pro 1`, `pro 2`, etc.). Navigate into any folder to find the source code and specific build instructions in its own `README.md`.