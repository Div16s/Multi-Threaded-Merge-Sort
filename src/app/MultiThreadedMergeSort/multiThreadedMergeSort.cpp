# include "multiThreadedMergeSort.hpp"
# include <thread>
using namespace std;

// Constructor for MergeSort class
MultiThreadedMergeSort::MultiThreadedMergeSort(vector<int> &arr) : arr(arr) {}

void MultiThreadedMergeSort::recursiveSort(int low, int high) {
    // Base case
    if(low>=high) return;

    // Find the middle point
    int mid = low + (high - low) / 2;

    // Sort first and second halves
    thread t1(&MultiThreadedMergeSort::recursiveSort, this, low, mid);
    thread t2(&MultiThreadedMergeSort::recursiveSort, this, mid + 1, high);

    // Wait for the threads to finish
    t1.join();
    t2.join();

    // Merge the sorted halves
    merge(low, mid, high);
}

void MultiThreadedMergeSort::merge(int low, int mid, int high) {
    // Create a temporary array to store the merged array
    vector<int> temp(high-low+1);
    int i = low, j = mid+1, k = 0;

    // Merge the two halves
    while(i <= mid && j <= high) {
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }

    // Copy the remaining elements of the first half
    while(i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy the remaining elements of the second half
    while(j <= high) {
        temp[k++] = arr[j++];
    }

    // Copy the elements from the temporary array to the original array
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }
}

void MultiThreadedMergeSort::sort() {
    // base case
    if(arr.size() == 0) return;
    // Create a thread to sort the array
    thread t(&MultiThreadedMergeSort::recursiveSort, this, 0, arr.size()-1);
    // Wait for the thread to finish
    t.join();
}