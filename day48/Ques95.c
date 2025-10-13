//Q95 Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101], temp[202];
    int len1, len2;

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}

