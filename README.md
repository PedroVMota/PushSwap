# Push Swap Documentation

## Overview

Push Swap is a program designed to sort a stack of integers using a minimal number of operations. The sorting is performed using two stacks, named `a` and `b`, and a set of predefined operations.

### Initial Conditions

- `stack a`: Contains a random number of negative and/or positive integers, which are all unique.
- `stack b`: Initially empty.

### Goal

Sort the integers in `stack a` in ascending order using the shortest sequence of operations.

### Operations

You have the following operations at your disposal:

- `sa` (swap a): Swap the first 2 elements at the top of `stack a`. Do nothing if there is only one or no elements.
- `sb` (swap b): Swap the first 2 elements at the top of `stack b`. Do nothing if there is only one or no elements.
- `ss`: Perform `sa` and `sb` at the same time.
- `pa` (push a): Take the first element at the top of `stack b` and put it at the top of `stack a`. Do nothing if `stack b` is empty.
- `pb` (push b): Take the first element at the top of `stack a` and put it at the top of `stack b`. Do nothing if `stack a` is empty.
- `ra` (rotate a): Shift up all elements of `stack a` by 1. The first element becomes the last one.
- `rb` (rotate b): Shift up all elements of `stack b` by 1. The first element becomes the last one.
- `rr`: Perform `ra` and `rb` at the same time.
- `rra` (reverse rotate a): Shift down all elements of `stack a` by 1. The last element becomes the first one.
- `rrb` (reverse rotate b): Shift down all elements of `stack b` by 1. The last element becomes the first one.
- `rrr`: Perform `rra` and `rrb` at the same time.

### Compilation and Usage

#### Prerequisites

Before you can compile and run Push Swap, ensure you have the necessary dependencies installed:
- A C compiler (e.g., `gcc`)
- `make` utility

#### Steps to Compile and Run

1. **Clone the Repository**

    ```sh
    git clone <repository-url>
    ```

2. **Navigate to the Project Directory**

    ```sh
    cd PushSwap
    ```

3. **Compile the Program**

    Use the `make` command to compile the program.

    ```sh
    make
    ```

4. **Run the Program**

    Pass the list of integers you want to sort as arguments to the `push_swap` executable. Here is an example:

    ```sh
    ./push_swap 8 6 5 2 0 1
    ```

    The program will output the sequence of operations needed to sort the list. Example output:

    ```sh
    ra
    ra
    ra
    pb
    pb
    pb
    sa
    rra
    pa
    pa
    ra
    ra
    pa
    rra
    rra
    ```

### Makefile

The `Makefile` automates the build process. It includes targets to compile the program and clean up the compiled files.

#### Common Targets

- `make`: Compiles the program.
- `make clean`: Removes compiled object files and the executable.

### Example Usage

Here’s an example of how the program should behave:

1. **Input**

    ```sh
    ./push_swap 8 6 5 2 0 1
    ```

2. **Output**

    ```sh
    ra
    ra
    ra
    pb
    pb
    pb
    sa
    rra
    pa
    pa
    ra
    ra
    pa
    rra
    rra
    ```

This example shows the sequence of operations to sort the input list `[8, 6, 5, 2, 0, 1]` into ascending order.
