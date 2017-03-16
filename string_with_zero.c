#include<stdio.h>

int main()
{

    char type[10]="11102345";

    printf("%s",type);

    char type1[10];

    for(int i = 0;i<10;i++)
    {
	type1[i] = i;
    }

    printf("Hello  %s",type1);
}
