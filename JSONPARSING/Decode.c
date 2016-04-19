#include"EncodeDecode.h"
#include<string.h>
#include<malloc.h>
#include"cJSON.h"

void decodeData(DATA *decodeObj, char *jsonEncodedString)
{
    cJSON *root;
    root = cJSON_Parse(jsonEncodedString); 

    if (!root) {printf("Error before: [%s]\n",cJSON_GetErrorPtr());}
    else
    {
    decodeObj->name = (char*)malloc(20);
	strcpy(decodeObj->name, cJSON_GetObjectItem(root,"name")->valuestring);
	decodeObj->width = cJSON_GetObjectItem(root,"width")->valueint;
	decodeObj->frame_rate =cJSON_GetObjectItem(root,"frame_rate")->valueint; 
	decodeObj->rate =cJSON_GetObjectItem(root,"rate")->valuedouble; 
	//printf("Struct Obj name %s \n", decodeObj->name);
	cJSON_Delete(root);
    return;

    }
}
