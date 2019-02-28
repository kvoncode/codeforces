#include <iostream>
#include <string>
#include <regex>

int main()
{   
    std::string input;
    std::regex e("[HQ9]");

    std::cin >> input;
   
    std::cout << ( std::regex_search(input, e) ? "YES" : "NO") << std::endl;

    return 0;
}
