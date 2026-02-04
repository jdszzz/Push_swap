*This project has been created as part of the 42 curriculum by albelmon.*

# Push_swap

## Description

**Push_swap** is a 42 school algorithm project that requires sorting data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed, you have to manipulate various types of algorithms and choose the most efficient solution for data sorting.

The goal is to write a program in C called `push_swap` which calculates and displays on the standard output the smallest program, made of Push_swap language instructions, that sorts the integers received as arguments.

### The Rules
You have two stacks named A and B.
* **Stack A**: Contains a random amount of non-duplicated negative and/or positive numbers.
* **Stack B**: Is empty.
* The goal is to sort the numbers in Stack A in ascending order using operations like `sa` (swap a), `pb` (push b), `ra` (rotate a), `rra` (reverse rotate a), etc.

## Instructions

The project works with two stacks, A and B, using a specific set of instructions to sort the numbers:

### 🔄 Swaps
* **sa (swap a):** Swap the first 2 elements at the top of stack `a`. Do nothing if there is only one or no elements.
* **sb (swap b):** Swap the first 2 elements at the top of stack `b`. Do nothing if there is only one or no elements.
* **ss:** `sa` and `sb` at the same time.

### 📥 Pushes
* **pa (push a):** Take the first element at the top of `b` and put it at the top of `a`. Do nothing if `b` is empty.
* **pb (push b):** Take the first element at the top of `a` and put it at the top of `b`. Do nothing if `a` is empty.

### ⬆️ Rotations
* **ra (rotate a):** Shift up all elements of stack `a` by 1. The first element becomes the last one.
* **rb (rotate b):** Shift up all elements of stack `b` by 1. The first element becomes the last one.
* **rr:** `ra` and `rb` at the same time.

### ⬇️ Reverse Rotations
* **rra (reverse rotate a):** Shift down all elements of stack `a` by 1. The last element becomes the first one.
* **rrb (reverse rotate b):** Shift down all elements of stack `b` by 1. The last element becomes the first one.
* **rrr:** `rra` and `rrb` at the same time.

## Resources
### Learning the Algorithm
* **K-Sort Logic:** I learned the conceptual logic of the K-Sort (Chunk Sort) algorithm through various community tutorials on **YouTube** and technical blogs. These resources were essential to visualize how "chunks" move between stacks to minimize operations.
* **AI Implementation:** Specifically, it helped me calculate the most efficient mathematical ranges for the chunks and debug the pointer reassignment in the doubly linked list, ensuring the implementation was both fast and leak-free.

### Compilation
The project uses a `Makefile` to compile the source code. To compile the program, run the following command in the root of the repository:

```bash
make
ARG=$(shuf -i 0-2147483647 -n 500 | awk '{printf "%d ", $1 * (rand() < 0.5 ? 1 : - 1)}')
./push_swap $ARG | wc -l
./push_swap $ARG | ./checker_linux $ARG
