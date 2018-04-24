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
#include "MaxHeap.h" 
int opnumber=0;
MaxHeap::MaxHeap(int c)
{
   
    
    height = new int[c];
	capacity = c;
 length = 0;
}
 

void MaxHeap::insertKey(int k)
{
    if (length == capacity)
    {
        return;
    }
    length++;
    int i = length - 1;
    height[i] = k;
 
    while (i != 0 && height[parent(i)] < height[i])
    {
       swap(&height[i], &height[parent(i)]);
       i = parent(i);
    }
}
 
 
void MaxHeap::Heapify(int i)
{
    int l = left(i);
    int r = right(i);
    int biggest = i;
    if (l < length && height[l] > height[i])
        biggest = l;
    if (r < length && height[r] > height[biggest])
        biggest = r;
    if (biggest != i)
    {
        swap(&height[i], &height[biggest]);
        Heapify(biggest);
    }
}
void swap(int *a, int *b)
{
opnumber++;
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int MaxHeap::getSwapNo()
{
	return opnumber;
}





