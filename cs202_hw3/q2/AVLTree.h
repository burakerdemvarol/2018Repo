/*
* Title : Heaps and AVL Trees
* Author : Burak Erdem Varol
* ID : 21202534
* Section : 3
* Assignment : 3
* Description : Analysis the insertion if AVL tree. Different orders insertions and different numbers of 
* insertion rotation numbers computed.
*/
#ifndef HW3FINAL_ANALYSIS_H
#define HW3FINAL_ANALYSIS_H
#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>

using namespace std;

struct Node {
    int value;
    struct Node *l;
    struct Node *r;
};

class AVL {
public:
    int rotationNumber = 0;
    int diff(Node *);
    void insert(int);
    int getRotationNumber();
    Node *rr_rotation(Node *);
    Node *ll_rotation(Node *);
    Node *lr_rotation(Node *);
    Node *rl_rotation(Node *);
    Node* blnc(Node *);
    AVL();
    Node* insertHelper(Node *, int );
    int height(Node *);
    void rotationAnalysis();
};
#endif //HW3FINAL_ANALYSIS_H
