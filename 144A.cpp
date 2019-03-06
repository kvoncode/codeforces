#include <iostream>

int main()
{
    int n;
    int * arr = nullptr;
    int minHeight = 100;
    int minHeightIndex = 0;
    int maxHeight = 1;
    int maxHeightIndex = 0;
    int counter = 0;

    std::cin >> n;

    arr = new int [n];

    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];

        if(arr[i] <= minHeight)
        {
            minHeight = arr[i];
            minHeightIndex = i;
        }

        if(arr[i] > maxHeight)
        {
            maxHeight = arr[i];
            maxHeightIndex = i;
        }
    }

    counter = maxHeightIndex + (n-1 - minHeightIndex);

    if( maxHeightIndex > minHeightIndex)
        counter--;

    std::cout << counter << std::endl;
}
