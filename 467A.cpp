#include <iostream>

int main()
{   
    int n;
    int availableRooms = 0;
    int living, total;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> living >> total;

        if ( living + 2 <= total)
            availableRooms++;
    }
    
    std::cout << availableRooms << std::endl;

    return 0;
}
