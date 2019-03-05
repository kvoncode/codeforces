#include <iostream>

int main()
{
    int a, b, c;
    int maxValue = 0;

    std::cin >> a >> b >> c;

    // * +
    maxValue = a*b + c;
    maxValue =  (maxValue < a * (b+c) ) ? a*(b+c) : maxValue ;
    // + *
    maxValue =  (maxValue < a + b*c ) ? a+ b*c : maxValue ;
    maxValue =  (maxValue < (a+b) * c ) ? (a+b)*c : maxValue ;

    // ++ **
    maxValue =  (maxValue < a+b+c ) ? a+b+c : maxValue ;
    maxValue =  (maxValue < a*b*c ) ? a*b*c : maxValue ;

    std::cout << maxValue << std::endl;

    return 0;
}
