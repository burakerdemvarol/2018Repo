/**
* Title: Binary Search Trees
* Author: Burak Erdem Varol
* ID: 21202534
* Section: 3
* Assignment: 2
* Description: Node structure designed and implemented here.
*/

#include "PbTreeNode.h"
#include <iostream>
using namespace std;

// constructor 
PbTreeNode :: PbTreeNode (){
    leftChildPtr = NULL;
    rightChildPtr = NULL;
}

// constructor 
PbTreeNode :: PbTreeNode (int & nodeItem) {
    item = nodeItem;
    leftChildPtr = NULL;
    rightChildPtr = NULL;

}
// constructor 
PbTreeNode :: PbTreeNode (int &nodeItem, PbTreeNode *left, PbTreeNode *right){
    item = nodeItem;
    leftChildPtr = left;
    rightChildPtr = right;
}