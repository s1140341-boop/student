#include <iostream>

int main() {
    std::cout <<"ENTER YOUR NAME";
    int age;
    std::cin >> age;
    if (age >= 18) {
        std::cout << "YOU CAN WATCH PORNHUB.COM ";
        
    }
    if (age < 18) {
        std::cout << "GO TO STUDY WITHOUT PORN ";
    }
    return 0;
}