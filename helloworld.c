#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("what's x? ");
    long y = get_long("what's y? ");

    if (x > y)
    {
        printf("%li\n", x + y);
    }
    else if (x < y)
    {
        printf("%li\n", x - y);
    }
    else if (x==y)
    {
        printf("%li\n", x * y);
    }
    return 0;
}
Creating a new branch is quick & simple.






