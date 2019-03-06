#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    int temp;
    std::vector<int> cont;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> temp;
        cont.push_back(temp);
    }

    std::sort( cont.begin(), cont.end() );

    for(int i = 0; i < n; i++)
    {
        std::cout << cont[i] << " ";
    }

}
