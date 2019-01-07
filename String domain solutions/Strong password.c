#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int minimumNumber(int n, char* password) {
    // Return the minimum number of characters to make the password strong
    char numbers[] = "0123456789";
    char lower_case[] = "abcdefghijklmnopqrstuvwxyz";
    char upper_case[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char special_characters[] = "!@#$%^&*()-+";
    int satisfy1 = 0;
    int satisfy2 = 0;
    int satisfy3 = 0;
    int satisfy4 = 0;
    int satisfy = 0;
    int result = 0;
    
    for(int i = 0; i < n; i++)
    {
        if((password[i] >= '0') && (password[i] <= '9'))
            satisfy1 = 1;
        if((password[i] >= 'a') && (password[i] <= 'z'))
            satisfy2 = 1;
        if((password[i] >= 'A') && (password[i] <= 'Z'))
            satisfy3 = 1;
        if((password[i] == '!') || (password[i] == '@') || (password[i] == '#') || (password[i] == '$') || (password[i] == '%') || (password[i] == '^') || (password[i] == '&') || (password[i] == '*') || (password[i] == '(') || (password[i] == ')') || (password[i] == '-') || (password[i] == '+'))
            satisfy4 = 1;
    }

    satisfy = satisfy1 + satisfy2 + satisfy3 + satisfy4;
    result = 4 - satisfy;
    if((result + n) < 6)
        result = 6 - n;
    
    return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    char* password = (char *)malloc(512000 * sizeof(char));
    scanf("%s", password);
    int answer = minimumNumber(n, password);
    printf("%d\n", answer);
    return 0;
}
