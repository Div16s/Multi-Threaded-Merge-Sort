#ifndef MULTITHREADEDMERGESORT_HPP
#define MULTITHREADEDMERGESORT_HPP

#include <vector>

class MultiThreadedMergeSort {
private:
    std::vector<int> &arr;
public:
    MultiThreadedMergeSort(std::vector<int> &arr);
    void merge_sort();
    void recursiveSort(int low, int high);
    void merge(int low, int mid, int high);
    ~MultiThreadedMergeSort() = default;
};

#endif