#include <stdio.h>
#include <ctype.h>  
#include <string.h>  

int main() {
    char str[100];  
    int count = 0;   

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  
      
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Número de vogais na string: %d\n", count);

    return 0;
}
