#pragma once

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

void capitalizer(char* dest, const char* src) {
    int i;
    for(i = 0; src[i] != '\0'; i++) {
        dest[i] = toupper(src[i]);
    }
    dest[i] = '\0';
}