/*
Input:
The input consists of a single line containing a date of the format FEB 9,
with the month and date separated by a single space.

Output:
If the date is October 31 or December 25, output yup. Otherwise, output nope.
*/
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