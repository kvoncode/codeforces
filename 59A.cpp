#include <iostream>
#include <regex>
#include <string>
#include <algorithm>


int main()
{   
    std::string s;
    int lower = 0;
    int upper = 0;

    std::regex e("[a-z]");

    std::cin >> s;

    // calculate lower and uppercase letters
    std::regex_iterator<std::string::iterator> rit ( s.begin(), s.end(), e );
    std::regex_iterator<std::string::iterator> rend;

    while(rit!=rend)
    {
        ++rit;
        ++lower;
    }
    
    upper = s.size() - lower;

    // compare
    if( lower >= upper)
    {
        std::transform( s.begin(), s.end(), s.begin(), ::tolower );
    }
    else
    {
        std::transform( s.begin(), s.end(), s.begin(), ::toupper );
    }
    
    std::cout << s << std::endl;
    
    return 0;
}
