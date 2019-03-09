#include <iostream>
#include <set>
#include <string>

int main()
{
    std::string myString;
    std::set<char> charSet;

    std::getline(std::cin, myString);

    if (myString.size() < 3)
    {
        std::cout << 0;
        return 0;
    }

    for (int i = 1; i < myString.size(); i += 3)
    {
        charSet.insert(myString[i]);
    }

    std::cout << charSet.size() << std::endl;

}
