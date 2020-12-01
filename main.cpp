#include <iostream>
#include <string.h>
using namespace std;

const int MAXN = 10'000;



int main() {
    char str[MAXN];
    printf("> Enter string: ");
    fgets(str, MAXN, stdin);


    int idx = 0;
    bool word = false;
    int n = strlen(str);
    for (int i = 0; i < n; ++i) {
        if (str[i] == ' ') {
            if (word)
                str[idx++] = ' ';
            word = false;
        } else {
            str[idx++] = str[i];
            if (str[i] == '.') {
                word = false;
            } else {
                word = true;
            }
        }
    }

    str[idx] = '\0';
    n = strlen(str);
    for (int i = 0; i < n; ++i) {
        if (str[i] == ' ' && str[i + 1] == '.') {
            str[i] = '.';
            str[i + 1] = ' ';
        }
    }

    puts(str);
    return 0;
}
