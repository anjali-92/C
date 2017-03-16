#include <stdio.h>
#include <string.h>

int main ()
{
    char src[50];

    strcpy(src,  "CM");
    strcat(src, "8F");
    strcat(src, "AF");

    printf(" %s ", src);

    unsigned char readingreg[4];
    readingreg[0] = 0x4a;
    readingreg[1] = 0xaa;
    char temp[4];
    char temp1[4];

    sprintf(temp, "%x", readingreg[0]);
    sprintf(temp1, "%x", readingreg[1]);
    strcat(temp,temp1);
    printf("This is element 0: %s\n", temp);

    return(0);
}
