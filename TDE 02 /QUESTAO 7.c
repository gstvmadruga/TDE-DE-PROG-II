#include <stdio.h>
#include <ctype.h>  
#include <string.h>  

int main() {
    char str[100];  

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);  
    }

    printf("String com caracteres maiúsculos: %s\n", str);

    return 0;
}
