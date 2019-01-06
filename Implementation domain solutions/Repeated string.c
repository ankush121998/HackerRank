#include <stdio.h>
#include <string.h>

int count_a(char *s, int n) {
    int count = 0;
    for (int i = 0; i < n && s[i]!=0; i++) {
        if (s[i] == 'a') count++;
    }
    return count;
}

int main(void) {
    char s[101];
    long n;
    scanf("%s", s);
    scanf("%ld", &n);
    int slen = strlen(s);
    long num = 0;
    if (n <= slen) {
        num = count_a(s, n);
    } else {
        num = count_a(s, slen); 
        num *= (long)(n / slen);
        num += count_a(s, n % slen);
    }
    printf("%ld\n", num);
    return 0;
}
