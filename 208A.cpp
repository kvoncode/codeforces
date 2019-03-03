#include <iostream>
#include <regex>
#include <string>

int main()
{   
    std::string s;
    
    std::regex eBegin("^(WUB)*");
    std::regex eEnd("(WUB)*$");
    std::regex otherWub("(WUB)+");

    std::cin >> s;

    s = std::regex_replace(s, eBegin, "");
    s = std::regex_replace(s, eEnd, "");
    s = std::regex_replace(s, otherWub, " ");

    std::cout << s << std::endl;
    
    return 0;
}
