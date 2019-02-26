#include <iostream>
#include <cmath>

int main()
{
    int n;
    int temp = 0;
    int cars = 0;
    
    int counter4 = 0;
    int counter3 = 0;
    int counter2 = 0;
    int counter1 = 0;
    
    std::cin >> n;
    
    for (int i = 0; i < n; i++) 
    {
        std::cin >> temp;
        
        if(4 == temp)
        {
            counter4++;
        }
        else if(3 == temp)
        {
            counter3++;
        }
        else if(2 == temp)
        {
            counter2++;
        }
        else if(1 == temp)
        {
            counter1++;
        }
    }
    
    // packing 1s to 3
    if(counter3 >= counter1)
    {
        counter1 = 0;
    }
    else
    {
        counter1 -= counter3;
    }
    
    // packing 2 to 2 and calculate remainder
    int remainder2 = counter2 % 2;
    
    counter2 /= 2;
    
    int remainder1 = 0;
    // handling 1s if exists
    if(0 != counter1)
    {
        // packing 1 to 2s remainder, if remainder exists and 1s exists
        if(0 != remainder2)
        {
            // if remainder can contain all 1s
            if(counter1 < 3)
            {
                counter1 = 0;
            }
            else // if not
            {
                counter1 -= 2;
            }
        }
        //std::cout << "before ceil: " << counter1 << std::endl;
        // packing 1s with 1s. Ceil in case of 1s remainders
        remainder1 = counter1 % 4;
        counter1 = counter1 / 4;
        
        
        //std::cout << "after ceil: " << counter1 << std::endl;
        //std::cout << "remainder1: " << remainder1 << std::endl;
    }
    
    cars = counter4 + counter3 + counter2 + remainder2 + counter1 + (remainder1 ? 1 : 0) ;
    
    std::cout << cars << std::endl;

    return 0;
}
