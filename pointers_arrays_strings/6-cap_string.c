#include "main.h"
#include <ctype.h>
#include <string.h>

char* cap_string(char* str) {
    int len = strlen(str);
    bool startOfWord = true;

    for (int i = 0; i < len; ++i) {
        if (isspace((unsigned char)str[i]) || strchr(",;.!?:(){}", str[i])) {
            startOfWord = true;
        } else if (startOfWord && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            startOfWord = false;
        } else {
            startOfWord = false;
        }
    }

    return str;
}
