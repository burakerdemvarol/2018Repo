*/
 * Title : Algorithm Efficiency and Sorting
 * Author : Burak Erdem Varol
 * ID : 21202534
 * Section : 3
 * Assignment : 1
 * Description : It is main class for execution code.
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include "sorting.h"

using namespace std;

int main() {

    cout << "Array size = 1000" << endl;
    cout << "****************************************************************" << endl;
    performanceAnalysis(1000);
    cout << "Array size = 6000" << endl;
    cout << "****************************************************************" << endl;
    performanceAnalysis(6000);
    cout << "Array size = 12000" << endl;
    cout << "****************************************************************" << endl;
    performanceAnalysis(12000);
    cout << "Array size = 18000" << endl;
    cout << "****************************************************************" << endl;
    performanceAnalysis(18000);

    cout << "End of the Program" << endl;
    return 0;
}