#include <stdio.h>

int main()
{
    int i = 12345;
    i = i - ((i / 1000) % 10) * 1000 + (i % 10) * 1000 - i % 10 + (i / 1000) % 10;
    printf("%d", i);
    return 0;
}
