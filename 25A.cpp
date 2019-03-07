    #include <iostream>

    int main()
    {
        int n;
        int evenCounter = 0;
        int oddCounter = 0;
        int lastEvenIndex = -1;
        int lastOddIndex = -1;
        int a;

        std::cin >> n;

        for(int i = 0; i < n; i++)
        {
            std::cin >> a;

            if( 0 == a % 2)
            {
                evenCounter++;
                lastEvenIndex = i;
            }
            else
            {
                oddCounter++;
                lastOddIndex = i;

            }

            // if even numbers are more that 1
            // and we already found index of odd
            if( evenCounter >= 2 && -1 != lastOddIndex ) 
            {
                std::cout << lastOddIndex + 1 << std::endl;
                break;
            }

            // if odd numbers are more that 1
            // and we already found index of even
            if( oddCounter >= 2 && -1 != lastEvenIndex ) 
            {
                std::cout << lastEvenIndex + 1<< std::endl;
                break;
            }
        }
    }
