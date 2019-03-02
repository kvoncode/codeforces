#include <iostream>

int main()
{   
    size_t * arr;
    size_t n;
    size_t max = 0;
    size_t counter = 0;

    std::cin >> n;

    arr = new size_t [n];

    for(size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    
    size_t i;
    
    // n - 1 comparings
    for( i = 0; i < n - 1; i++)
    {
        if( arr[i] <= arr[i+1] )
        {
            counter++;
            if( max < counter)
            {
                max = counter;
            }
        }
        else
        {
            if( max < counter)
            {
                max = counter;
            }
            counter = 0;
        }  
    }
    
    std::cout << max+1 << std::endl;
    
    return 0;
}
