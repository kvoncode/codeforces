#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int n;
    std::string word;

    std::cin >> n;
    //std::cout << n;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> word;
        
        if(word.length() > 10) 
        {
            word = word.at(0) + std::to_string(word.length() - 2) + word.at( word.length() - 1);
        }
        
        std::cout << word << std::endl;
        
    }
    
    return 0;
}
