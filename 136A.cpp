#include <iostream>

int main()
{
   int n;
   int * arr;
   int temp;

   std::cin >> n;

   arr = new int [n];

   for(int i = 0; i < n; i++)
   {
       std::cin >> temp;

       arr[temp-1] = i+1;
   }

   for(int i = 0; i < n; i++)
   {
       std::cout << arr[i] << " ";
   }

    return 0;
}
