*/
 * Title : Algorithm Efficiency and Sorting
 * Author : Burak Erdem Varol
 * ID : 21202534
 * Section : 3
 * Assignment : 1
 * Description : it is our header file for the sorting.cpp implementation file, 
 * we show the all methods declarations are here and implementation in sorting.cpp file
 */

#ifndef SORTING_H
#define SORTING_H

    void selectionSort(int *arr, int size, int &compCount, int &moveCount);
    void mergeSort(int *arr, int size, int &compCount, int &moveCount);
    void quickSort(int *arr, int size, int &compCount, int &moveCount);
    void qquickSort(int theArray[], int first, int last, int &compCount, int &moveCount);
    void performanceAnalysis(int size);



#endif //CLION_PROJECTS_SORTING_H
