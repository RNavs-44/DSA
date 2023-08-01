#include <iostream>
#include <string>



int main() {
    std::string x; 
    std::cin >> x;
    while (x != "END") {
        int i = 1;
        while (x != std::to_string(x.length())) {
            i++;
            x = std::to_string(x.length());
        }
        std::cout << i << std::endl;
        std::cin >> x;
    }
    return 0;
}