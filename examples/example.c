#include "stdio.h"
#include "../cJSONEx.h"

int main(int argc, char* argv[])
{
    cJSON* root;
    cJSON_GetBoolFromObject(root, "age");
    return 0;
}


