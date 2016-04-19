#include"EncodeDecode.h"

char *encodeData(DATA *Obj)
{
        cJSON *root;
	root=cJSON_CreateObject();
	cJSON_AddStringToObject(root, "name",Obj->name);
	cJSON_AddNumberToObject(root, "frame_rate",Obj->frame_rate);
	cJSON_AddNumberToObject(root, "rate",Obj->rate);
	//cJSON_AddItemToObject(root, "format", fmt=cJSON_CreateObject());
	cJSON_AddNumberToObject(root, "width", Obj->width);

	char *jsonEncodedString = cJSON_Print(root);
        return jsonEncodedString;
}


