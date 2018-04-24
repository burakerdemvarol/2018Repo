#include <iostream>
#include "PbBST.h"
#include "PbTreeNode.h"
#include "Analysis.h"

using namespace std;
int main() {
    PbBST varol;
    
    varol.insert(40);
    varol.insert(50);
    varol.insert(45);
    varol.insert(30);
    varol.insert(60);
    varol.insert(55);
    varol.insert(20);
    varol.insert(35);
    varol.insert(10);
    varol.insert(25);

    cout<< "Height of the tree: " << varol.getHeight() << endl;

    varol.deleted(45);
    varol.deleted(50);

    cout<< "Height of the tree: " << varol.getHeight() << endl;

    heightAnalysis();

    return 0;
}
