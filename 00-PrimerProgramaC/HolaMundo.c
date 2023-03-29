#include<stdio.h>
#include<string.h>

void main()  
{  
    char colores[][8] = {"\033[0;29m", "\033[0;2m", "\033[0;30m", "\033[0;31m", "\033[0;32m", "\033[0;33m", "\033[0;34m", "\033[0;35m", "\033[0;36m", "\033[0;40m", "\033[0;41m", "\033[0;42m", "\033[0;43m", "\033[0;44m", "\033[0;45m", "\033[0;46m", "\033[0;7m"};  //Un array de strings que al imprimirlos cambian el color del texto de la terminal
    char word[] = "Hola Mundo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    for (int c = 0; word[c] != '\0'; c++){  //El loop sigue hasta que no le queden caracteres a la palabra
        if (word[c] != ' ')
            printf("%s", colores[c%17]); //Se imprime el string que cambia el color del texto 
        putchar(word[c]);
    }
    printf("%s", "\033[0;0m"); //Resetea el color de la terminal
}