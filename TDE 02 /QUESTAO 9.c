#include <stdio.h>

int main() {
    char str[100];  
    int count = 0;  

    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);  
  
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("O número de espaços em branco é: %d\n", count);

    return 0;
}
