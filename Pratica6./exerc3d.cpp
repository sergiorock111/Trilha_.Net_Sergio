#include <iostream>
#include <ctype.h>

using namespace std;

int main (void){

char ch1,ch2,ch3;
 
   printf("Digite o primeiro caracter: ");
    scanf(" %c", &ch1);

    printf("Digite o segundo caracter: ");
     scanf(" %c", &ch2);

   if (isprint(ch1) && isprint(ch2)) {
        ch3 = ch1 - 1; 
    } else {
         ch3 = '_';  
    }

    printf("Caracter decimal é : %d\n", ch3);
     printf("Caracter octadecimal é : %o\n", ch3);
      printf("Caracter hexadecimal é : %x\n", ch3);
       printf("Caracter:%c\n", ch3);

   
    return 0;
}