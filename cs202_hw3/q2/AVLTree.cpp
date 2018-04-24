/*
* Title : Heaps and AVL Trees
* Author : Burak Erdem Varol
* ID : 21202534
* Section : 3
* Assignment : 3
* Description : Analysis the insertion if AVL tree. Different orders insertions and different numbers of 
* insertion rotation numbers computed.
*/

#include "AVLTree.h"
Node * root;
using namespace std;
AVL::AVL() {
    root = nullptr;
}

int AVL::height(Node *tmp) {
    int h = 0;
    if (tmp != nullptr) {
        h = max(height (tmp->l), height (tmp->r)) + 1;
    }
    return h;
}

int AVL::diff(Node *tmp) {
    return (height(tmp->l) - height (tmp->r));
}

Node *AVL::lr_rotation(Node *parent) {
    Node *tmp;
    tmp = parent->l;
    parent->l = rr_rotation (tmp);
    return ll_rotation (parent);
}

Node *AVL::rl_rotation(Node *parent) {
    Node *tmp;
    tmp = parent->r;
    parent->r = ll_rotation (tmp);
    return rr_rotation (parent);
}

Node *AVL::rr_rotation(Node *parent){
    Node *tmp;
    rotationNumber++;
    tmp = parent->r;
    parent->r = tmp->l;
    tmp->l = parent;
    return tmp;
}

Node *AVL::ll_rotation(Node *parent) {
    Node *tmp;
    rotationNumber++;
    tmp = parent->l;
    parent->l = tmp->r;
    tmp->r = parent;
    return tmp;
}

Node *AVL::blnc(Node *tmp) {
    int bal_factor = diff (tmp);
    if (bal_factor > 1) {
        if (diff (tmp->l) <= 0)
            tmp = lr_rotation (tmp);
        else
            tmp = ll_rotation (tmp);
    }
    else if (bal_factor < -1) {
        if (diff (tmp->r) <= 0)
            tmp = rr_rotation (tmp);
        else
            tmp = rl_rotation (tmp);
    }
    return tmp;
}

void AVL::insert(int value){
    root = insertHelper(root,value);
}

Node *AVL::insertHelper(Node *root, int value) {
    if (root == nullptr) {
        root = new Node;
        root->l = nullptr;
        root->value = value;
        root->r = nullptr;
        return root;
    }
    else if (value < root->value) {
        root->l = insertHelper(root->l, value);
        root = blnc (root);
    }
    else if (value >= root->value) {
        root->r = insertHelper(root->r, value);
        root = blnc (root);
    }
    return root;
}

int AVL::getRotationNumber() {
    return rotationNumber;
}

