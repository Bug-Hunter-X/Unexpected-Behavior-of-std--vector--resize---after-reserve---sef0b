# Unexpected Behavior of std::vector::resize() after reserve()

This code demonstrates an unexpected behavior of `std::vector::resize()` in C++ when used after calling `reserve()`.  The `resize()` function, when reducing the vector's size, will truncate the vector. However, if `reserve()` has already allocated more memory than the original size, this truncation might be unintuitive.

## Problem

The issue stems from the difference between `reserve()` and `resize()`. `reserve()` only allocates memory, it doesn't change the size of the vector, while `resize()` changes the vector's size, potentially reallocating memory and modifying the elements.

## How to Reproduce

1. Compile and run the `bug.cpp` file.
2. Observe the output, which will show a loss of data after the `resize()` call.

## Solution

The provided `bugSolution.cpp` file addresses this issue by using `clear()` method instead of resize for reducing the vector size after reserve.