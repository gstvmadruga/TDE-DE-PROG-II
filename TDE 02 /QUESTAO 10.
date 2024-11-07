#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];  
    int letras = 0, digitos = 0, especiais = 0;  

    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {  
            letras++;
        } else if (isdigit(str[i])) {  
            digitos++;
        } else if (!isspace(str[i])) {  
            especiais++;
        }
    }

    printf("Número de letras: %d\n", letras);
    printf("Número de dígitos: %d\n", digitos);
    printf("Número de caracteres especiais: %d\n", especiais);

    return 0;
}
