#include <iostream>
#include <string>

// checks whether all numbers are different
bool is_all_different(int i)
{
    // array for digits from 0 to 9
    // all initialized with zeros 
    int arr[10] = {0};
    
    // begin with last number
    while(i)
    {
        if ( 0 != arr[ i % 10] )
        {
            return false;
        } 
        else
        {
            arr[ i % 10]++;
            i /= 10;
        }
    }
    return true;
}

int main()
{   
    int number;
    int foundNumber = 0;

    std::cin >> number;

    while( true )
    {
        if( is_all_different(++number) )
        {
            break;
        }
    }
    
    std::cout << number << std::endl;
   
    return 0;
}
