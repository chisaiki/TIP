#include <iostream>
#include <cmath> /*For using pow()*/

int find_highest_exponent(int base, int limit);

int main()
{
    std::cout << find_highest_exponent(2, 100) << std::endl;
    std::cout << find_highest_exponent(3, 5) << std::endl;
}

int find_highest_exponent(int base, int limit)
{
    if (base <= 1 || limit <= 0)
    {
        return 0;
    }

    int highest_exponent = 0;
    while(pow(base, highest_exponent) <= limit)
    {
        highest_exponent++;
    }

    return highest_exponent - 1;
}