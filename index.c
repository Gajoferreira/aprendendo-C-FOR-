// #include <stdio.h>

// int main(){

//     printf("ola,mundo\n");

//     return 0;
// }

//----------------------------------------------------

// #include <stdio.h>

// int main (){
//     int idade;
//     printf("digite sua idade: ");
//     scanf("%d", &idade);
//     printf("voce tem %d anos de idade\n", idade);
//     return 0;
// }

//-----------------------------------------------------

// #include <stdio.h>

// int main() {

//  printf("testando algo aqui entao\n");
//  printf("fica tranquilo");

//  return 0;
// }

//-----------------------------------------------------

// #include <stdio.h>
// main() {
//     int idade = 10;  // primeiro momento ele recebera esses valores mais apos a execução da linha 36 ele recebera o valor atualizado 
//     float altura = 1.50;
//     char letra = "B";

//     idade = 20;   // nesse ponto ele recebera o valor atualizado 
//     altura = 1.17;
//     letra = 'A';

//     printf("Idade: %d\n", idade );
//     printf("altura: %.2f\n", altura );
//     printf("letra: %c\n", letra );

//     return 0;
// }

//------------------------------------------------------
// #include <stdio.h> 

// int main() {
     
//     int idade; 
//     char nome [100]; // para digitar seu nome com todas as caracteres tem que reservar um espaço na memoria com a quantidade expecifica de caracteres 

     
//     printf("Digite seu nome aqui: ");
//     fgets(nome, 100, stdin); // o fget e ultilizado para ler strings com espaço exemplo nome completo não pode ser usado junto com o (scanf("%s", nome)) , toda a string que é guardada no fgets no final ele tem \n que quebra a linha. caso queira tirar a quebra de linha tera que ter a bliblioteca #include <string.h>  e ultilizar nome[strcspn(nome, "\n")] = '\0';
    
//     //scanf("%s", nome);                // para (char) não precisa usar o &.
    
//     printf("agora digite sua idade aqui: ");
//     scanf("%d", &idade);
//     printf("seu nome e %s e tem %d anos.gabriel", nome , idade);

//     return 0 ;
// }
     
//--------------------------------------------------------

// #include <stdio.h>

// int main (){

// int idade;

// printf("digite aqui sua idade:");
// scanf("%d", &idade);
    
// if(idade >= 18){    //utilizando o if e o else para extruturas de condição 

//   printf("Voce e maior de idade!!!\n");
//  }
// else{

//     printf("voce e menor de idade\n");

// }

// return 0;
// }

//----------------------------------------------------------

/* #include <stdio.h>
#include <string.h>

int main(){
    
    char nome [100];
    int idade;
    
    printf("qual e seu nome completo: ");
    fgets(nome , 100 , stdin);
     nome[strcspn(nome, "\n")] = '\0';
    printf("qual e sua idade: ");
    scanf("%d", &idade);
     
    if(idade >= 0 && idade <= 12){
     printf("Voce e uma crianca, nao e %s?\n", nome);
    }else if(idade >= 13 && idade <= 17){
        printf("voce e um adolecente, nao e %s?\n", nome);
    }else if(idade >= 18 && idade <= 56){
        printf("voce e um adulto, nao e %s?\n", nome);
    }else if(idade >= 60 ){
        printf("voce e um idoso nao e %s?\n", nome);
    }else{
        printf("idade invalida\n");
    }

    return 0; */
// }

//----------------------------------------------------------

// #include <stdio.h>

// int main(){

//     int i = 0;

//     while (i <= 1000){

//         printf("o valor de I e: %d\n", i);
//         i = i + 5;

//     }

//     return 0;
// }

//----------------------------------------------------------

// #include <stdio.h>
// #include <string.h>

// int main(){

//     char nome[100];
//     int idade;
//     char continuar = 's';

//     while (continuar == 's' || continuar == 'S'){

//         printf("qual e seu nome: ");
//          fgets(nome, 100, stdin);
//          nome[strcspn(nome, "\n")] = '\0';

//         printf("qual e sua idade: ");
//         scanf("%d", &idade);

//         while (getchar() != '\n'); // Limpar buffer do teclado para evitar problemas com fgets na próxima iteração

//         if(idade >= 0 && idade <= 12 ){  
//             printf("voce e uma crianca nao e %s?\n", nome);
//         }else if(idade >= 13 && idade <= 17 ){
//             printf("voce e um adolecente nao e %s?\n", nome);
//         }else if(idade >= 18 && idade <= 59 ){
//             printf("voce e um adulto nao e %s?\n", nome);
//         }else if(idade >= 60){
//             printf("voce e um idoso nao e %s?\n", nome);
//         }else{
//             printf("esse valor nao e valido.\n");
//         }

//         printf("voce quer cadastra outra pessoa? (s/n)");
//         scanf("%c", &continuar);

//         while (getchar() != '\n');


//     }

//     printf("Programa encerrado.\n");

//     return 0;
// }

//02/11/2025

// #include <stdio.h>

// int main(){


//     int i = 1;

//     for(i = 0; i < 501; i++){
//     printf("%d\n", i);
//     }


// return 0;
// }


// esses estudos foram elaborados em 10/11/2025