//gcc cJSON.c jsonparsing.c -lm
#include"EncodeDecode.h"
#include<stdio.h>
#include<malloc.h>

int main()
{
    char *jsonEncodedString=NULL;

    DATA *encodeObj= (DATA *)malloc(sizeof(DATA));
    DATA *decodeObj=(DATA *)malloc(sizeof(DATA));

    encodeObj->width = 20;
    encodeObj->rate = 10.33;
    encodeObj->frame_rate = 2.0;
    encodeObj->name = "cJSON";
   
    jsonEncodedString = encodeData(encodeObj);
    printf("----------- Encoded String ----------------------\n");
    printf("%s",jsonEncodedString);

    decodeData(decodeObj, jsonEncodedString);
    printf("\n------------ Decoded String ---------------------\n");
    printf("Struct Obj name %s \n", (decodeObj->name));
    printf("Struct Obj width %d \n", (decodeObj->width));
    printf("Struct Obj frame_rate %f \n", (decodeObj->frame_rate));
    printf("Struct Obj rate %lf \n", (decodeObj->rate));
    printf("-------------------------------------------------\n");
    return 0;
}
