#include <iostream>
#include <regex>
#include <string>

int main()
{
    int n;   
    int a = 0;
    int d = 0;

    std::string s;

    std::cin >> n;
    std::cin >> s;

   for(size_t i = 0; i < n; i++)
   {
       if( 'A' == s[i] ) 
       {
           a++;
       }
       else
       {
           d++;
       }
   }

    std::cout << (a == d ? "Friendship" : a < d ? "Danik" : "Anton") << std::endl;
    
    return 0;
}
