#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{


    char gaucCmpBuf[]="slave=5";
    char token[6];

    strcpy(token,strtok (gaucCmpBuf, "="));
    strcpy(token,strtok (NULL, "="));
    printf("\ntoken  %d\n\r",atoi(token));

/*
    char SSID[20],PWD[20];//,flag[20],URl[20];    
    char token[4][10];
    char gaucCmpBuf[]="JIOSS,__SL_P_U12=tcp://54.165.39.59:1883,__SL_P_U10=myJio,54__SL_P_U13=jiouser1,D__SL_P_U11=123456789,";
    strtok(gaucCmpBuf,",");
    
    
    strcpy(token[0],strtok (NULL, ","));
	printf("token1  %s\n\r",token[0]);
    strcpy(token[1],strtok (NULL, ","));
	printf("token2  %s\n\r",token[1]);
    strcpy(token[2], strtok (NULL, ","));
	printf("token3  %s\n\r",token[2]);
    strcpy(token[3],strtok (NULL, ","));
	printf("token4  %s\n\r",token[3]);

    int j,i=0; 
    for(int j=0;j<4;j++)
    {	
	i=0;
	while(1)
	{
	    if(token[j][i] == '=')
	    {
		break;
	    }
	    //printf("\n %c", token[j][i]);
		i++;
	}
	printf("\n\t %d \t %d",i,j);
	i = i -2;
	//printf("\n\n hello  %c   %c", token[j][i],token[j][i+1]);
	if(token[j][i] == '1' && token[j][i+1]=='2')
	{
	    //printf("it is 12\n\n");
	}

	    printf("\n\n");
	i=i+3;
	while(token[j][i] != '\0')
	{
	    printf("%c",token[j][i]);
		i++;
	}
	printf("\n------------------------\n");
    }


    ///--------------------------------------------
    char a='.', str[50], token1[10],token2[10],token3[10],token4[10],SSID[20],PWD[20];//,flag[20],URl[20];    
char token[4][10];
    char gaucCmpBuf[]="JIOSS,__SL_P_U12=tcp://54.165.39.59:1883,__SL_P_U10=myJio,54__SL_P_U13=jiouser1,D__SL_P_U11=123456789,";
    strtok(gaucCmpBuf,",");
    
    
    strcpy(token1,strtok (NULL, ","));
	printf("token1  %s\n\r",token1);
    strcpy(token2,strtok (NULL, ","));
	printf("token2  %s\n\r",token2);
    strcpy(token3, strtok (NULL, ","));
	printf("token3  %s\n\r",token3);
    strcpy(token4,strtok (NULL, ","));
	printf("token4  %s\n\r",token4);

    int i=0; 
    while(1)
    {
	if(token2[i] == '=')
	{
	    break;
	}
	printf("\n %c", token2[i]);
	    i++;
    }
    i = i -2;
    printf("\n\n hello  %c   %c", token2[i],token2[i+1]);
    if(token2[i] == '1' && token2[i+1]=='2')
    {
	printf("it is 12\n\n");
    }

	printf("\n\n");
    i=i+3;
    while(token2[i] != '\0')
    {
	printf("%c",token2[i]);
	    i++;
    }*/



	
	/*while(1)
    {
	token = strtok (NULL, ",");
	if(token == NULL)
	{
	    break;
	}
        printf("\n-------------------------\n");
	printf("token  %s\n\r",token);
	
	printf("\n %s",strchr(token,check_char));

	strcpy(str,strtok (token, "="));
	printf("STR tok1  %s\n\r",str);
	strcpy(str,strtok (NULL, "="));
	printf("STR tok2  %s\n\r",str);
    }*/
}
