#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char vowels[5] = "aeiou";
const char consonants[21] = "bcdfghjklmnpqrstvwxyz";

char buf[13 * 30000];
char* p = buf;

int main() {
    srand(time(NULL));

    int n;
    scanf("%d", &n);

    while (n--) {
        for (int i = 0; i < 12; ++i) {
            if (i % 3 == 1) {
                *p++ = vowels[rand() % 5];
            } else {
                *p++ = consonants[rand() % 21];
            }
        }

        *p++ = '\n';
    }

    write(1, buf, p - buf);
    return 0;
}