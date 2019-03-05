#include <iostream>
#include <string>

int main()
{
    size_t n;
    size_t counter = 1;

    std::string current, next;

    std::cin >> n;

    if( 1 == n)
    {
        std::cout << counter << std::endl;

        return 0;
    }

    std::cin >> current;


    for(size_t i = 0; i < n - 1; i++)
    {
        std::cin >> next;

        if (current != next)
        {
            counter++;
        }

        current = next;
        
    }

    std::cout << counter << std::endl;
    
}
