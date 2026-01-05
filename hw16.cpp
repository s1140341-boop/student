#include <iostream>
using namespace std;

int main()
{
    int code[8] = {90, 85, 89, 77, 99, 10, 74, 95};
    int target = 95;
    int found = -1;
    
    for (int i=0; i<8; i++) {
        if (code[i] == target) {
            cout << "find target:" << target << "placed searched:" << i ;
            break;
        }
    }
    if (found == -1) {
        cout << "can't find";
    }
}    