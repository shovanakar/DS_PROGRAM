//C Program to Check For Pangram String
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char findpan(char arr[]) {
    int i, j, count = 0;
    for (i = 0; i < strlen(arr); i++) {
        if (isalpha(arr[i]))
            count++;
    }
    for (i = 0; i < strlen(arr); i++) {
        for (j = i + 1; j < strlen(arr); j++) {
            if (arr[i] == arr[j])
                count--;
        }
    }
    return (count);
}

int main() {
    int s;
    char str[60];
    fgets(str, 60, stdin);
    s = findpan(str);
    if (s == 26)
        printf("pangram");
    else
        printf("not a pangram");
    return 0;
}