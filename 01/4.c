#include <stdio.h>

int br(void);
int ic(void);

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(", \n");
    br();

    return 0;
}

int br(void)
{
    printf("brazil, russia");

    return 0;
}

int ic(void)
{
    printf("india, china");

    return 0;
}