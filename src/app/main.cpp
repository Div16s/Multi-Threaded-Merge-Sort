# include <iostream>
# include <memory> // for smart pointers
#include <chrono> // for high_resolution_clock
#include "MergeSort/mergeSort.hpp"
using namespace std;

const int SIZE = 1000;

int main(int argc, char* argv[]){
    vector<int> arr(SIZE);
    for(int i = 0; i < SIZE; i++) {
        arr[i] = rand()%SIZE;
    }

    // cout << "Unsorted array: ";
    // for(int i = 0; i < SIZE; i++) cout << arr[i] << " ";
    // cout << endl;

    unique_ptr<MergeSort> mergeSort = make_unique<MergeSort>(arr);
    auto start = chrono::high_resolution_clock::now();
    mergeSort->sort();
    auto end = chrono::high_resolution_clock::now();
    double duration = chrono::duration<double>(end-start).count();
    cout << "Time taken to sort the array using normal merge sort algorithm: " << duration << " seconds" << endl;

    return 0;
}