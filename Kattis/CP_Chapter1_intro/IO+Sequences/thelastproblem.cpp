/*
Input: name (can have spaces)
Output: Thank you, [name], and farewell!
*/

#include <iostream>
#include <string>
int main() {
    std::string s;
    std::getline(std::cin, s);
    std::cout << "Thank you, " << s << ", and farewell!" << std::endl;
    return 0;
}