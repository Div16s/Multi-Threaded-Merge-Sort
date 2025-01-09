#ifndef MERGESORT_HPP
#define MERGESORT_HPP

#include <vector>

class MergeSort {
private:
    std::vector<int> &arr;
public:
    MergeSort(std::vector<int> &arr);
    void sort();
    void recursiveSort(int low, int high);
    void merge(int low, int mid, int high);
    ~MergeSort() = default;
};

#endif