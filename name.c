#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, j, length;

    
    printf("Enter your name: ");
    scanf("%s", name);

    length = strlen(name);

    
    for (i = 1; i <= length; i++) {
        
        for (j = 0; j < i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    for (i = length - 1; i > 0; i--) {
        
        for (j = 0; j < i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    return 0;
}