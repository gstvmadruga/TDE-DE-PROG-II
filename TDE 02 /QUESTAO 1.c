#include <stdio.h>
#include <string.h> 

int main() {
    char str[100];  
  
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  

    str[strcspn(str, "\n")] = '\0';

    printf("Você digitou: %s\n", str);

    printf("\nO comprimento da string é: %lu\n", strlen(str));

    return 0;
}
