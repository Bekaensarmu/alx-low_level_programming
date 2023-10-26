# C - Makefiles

I practiced writing Makefiles.

## Requirements

 *  Allowed editors: vi, vim, emacs
 *  OS: Ubuntu 20.04 LTS
 *  Version of gcc: 9.3.0
 *  Version of make: GNU Make 4.2.1

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files.

## Helper Files :raised_hands:

* [school.c](./school.c): C function that displays a seahorse in text.
Used for Makefile practice purposes throughout project.

* [main.c](./main.c): Main C function that runs the function defined in
[school.c](./school.c).

## Header File :file_folder:

* [m.h](./m.h): Header file defining the function prototype used in `school.c`.

## Tasks 

* **0. make -f 0-Makefile**
* name of the executable: `school`
rules: `all`
* The `all` rule builds your executable

* **1. make -f 1-Makefile**
* name of the executable: `school`
* rules: `all`
    The `all` rule builds your executable
* variables: `CC`, `SRC`
    CC: the compiler to be used
    SRC: the .c files

* **2. make -f 2-Makefile**
* [2-Makefile](./2-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [1-Makefile](./1-Makefile)
  with:
* name of the executable: `school`
* rules: `all`
    The all rule builds your executable
* variables: `CC`, `SRC`, `OBJ`, `NAME`
    CC: the compiler to be used
    SRC: the `.c` files
    OBJ: the `.o` files
    NAME: the name of the executable

* **3. make -f 3-Makefile**
  * [3-Makefile](./3-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [2-Makefile](./2-Makefile)
  with:
* Rule `clean` that deletes all Emacs/Vim temporary files as well as the
    executable.
    * Rule `oclean` that deletes the object files.
    * Rule `fclean` that deltes all of the temporary files, executable, and
    object files.
    * Rule `re` that forces recompilation of all source files.
    * Variable `RM` that defines the command to delete files.

* **4. A complete Makefile**
* [4-Makefile](./4-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [3-Makefile](./3-Makefile)
  with:
    * Variable `CFLAGS` that defines the compiler flags `-Wall -Werror -Wextra
    -pedantic`.

* **5. Island Perimeter**
  * [5-island_perimeter.py](./5-island_perimeter.py): Python function that returns the
  perimeter of an island defined in a grid.
  * Prototype: `def island_perimeter(grid):`
  * The parameter `grid` is a list of a list of integers.
    * Water is represented by `0`.
    * Land is represented by `1`.
    * Each element of the lists represents a cell square of side length 1.
    * Grid cells are connected horizontally/verticaly (not diagonally).
    * The grid is rectangular, with a width and height not exceeding 100.
    * The grid is completely surrounded by water, and there is either exactly
    one island or nothing.
    * The island does not contain lakes (water inside disconnected from
    surrounding land).

* **6. make -f 100-Makefile**
 * [100-Makefile](./100-Makefile): Makefile that creates an executable `school` based on
  [school.c](./school.c) and [main.c](./main.c). Builds on [4-Makefile](./4-Makefile)
  with:
* name of the executable: `school`
* rules: `all`, `clean`, `fclean`, `oclean`, `re`
    * `all`: builds your executable
    * `clean`: deletes all Emacs and Vim temporary files along with the executable
    * `oclean`: deletes the object files
    * `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    * `re`: forces recompilation of all source files
* Does not define the variable `RM`.
    * Never uses the string `$(CFLAGS)`.
    * Does not compile if the header `m.h` is missing.
    * Works even if there are existing files of the same name as any of the
    Makefile rules in the current directory.
