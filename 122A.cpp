#include <iostream>

bool is_semi_lucky(int n)
{
    int lucky [] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int luckySize = sizeof(lucky) / sizeof(int);

    for(int i = 0; i < luckySize; i++)
    {
        if( 0 == n % lucky[i] )
            return true;
    }

    return false;
    

}

int main()
{   
    int number = 0;

    std::cin >> number;

    std::cout << ( is_semi_lucky(number) ? "YES" : "NO" ) << std::endl;
    

    return 0;
}
