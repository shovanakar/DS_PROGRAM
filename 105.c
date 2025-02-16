//C Program to Split a String into a Number of Sub-Strings
#include <stdio.h>
#include <string.h>

void split(char *s, char *d) {

    char *ss = strtok(s, d);  
    while (ss != NULL) {
        printf("%s\n", ss);
      
    
        ss = strtok(NULL, d);  
    }
}
int main() {
    char s[] = ",yaa,yuppp,hooo"; 
    char *d = ",";  

    split(s, d);
  
    return 0;
}
