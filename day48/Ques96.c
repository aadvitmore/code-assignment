//Q96 Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int start = 0, end = 0, len;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    len = strlen(str);

    for (end = 0; end <= len; end++) {
        if (str[end] == ' ' || str[end] == '\0') {
            int s = start;
            int e = end - 1;
            while (s < e) {
                char temp = str[s];
                str[s] = str[e];
                str[e] = temp;
                s++;
                e--;
            }
            start = end + 1;
        }
    }

    printf("%s\n", str);

    return 0;
}

