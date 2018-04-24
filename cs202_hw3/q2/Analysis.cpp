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
int size = 1000;
using namespace std;
void AVL::rotationAnalysis() {
    AVL a;
    AVL b;
    AVL c;

    for (int i = 0; i < size; i++) {
        a.insert(i + 1);

    }
    cout<< size;
    cout <<" ascending order inserted rotation number = ";
    cout << a.getRotationNumber() << endl;
    for (int i = size; i > 0; i--) {
        b.insert(i);

    }
    cout<<size;
    cout <<" descending order inserted rotation number = ";
    cout << b.getRotationNumber() << endl;
    for (int i = 0; i < size; i++) {
        c.insert(rand() % 100000);

    }
    cout<<size;
    cout <<" randomly order inserted rotation number = ";
    cout << c.getRotationNumber() << endl;
    if (size < 10000) {
        size = size + 1000;
        rotationAnalysis();
    }else{
        return;
    }
}


