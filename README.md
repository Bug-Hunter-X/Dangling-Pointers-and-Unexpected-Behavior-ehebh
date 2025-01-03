# Dangling Pointers and Unexpected Behavior in C

This repository demonstrates a common error in C programming involving dangling pointers and unexpected behavior.  The code attempts to free a pointer that was not dynamically allocated, leading to undefined behavior. This example highlights the importance of careful memory management in C.

## How to Reproduce

1. Compile the code using a C compiler (e.g., GCC):
   ```bash
   gcc bug.c -o bug
   ```
2. Run the executable:
   ```bash
   ./bug
   ```

## Solution

The solution involves correcting memory management to avoid the attempt to `free()` a pointer not allocated with `malloc()`.

## Learning Points

* **Dynamic Memory Allocation:** Understand the difference between automatic and dynamic memory allocation in C.  `malloc()` and `free()` should always be used in pairs.  Incorrect use can lead to memory leaks or segmentation faults.
* **Dangling Pointers:** Avoid using pointers that point to memory that has been freed or is no longer valid.
* **Memory Management:** Implement careful memory management techniques to ensure the stability and reliability of your C programs.