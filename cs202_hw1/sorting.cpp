*/
 * Title : Algorithm Efficiency and Sorting
 * Author : Burak Erdem Varol
 * ID : 21202534
 * Section : 3
 * Assignment : 1
 * Description : All implementation of sort algorithms and performance analyzer are here.
 */
#include "sorting.h"
#include <iostream>
#include <string>
#include "sorting.h"

using namespace std;

void selectionSort(int *arr, int size, int &compCount, int &moveCount){
    int largest;
    int num = 0;
    int temp = 0;
    for(int i = size-1; i >= 1; i--){
        compCount++;
        largest = 0;
        num = 0;
        for(int j = 1; j < i+1; j++){
            compCount++;
            if( arr[j] > arr[num]){
                compCount++;
                num = j;
            }
            largest = num;
        }
        temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;
        moveCount++;
    }
}

//the merge function for merging 2 sorted arrays into 1
void merge(int *arr, int first, int mid,  int last, int size, int &compCount, int &moveCount){
    //use of temporaryArray to store the values in sorted order
    int tempArray[size];

    //keep track of the beginign and ending of the partitions
    int first1 = first, last1 = mid;
    int first2 = mid + 1, last2 = last;
    int index = first1;

    //move through the array and pass the elements to the temporary array in a sorted fashion
    for ( ; (first1 <= last1)&& (first2 <= last2); index++){
        compCount++;
        moveCount++;
        if ( arr[first1] < arr[first2] ) {
            tempArray[index] = arr[first1];
            first1++;
        }
        else {
            tempArray[index] = arr[first2];
            first2++;
        }
    }

    //if there is any element left on the first half then put those element to the temporary array
    for ( ; first1 <= last1; first1++, index++){
        moveCount++;
        tempArray[index] = arr[first1];
    }

    //if there is any element left on the second half then put those element to the temporary array
    for ( ; first2 <= last2; first2++, index++) {
        moveCount++;
        tempArray[index] = arr[first2];
    }

    //transfer back the data from the temporary to the original array
    for (index = first; index <= last; index++) {
        moveCount++;
        arr[index] = tempArray[index];
    }
}


//the recursive algorithm implementation for mergesort
void mergesort(int *arr, int size, int first, int last, int &compCount, int &moveCount){
    //the recursive call gets executed only if we still have some partitioning and merging left to be done
    if (first < last){

        //use midpoint for partitioning
        int mid = (first + last)/2;

        //recursively call both sides of the array
        mergesort(arr, size, first, mid, compCount, moveCount);
        mergesort(arr, size, mid+1, last, compCount, moveCount);

        //merge the sorted halves of the array
        merge(arr, first, mid, last, size, compCount, moveCount);
    }
}


void mergeSort(int *arr, int size, int &compCount, int &moveCount){
    mergesort (arr, size, 0, size-1, compCount, moveCount);
}


void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}


void partition(int theArray[], int first, int last, int &pivotIndex, int &compCount, int &moveCount) {
    // Precondition: theArray[first..last] is an array; first <= last.
    // Postcondition: Partitions theArray[first..last] such that:
    //   S1 = theArray[first..pivotIndex-1] < pivot
    //   theArray[pivotIndex] == pivot
    //   S2 = theArray[pivotIndex+1..last] >= pivot

    // place pivot in theArray[first]
    int pivot;

    // initially, everything but pivot is in unknown
    int lastS1 = first;           // index of last item in S1
    int firstUnknown = first + 1; // index of first item in unknown
    pivot = theArray[lastS1];     // copy pivot
    moveCount++;
    // move one item at a time until unknown region is empty
    for (  ; firstUnknown <= last; ++firstUnknown) {
        // Invariant: theArray[first+1..lastS1] < pivot
        //            theArray[lastS1+1..firstUnknown-1] >= pivot
        // move item from unknown to proper region
        if (theArray[firstUnknown] < pivot) {  	// belongs to S1
            ++lastS1;
            swap(theArray[firstUnknown], theArray[lastS1]);
            moveCount+=3;
        }	// else belongs to S2
        compCount++;
    }
    // place pivot in proper position and mark its location
    swap(theArray[first], theArray[lastS1]);
    pivotIndex = lastS1;
    moveCount+=3;
}



void qquickSort(int theArray[], int first, int last, int &compCount, int &moveCount) {
// Precondition: theArray[first..last] is an array.
// Postcondition: theArray[first..last] is sorted.

    int pivotIndex;

    if (first < last) {

        // create the partition: S1, pivot, S2
        partition(theArray, first, last, pivotIndex, compCount, moveCount );

        // sort regions S1 and S2
        qquickSort(theArray, first, pivotIndex-1, compCount, moveCount);
        qquickSort(theArray, pivotIndex+1, last, compCount, moveCount);
    }
    compCount++;
}

void quickSort( int *arr, int size, int &compCount, int &moveCount){
    qquickSort(arr, 0, size-1, compCount, moveCount);
}


void performanceAnalysis(int size) {

    const int arraySize = size;
    int arrSelection[arraySize];
    int arrMerge[arraySize];
    int arrQuick[arraySize];

    int compCount = 0;
    int moveCount = 0;

//    for (int i = 0; i < arraySize; i++){
//        arrSelection[i] = rand();
//        arrMerge[i] = arrSelection[i];
//        arrQuick[i] = arrMerge[i];
//    }


    for (int i = arraySize-1; i >= 0; i--){   //descending
        arrSelection[i] = i;
        arrMerge[i] = i;
        arrQuick[i] = i;
    }


//    for (int i = 0; i < arraySize; i++){      //ascending
//        arrSelection[i] = i;
//        arrMerge[i] = i;
//        arrQuick[i] = i;
//    }

//    for(int i = 0; i >= (arraySize/2) - 1; i++){
//            arrSelection[i] = i;
//            arrMerge[i] = i;
//            arrQuick[i] = i;
//    }
//    int j = arraySize - 1;
//    for(int i = arraySize / 2; i < arraySize; i++){
//        arrSelection[i] = j;
//        arrMerge[i] = j;
//        arrQuick[i] = j;
//        j--;
//    }

    cout << "Selection Sort Calculation" << endl;
    cout << "Array Size: " << size << endl;
    clock_t t;

    t = clock();

    selectionSort(arrSelection, size, compCount, moveCount);

    t = clock() - t;
    cout << "Time in milliseconds = " << (double)t*1000/CLOCKS_PER_SEC << endl;
    cout << "Movements Count = " << moveCount << endl ;
    cout << "Comparisons Count = " << compCount << endl;
    cout << endl;


    compCount = 0;
    moveCount = 0;

    cout << "Merge Sort Calculation" << endl;
    cout << "Array Size: " << size << endl;

    t = clock();

    mergeSort(arrMerge, size, compCount, moveCount);

    t = clock() - t;
    cout << "Time in milliseconds = " << (double)t*1000/CLOCKS_PER_SEC << endl;
    cout << "Movements Count = " << moveCount << endl ;
    cout << "Comparisons Count = " << compCount << endl;
    cout << endl;
    compCount = 0;
    moveCount = 0;

    cout << "Quick Sort Calculation" << endl;
    cout << "Array Size: " << size << endl;

    t = clock();

    quickSort(arrQuick, size, compCount, moveCount);

    t = clock() - t;
    cout << "Time in milliseconds = " << (double)t*1000/CLOCKS_PER_SEC << endl;
    cout << "Movements Count = " << moveCount << endl ;
    cout << "Comparisons Count = " << compCount << endl;
    cout << endl;

}
