/**
* Title: Binary Search Trees
* Author: Burak Erdem Varol
* ID: 21202534
* Section: 3
* Assignment: 2
* Description: Pointer based binary search tree header file is here. Cpp file methods declaration is here. 
*/

#ifndef PBBST_PBBST_H
#define PBBST_PBBST_H

#include "PbTreeNode.h"

class PbBST{
public:

    PbTreeNode* root;

    PbBST();

    void insert(int key);

    void deleted(int key);

    int getHeight();

    int getHeightFromRoot(PbTreeNode *root);

    double medianOfBST();

    void rangeSearch(int a, int b);

    void insertHelper(PbTreeNode* &root, int value);

    PbTreeNode* minValueNode(PbTreeNode* node);

    PbTreeNode* deleteHelper(PbTreeNode *root, int key);

    void displayTree(PbTreeNode* root);
};

#endif //PBBST_PBBST_H
