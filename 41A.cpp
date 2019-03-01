#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

int main()
{   
    std::string s, t;
    std::regex e;

    std::cin >> s >> t;

    std::reverse( t.begin(), t.end() );

    e = t;

    std::cout << ( std::regex_match(s, e) ? "YES" : "NO") << std::endl;

    return 0;
}
