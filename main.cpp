#include <iostream>

int main()
{
    int sum = 0;
    for (int i=1;i<6;i++) {
        std::cout << "now i sum:" << i << std::endl;
        sum = sum + i;
        std::cout << "the number of circle:" << sum << std::endl;
        }
        std::cout << "1+..+5 equal:" << sum;
    
    return 0;
}