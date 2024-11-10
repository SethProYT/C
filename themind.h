#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_LENGTH 1000

void capitalizer(char* dest, const char* src) {
    int i;
    for(i = 0; src[i] != '\0'; i++) {
        dest[i] = toupper(src[i]);
    }
    dest[i] = '\0';
}

void rnpns(char *mv) {
    srand(time(NULL));
    int r = rand() % 3 + 1;
    int player;
    // rock is one
    // paper is two
    // scissors is three

    printf("rock or paper or scissors: r/p/s\n");
    char ans[100];
    char mod[100];
    fgets(ans, 100, stdin);
    ans[strcspn(ans, "\n")] = 0;

    capitalizer(mod, ans);

    switch(mod[0]) {
        case 'R':
            if (r == 3) {
                printf("dang you won gg\n");
            } 
            else if (r == 2) {
                printf("you lost haha now rm -rf time\n");
            }
            else if (r == 1) {
                printf("it's a tie");
            }
            break;
        case 'P':
            if (r == 3) {
                printf("i cut your paper, i win.\n");
            }
            else if (r == 1) {
                printf("noo my rock!!");
            }
            else if (r == 2) {
                printf("it's a tie.");
            }
            break;
        case 'S':
            if (r == 1) {
                printf("rock smashes scissors i win\n");
            }
            else if (r == 2) {
                printf("scissors cut paper you win\n");
            }
            else if (r == 3) {
                printf("it's a tie");
            }
            break;
        default:
            printf("Invalid input\n");
            break;
    }
}