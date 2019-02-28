#include <iostream>
#include <string>
#include <regex>
#include <ctype.h>
#include <algorithm>

int main()
{   
    std::string input;
    // (1) first lowercase letter and others are uppercase 
    std::regex e1("^[a-z]{1}[A-Z]*$");
    // (2) all uppercase
    std::regex e2("^[A-Z]+$");

    std::cin >> input;

    // (1)
    if( std::regex_match( input, e1 ) )
    {
        // change all to lowercase
        std::transform(input.begin(), input.end(), input.begin(), ::tolower);

        // and first letter to uppercase
        input[0] = toupper(input[0]);

    }
    // (2)
    else if ( std::regex_match( input, e2 ) )
    {
        // change all to lowercase
        std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    }
   
    std::cout << input << std::endl;

    return 0;
}
