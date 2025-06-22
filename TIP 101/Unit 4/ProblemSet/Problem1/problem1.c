/*How to compile:  gcc problem1.c -lm -o problem1
    Why -lm? using the pow() function from the math library, 
    but the linker can't find it. In C, when you use math functions like pow(), 
    you need to link against the math library explicitly.*/

#include <stdio.h>
#include <math.h>

int find_highest_exponent(double base, double limit);

int main()
{
    printf("%d\n", find_highest_exponent(2, 100));
    printf("%d\n", find_highest_exponent(3, 5));
}

int find_highest_exponent(double base, double limit)
{
    if (base <= 1 || limit <= 0)
    {
        return 0;
    }

    double highest_exponent = 0;
    while(pow(base, highest_exponent) <= limit)
    {
        highest_exponent++;
    }

    return highest_exponent - 1;
}