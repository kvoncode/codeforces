#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

int main()
{
    std::string input;
    std::cin >> input;
    
    input[0] = toupper(input[0]);
    
    std::cout << input << std::endl;

    return 0;
}
