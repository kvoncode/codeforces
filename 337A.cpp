#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main()
{   
    int n, m;
    std::vector<int> cont;
    int temp;
    int minDiff = std::numeric_limits<int>::max();

    std::cin >> n >> m;

    for(size_t i = 0; i < m; i++)
    {
        std::cin >> temp;
        cont.push_back(temp);
    }

    // sort
    std::sort( cont.begin(), cont.end() );

    // search minimal sub-sequence
    
    for(size_t i = 0; i < m - n + 1; i++)
    {
        temp = cont[i+n - 1] - cont[i];

        if (temp < minDiff)
        {
            minDiff = temp;
        }
    }

    if(m == n)
    {
        minDiff = cont[ cont.size() - 1] - cont[0];
    }

    std::cout << minDiff << std::endl;    
    
    return 0;
}
