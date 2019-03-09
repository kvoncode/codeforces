#include <iostream>
#include <set>

int main()
{
    int n;
    int p, q;
    int temp;

    std::set<int> mySet;

    std::cin >> n;

    std::cin >> p;

    for (int i = 0; i < p; i++)
    {
        std::cin >> temp;

        mySet.insert(temp);
    }

    std::cin >> q;

    for (int i = 0; i < q; i++)
    {
        std::cin >> temp;

        mySet.insert(temp);
    }

    std::cout << (mySet.size() == n ? "I become the guy." : "Oh, my keyboard!") << std::endl;
}
