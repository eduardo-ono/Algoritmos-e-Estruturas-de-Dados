#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1094795585;
    char *p;

    p = (char*)&num;

    printf("%c\n", *p);
    printf("%c\n", *p+1);
    printf("%c\n", *(p+1));

    return 0;
}
