#include <iostream>

int main()
{
    size_t k, l, m, n, d;   
    size_t unharmedCounter = 0;
   
    std::cin >> k >> l >> m >> n >> d;

    for(size_t i = 0; i < d; i++)
    {
        if( (0 != (i+1) % k) && (0 != (i+1) % l) && (0 != (i+1) % m) && (0 != (i+1) % n) )
        {
            unharmedCounter++;
        }
    }
    
    std::cout << d - unharmedCounter << std::endl;

    return 0;
}
