/*
* Title : Heaps and AVL Trees
* Author : Burak Erdem Varol
* ID : 21202534
* Section : 3
* Assignment : 3
* Description : MaxHeaps created and ALZ problem solved. Permutation computed and solution printed.
*/
#include<iostream>
#include<climits>
using namespace std;

#include<vector>
void swap(int *x, int *y);

class MaxHeap
{
    int *height; 
    int capacity; 
    int length; 
public:
    MaxHeap(int capacity);
	int left(int i) { return (2*i + 1); }
    int right(int i) { return (2*i + 2); }
	int getMax() { return height[0]; }
    void dlt(int i);
    void insertKey(int k);
void Heapify(int );
    int parent(int i) { return (i-1)/2; }
    int extractMax();
   void decreaseKey(int i, int new_val);
 	int getSwapNo();
};
