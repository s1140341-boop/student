#include <iostream>
using namespace std;

int main()
{
    int password = 7;
    int enterKey;
    
    cout << "enter password(1-10): ";
    cin >> enterKey;
    while (password != enterKey) {
        cout << "password wrong please try again(1-10): ";
        cin >> enterKey;
    }
    cout << "password correct game over" << endl;

    return 0;
}