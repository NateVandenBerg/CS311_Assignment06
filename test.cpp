/**
 * This file tests the implementation of Heap data structure
 *
 */
#include "heap.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    Heap* heapPtr = new Heap;


    cout << "Testing results:" << endl;
    cout << "displaying a blank heap" << endl;
    heapPtr->printHeap();
    // test insert
    heapPtr->insert(25);
    heapPtr->insert(29);
    heapPtr->insert(20);
    heapPtr->insert(4);
    heapPtr->insert(6);
    heapPtr->insert(8);
    heapPtr->insert(15);
    heapPtr->insert(21);
    heapPtr->insert(17);
    heapPtr->insert(16);

    /*Heap* heapPtr2 = new Heap;
    heapPtr2->heapArray = heapPtr->heapArray;
    cout << "heapPtr2";
    heapPtr2->printHeap();*/

    cout << "the values in the heap after adding (3, 2, 1, 15, 5, 4, 45) is : " << endl;
    heapPtr->printHeap();
    // testing remove
    cout << "Testing the remove max" << endl;
    heapPtr->getMax();
    heapPtr->removeMax();
    heapPtr->printHeap();
    heapPtr->getMax();
    
    cout << "Test changing the key at position 2 to a new value of 10, percolate to maintain heap property" << endl;
    heapPtr->changeKey( 2, 10);
    heapPtr->printHeap();
    cout << "Test changing the key at position 0 to a new value of 0, percolate to maintain heap property" << endl;
    heapPtr->changeKey( 0, 0);
    heapPtr->printHeap();
    cout << "Test changing the key at position 4 to a new value of 12, percolate to maintain heap property" << endl;
    heapPtr->changeKey( 4, 12);
    heapPtr->printHeap();
    cout << "Now swapping positions 1 and 2" << endl;
    heapPtr->swap(1, 2);
    heapPtr->printHeap();
    cout << "reheapify the heap" << endl;
    heapPtr->heapify();
    heapPtr->printHeap();

    // testing heapsort
    cout << endl << "Testing heapsort" << endl;
    int arr1[] = { 1, 6, 8, 2, 7, 11, 4, 9, 13, 5, 12 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    heapSort(arr1, n1);
    int arr2[] = { 1, 3, 5, 10, 9, 8, 15, 17 };
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    heapSort(arr2, n2);
    int arr3[] = { 10, 21, -11, 2, 5, 6, 1, -7, 20, 19, 16 };
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    heapSort(arr3, n3);
    int arr4[] = { 2, 3, 12, -13, 22, 8, 3, 4, 7, 20, 1 };
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    heapSort(arr4, n4);
    int arr5[] = { 25,29,20,4,6,8,15,21,17,16 };
    int n5 = sizeof(arr5) / sizeof(arr5[0]);
    heapSort(arr5, n5);
    delete heapPtr;
    //delete heapPtr2;
}
