#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    long double n, m, a;
    std::cin >> n >> m >> a;

    long double answer = ceil(n/a) * ceil(m/a);
        
    
    std::cout << std::fixed << std::setprecision(0) << answer << std::endl;     
    
    return 0;
}
