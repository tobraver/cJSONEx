#include "cJSONEx.h"
#include "stdlib.h"

CJSON_PUBLIC(bool) cJSON_GetBoolFromObject(cJSON * const object, const char * const name)
{
    cJSON * b = cJSON_GetObjectItem(object, name);
    if(cJSON_IsNull(b))
    {
        return false;
    }
    if(cJSON_IsBool(b) || cJSON_IsNumber(b))
    {
        return cJSON_GetNumberValue(b) ? true : false;
    }
    if(cJSON_IsString(b))
    {
        return atoi(cJSON_GetStringValue(b)) ? true : false;
    }
    return false;
}

CJSON_PUBLIC(double) cJSON_GetNumberFromObject(cJSON * const object, const char * const name)
{
    cJSON * n = cJSON_GetObjectItem(object, name);
    if(cJSON_IsNull(n))
    {
        return false;
    }
    if(cJSON_IsBool(n))
    {
        return cJSON_IsTrue(n) ? 1 : 0;
    }
    if(cJSON_IsNumber(n))
    {
        return cJSON_GetNumberValue(n);
    }
    if(cJSON_IsString(n))
    {
        return atof(cJSON_GetStringValue(n));
    }
    return 0;
}

CJSON_PUBLIC(char *) cJSON_GeStringFromObject(cJSON * const object, const char * const name)
{
    cJSON * s = cJSON_GetObjectItem(object, name);
    if(cJSON_IsNull(s))
    {
        return NULL;
    }
    if(cJSON_IsString(s))
    {
        return cJSON_GetStringValue(s);
    }
    return NULL;
}