# Multi-Threaded Merge Sort

**GitHub Repository**: [Multi-Threaded Merge Sort](https://github.com/Div16s/Multi-Threaded-Merge-Sort)

## Overview

This project implements an optimized version of the Merge Sort algorithm using multi-threading in C++. The goal is to improve sorting efficiency for large datasets by leveraging concurrency and parallelism. The implementation uses a custom thread pool to manage threads efficiently, minimizing overhead and maximizing resource utilization.

## Features

- **Multi-Threaded Merge Sort**: Sorts large arrays by dividing and conquering with multiple threads to enhance performance.
- **Thread Pool Implementation**: Custom thread pool reduces overhead associated with thread creation and destruction.
- **Performance Benchmarking**: Comparison of normal Merge Sort and Multi-Threaded Merge Sort for large datasets.
- **Object-Oriented Design**: Modular and maintainable C++ implementation following OOP principles.

## Technologies Used

- **Programming Language**: C++
- **Key Concepts**: Multi-threading, Concurrency, Merge Sort, Thread Pool

## Prerequisites

Ensure the following are installed on your system:

- A C++ compiler with C++11 or higher support (e.g., GCC, Clang, or MSVC)
- `make` (optional, if you use a Makefile)

## Getting Started

### Clone the Repository

```bash
$ git clone https://github.com/Div16s/Multi-Threaded-Merge-Sort.git
$ cd Multi-Threaded-Merge-Sort
```

### Build Instructions

1. Navigate to the `src/app` directory.
2. Compile the code using your preferred C++ compiler. Example:

   ```bash
   $ g++ -std=c++17 -o main main.cpp MergeSort/mergeSort.cpp MultiThreadedMergeSort/multiThreadedMergeSort.cpp ThreadPool/threadPool.cpp
   ```

3. Run the program:

   ```bash
   $ ./main
   ```

### Input and Output

- **Input**: The program generates an array of size `1e7` (10 million) integers for benchmarking.
- **Output**: Time taken to sort the array using:
  - Normal Merge Sort
  - Multi-Threaded Merge Sort

## Performance Comparison

The program benchmarks the sorting performance for a large dataset (array size: `1e7`). Below are the results:

```
Time taken to sort the array using normal merge sort algorithm: 7.06018 seconds
Time taken to sort the array using multi-threaded merge sort algorithm: 0.337603 seconds
```

This demonstrates the significant speedup achieved by the multi-threaded implementation.

## Project Structure

```
Multi-Threaded-Merge-Sort/
├── src/
│   ├── app/
│   │   ├── MergeSort/
│   │   │   ├── mergeSort.cpp       # Single-threaded Merge Sort implementation
│   │   │   ├── mergeSort.hpp
│   │   ├── MultiThreadedMergeSort/
│   │   │   ├── multiThreadedMergeSort.cpp  # Multi-threaded Merge Sort implementation
│   │   │   ├── multiThreadedMergeSort.hpp
│   │   ├── ThreadPool/
│   │   │   ├── threadPool.cpp      # Custom thread pool implementation
│   │   │   ├── threadPool.hpp
│   │   ├── main.cpp                # Entry point of the program
├── README.md                       # Project documentation
```

## Contributing

Contributions are welcome! Follow these steps to contribute:

1. Fork the repository.
2. Create a new branch for your feature/fix.
3. Commit your changes and push the branch.
4. Open a pull request with a detailed description of your changes.

## Contact

For questions or feedback, feel free to reach out via the repository's Issues tab or contact me directly at [divyankarshah1602@gmail.com](mailto:divyankarshah1602@gmail.com).

