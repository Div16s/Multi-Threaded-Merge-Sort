#ifndef MULTITHREADEDMERGESORT_HPP
#define MULTITHREADEDMERGESORT_HPP

#include <vector>
#include "../ThreadPool/threadPool.hpp"

class MultiThreadedMergeSort {
private:
    std::vector<int> &arr;
    ThreadPool pool;
    const int THREAD_THRESHOLD = 50000;
public:
    MultiThreadedMergeSort(std::vector<int> &arr, size_t thread_count);
    void merge_sort();
    void recursiveSort(int low, int high);
    void merge(int low, int mid, int high);
    ~MultiThreadedMergeSort() = default;
};

#endif