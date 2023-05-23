#ifndef __CJSONEX_H__
#define __CJSONEX_H__

#include "cJSON.h"
#include "stdbool.h"

CJSON_PUBLIC(const char*) cJSON_Version(void);

CJSON_PUBLIC(cJSON *) cJSON_Parse(const char *value);
CJSON_PUBLIC(void) cJSON_Delete(cJSON *item);

CJSON_PUBLIC(char *) cJSON_Print(const cJSON *item);
CJSON_PUBLIC(char *) cJSON_PrintUnformatted(const cJSON *item);
CJSON_PUBLIC(void) cJSON_free(void *object);

CJSON_PUBLIC(int) cJSON_GetArraySize(const cJSON *array);
CJSON_PUBLIC(cJSON *) cJSON_GetArrayItem(const cJSON *array, int index);
CJSON_PUBLIC(cJSON *) cJSON_GetObjectItem(const cJSON * const object, const char * const string);

CJSON_PUBLIC(bool) cJSON_GetBoolFromObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(double) cJSON_GetNumberFromObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(char *) cJSON_GeStringFromObject(cJSON * const object, const char * const name);

CJSON_PUBLIC(cJSON *) cJSON_CreateArray(void);
CJSON_PUBLIC(cJSON *) cJSON_CreateObject(void);

CJSON_PUBLIC(cJSON*) cJSON_AddNullToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddBoolToObject(cJSON * const object, const char * const name, const cJSON_bool boolean);
CJSON_PUBLIC(cJSON*) cJSON_AddNumberToObject(cJSON * const object, const char * const name, const double number);
CJSON_PUBLIC(cJSON*) cJSON_AddStringToObject(cJSON * const object, const char * const name, const char * const string);
CJSON_PUBLIC(cJSON*) cJSON_AddObjectToObject(cJSON * const object, const char * const name);
CJSON_PUBLIC(cJSON*) cJSON_AddArrayToObject(cJSON * const object, const char * const name);


#endif // !__CJSONEX_H__
