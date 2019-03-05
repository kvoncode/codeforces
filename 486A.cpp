#include <iostream>

long long f_n(long long  n)
{
    return ( ( 0 == n % 2 ) ? n / 2 : -(n - 1) / 2 ) ;
}

int main()
{
    long long n;
    long long temp;

    std::cin >> n;

    temp = f_n(n);
    
    std::cout << temp << std::endl;

    return 0;
}
