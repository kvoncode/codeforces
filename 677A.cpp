#include <iostream>

int main()
{
    int n;
    int h;
    int width = 0;
    int a;

    std::cin >> n >> h; 

    for(int i = 0; i < n; i++)
    {
        std::cin >> a;

        width += ( a <= h ? 1 : 2 );
    }

    std::cout << width << std::endl;
    
}
