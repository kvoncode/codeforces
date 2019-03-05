#include <iostream>

// returns k's even number
long long even(long long k)
{
    return  k*2;
}

// returns k's odd number
long long odd(long long k)
{
    return k*2 - 1;
}

long long calc_center(long long n)
{
    return ( 0 == n % 2 ) ? n / 2 :  (n + 1) / 2 ;
}

long long new_order(long long index, long long elemNumber)
{
    long long center = calc_center(elemNumber);

    return ( index <= center ) ? odd(index) : even(index - center);
}

int main()
{
    long long n, k;

    std::cin >> n >> k;

    std::cout << new_order(k, n) << std::endl;

    return 0;
}
