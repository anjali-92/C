//This program concatenates type="111111111" and then
//overrites it with 12121212 in Buf string


#include<stdio.h>
#include<string.h>
int main()
{
    unsigned char Buf[600] = "_WED_SCCCL_P_UJCNJ1KCK3=jKJNSDJNUHCDHB3473,";
    unsigned char type[11]={'\0'};//="121212121";
    for(int i=0;i<10;i++)
    {
	type[i]='1';
    }
    printf("\n buffer before strcat : %s\n\r",Buf);
    strcat( Buf,"type=");
    printf("\n buffer after strcat for type : %s\n\r",Buf);
    strcat(Buf,type);
    strcat(Buf,",");
    Buf[strlen(Buf)]='\0';
    printf("\n buffer: %s\n\r",Buf);

    char *pos = strstr(Buf,"type=");
    pos =pos + 5;
    printf("\n String that is gng to be replace without comma: %s",pos);
    unsigned char type1[10]="121212121";
    strncpy(pos,type1,strlen(type)-1);
    printf("\n\n Overwritten buffer: %s",Buf);

}
