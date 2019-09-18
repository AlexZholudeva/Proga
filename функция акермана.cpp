#include <iostream>
#include <stdio.h>
int func (int a, int b)
{
    if (a == 0) return b+1;
    if (b == 0) return func( a - 1, 1 );
    return func( a - 1, func( a, b - 1 ) );
}

int main()
{
    for (int i = 0; i < 6; ++i)
        for (int j = 0; j < 6; ++j)
            printf("func(%d,%d) = %d\n", i, j, func(i,j));

    return 0;
}
