#include <iostream>
#include <string>

int main()
{
    std::string s1;
    std::string s2;

    std::cin >> s1 >> s2;

    for(size_t i = 0; i < s1.length(); i++)
    {
        std::cout << ( ( s1[i] != s2[i] ) ? "1" : "0") ;
    }
    
}
