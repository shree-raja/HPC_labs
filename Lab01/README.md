# Lab 01 - Performance Profiling and Optimization using GPROF and PERF

## Objective

- Implement and compare different sorting algorithms.
- Measure execution time using Linux timing tools.
- Profile applications using GPROF.
- Collect hardware performance statistics using PERF.
- Analyze the impact of compiler optimizations.
- Study algorithm performance with increasing input sizes.
- Evaluate the possibility of parallel execution.


## Algorithms Used

### Bubble Sort
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. It is simple to implement but inefficient for large datasets.

**Time Complexity:** O(n²)

### Quick Sort
Quick Sort selects a pivot element and partitions the array into smaller subarrays. It is much faster than Bubble Sort for large inputs.

**Average Time Complexity:** O(n log n)

---

## Dataset

- Randomly generated integer values
- Dataset size: **18,250** values

---

## Results

The execution time of Bubble Sort and Quick Sort was measured using the `clock()` function.

The program was tested with different compiler optimization levels:
- O0
- O2
- O3

---

## Conclusion

This experiment showed that algorithm selection has a major impact on performance. Bubble Sort is suitable only for small datasets, whereas Quick Sort performs efficiently on larger datasets. Compiler optimization further improves execution speed, and profiling tools like GPROF and PERF help identify performance bottlenecks and evaluate program behavior.
