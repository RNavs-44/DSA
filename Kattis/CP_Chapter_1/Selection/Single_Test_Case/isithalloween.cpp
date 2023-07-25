#include <iostream>
#include <string>
int main() {
    std::string month;
    int day;
    std::cin >> month >> day;
    if ((month=="OCT" && day==31) || (month=="DEC" && day==25)) std::cout<<"yup";
    else std::cout << "nope";
    return 0;
}