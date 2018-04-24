/**
* Title: Binary Search Trees
* Author: Burak Erdem Varol
* ID: 21202534
* Section: 3
* Assignment: 2
* Description: Tree node header file all things in cpp file declared here. */

#ifndef PBBST_PBPbTreeNode_H
#define PBBST_PBPbTreeNode_H

class PbTreeNode {
public:
    PbTreeNode();
    PbTreeNode(int& nodeItem, PbTreeNode *left, PbTreeNode *right);
    PbTreeNode(int& NodeItem);

    int item;                  // ITEM
    PbTreeNode *leftChildPtr;
    PbTreeNode *rightChildPtr;
};
#endif //PBBST_PBPbTreeNode_H
