#include <iostream>
#include <string.h>
using namespace std;

const int MAXN = 10'000;



int main() {
    char str[MAXN];
    printf("> Enter string: ");
    fgets(str, MAXN, stdin);

    char strFormat[MAXN];
    char *word = strtok(str, " ");
    while (word != NULL) {
        printf ("%s\n", word);
        strcat(strFormat, word);
        if (strcmp(word, ".") != 0) {
            strcat(strFormat, " ");
        }

        word = strtok (NULL, " ");
    }

    int n = strlen(strFormat);
    for (int i = 0; i < n - 1; ++i) {
        if (strFormat[i] == ' ' && strFormat[i + 1] == '.') {
            char t = strFormat[i];
            strFormat[i] = strFormat[i + 1];
            strFormat[i + 1] = t;
        }
    }

    puts(strFormat);
    return 0;
}
