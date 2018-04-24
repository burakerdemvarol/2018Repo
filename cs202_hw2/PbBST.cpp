/**
* Title: Binary Search Trees
* Author: Burak Erdem Varol
* ID: 21202534
* Section: 3
* Assignment: 2
* Description: Pointer based binary search tree implementation is here. Some part of the code not implemented. */

#include <string>
#include "PbBST.h"
#include "PbTreeNode.h"
#include <iostream>

using namespace std;

PbBST::PbBST(){
    root = NULL;
}

void PbBST::deleted(int value) {
    deleteHelper(root, value);
}


PbTreeNode* PbBST::deleteHelper(PbTreeNode *root, int value){
    // recursively implementation

    if (root == NULL)
        return root;
    if(getHeight() == 0){
        root = NULL;
        return root;
    }
    if (value < root->item)
        root->leftChildPtr = deleteHelper(root->leftChildPtr, value);
    else if (value > root->item)
        root->rightChildPtr = deleteHelper(root->rightChildPtr, value);
    else{
        if (root->leftChildPtr == NULL){
            PbTreeNode *temp = root->rightChildPtr;
            delete (root);
            return temp;
        }else if (root->rightChildPtr == NULL){
            PbTreeNode *temp = root->leftChildPtr;
            delete (root);
            return temp;
        }
        PbTreeNode* temp = minValueNode(root->rightChildPtr);
        root->item = temp->item;
        root->rightChildPtr = deleteHelper(root->rightChildPtr, temp->item);
    }
    return root;
}

PbTreeNode *PbBST::minValueNode(PbTreeNode *node) {
    PbTreeNode* current = node;
    while (current->leftChildPtr != NULL)
        current = current->leftChildPtr;

    return current;
}


void PbBST::insert(int key) {
    insertHelper(root, key);
}

void PbBST::insertHelper(PbTreeNode* &root, int value) {

    PbTreeNode* newNode = new PbTreeNode(value);
    newNode->item = value;

    if(root == NULL)
        root = newNode;
    else {
        PbTreeNode *temp = root;

        while (temp->leftChildPtr && value < temp->item) {
            temp = temp->leftChildPtr;
        }

        while (temp->rightChildPtr && value > temp->item) {
            temp = temp->rightChildPtr;
        }

        while (temp->leftChildPtr && value < temp->item) {
            temp = temp->leftChildPtr;
        }

        if (value > temp->item)
            temp->rightChildPtr = newNode;

        if (value < temp->item)
            temp->leftChildPtr = newNode;
    }
}

int PbBST::getHeight() {
    return getHeightFromRoot(root);
}


int PbBST::getHeightFromRoot(PbTreeNode *root) {
    //a Null value means the tree does not increase anymore
    if (root == NULL)
        return 0;
    else {
        //get the height of the left and right subtrees and add 1 more to that height
        // which is for the height that the root adds up.
        int left = 1 + getHeightFromRoot(root->leftChildPtr);
        int right = 1 + getHeightFromRoot(root ->rightChildPtr);
        if (left < right)
            return right;
        else
            return left;
    }
}

double PbBST::medianOfBST() {
    return 0;
}


void PbBST::rangeSearch(int a, int b) {

}











