#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "themind.h"


int main() {
    char ans[MAX_LENGTH];
    char moddedanswer[MAX_LENGTH];

    printf("Hey there, it's me fedora :)\n");
    printf("soo what do you wanna ask?\n");
    printf("Answer here: ");

    fgets(ans, MAX_LENGTH, stdin);
    ans[strcspn(ans, "\n")] = 0;
    
    capitalizer(moddedanswer, ans);
    printf("%s\n", moddedanswer);

    if (strstr(moddedanswer, "WHAT'S YOUR AGE")) {
        printf("I am 13, as of November 7, 2024!\n");
    }
    else if (strstr(moddedanswer, "WHAT'S YOUR NAME")) {
        printf("My name is Fedora!\n");
    }
    else if (strstr(moddedanswer, "HELP")) {
        printf("Current commands:\n");
        printf("What's your age?\n");
        printf("What's your name?\n");
        printf("Help - this command\n");
        printf("END\n");
    }
    else if (strstr(moddedanswer, "WANNA PLAY RNS")) {
        printf("Yeah sure!\n");
        rnpns(moddedanswer);
    }

    return 0;
}