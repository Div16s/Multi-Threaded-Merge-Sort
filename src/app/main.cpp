# include <iostream>
# include <memory> // for smart pointers
# include <chrono> // for high_resolution_clock
# include "MergeSort/mergeSort.hpp"
# include "MultiThreadedMergeSort/multiThreadedMergeSort.hpp"
using namespace std;

const int SIZE = 10000000;
const int THREAD_COUNT = 4;

int main(int argc, char* argv[]){
    vector<int> arr1(SIZE), arr2(SIZE);
    for(int i = 0; i < SIZE; i++) {
        arr1[i] = rand()%SIZE;
        arr2[i] = rand()%SIZE;
    }

    // cout << "Unsorted array: ";
    // for(int i = 0; i < SIZE; i++) cout << arr[i] << " ";
    // cout << endl;

    unique_ptr<MergeSort> mergeSort = make_unique<MergeSort>(arr1);
    auto start = chrono::high_resolution_clock::now();
    mergeSort->sort();
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration<double>(end-start).count();
    cout << "Time taken to sort the array using normal merge sort algorithm: " << duration << " seconds" << endl;

    unique_ptr<MultiThreadedMergeSort> multiThreadedMergeSort = make_unique<MultiThreadedMergeSort>(arr2, THREAD_COUNT);
    start = chrono::high_resolution_clock::now();
    multiThreadedMergeSort->merge_sort();
    end = chrono::high_resolution_clock::now();
    duration = chrono::duration<double>(end-start).count();
    cout << "Time taken to sort the array using multi-threaded merge sort algorithm: " << duration << " seconds" << endl;
    // cout << "Sorted array: ";
    // for(int i = 0; i < SIZE; i++) cout << arr2[i] << " ";
    // cout << endl;
    return 0;
}