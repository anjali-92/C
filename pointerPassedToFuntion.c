#include<stdio.h>

int check(unsigned char *);
int main()
{
    unsigned int ptr[2]={0,0};
    check(ptr);
    return 0;
}

int check(unsigned char *data)
{
    printf("\n\n %u", data);
    data++;
    printf("\n\n %u", data);
    data++;
    printf("\n\n %u", data);
    return 0;
}
