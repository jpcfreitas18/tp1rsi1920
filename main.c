#include <stdio.h>
#include <math.h>
#include <string.h>

void imprimeSoma();
void divisivelpor3e5();
void soma3de4numeros();
void formularesolvente(int a, int b, int c);
void quantosNomestem();
int my_strlen(char str[]);
int my_strcmp (char destino[], char origem[]);
void my_strcpy (char destino[], char origem[]);
void my_strcat (char destino[], char origem[]);

int main() {
    //imprimeSoma();

    //Exercio 2
    /*
    float celcius = 14;
    float fahrenheit = 0;
    fahrenheit = celcius*1.8+32.0;
    printf("%f celcius equivalem a %f fahrenheit",celcius,fahrenheit);
    */
    //divisivelpor3e5();

    //soma3de4numeros();

    // Exercicio 5
    /*
    int op1, op2, op3;
    printf("Escreva três numeros inteiros\n");
    scanf("%d %d %d",&op1,&op2,&op3);
    formularesolvente(op1,op2,op3);
    */

    //quantosNomestem();

    char test_str[] = "O Braga ganhou ao Vitória!\n";
    printf("A string tem %d caracteres\n", my_strlen(test_str));
    printf("A string tem %d caracteres\n", strlen(test_str));
    char test_1[100] = "O Braga é maior!\n";
    char test_2[100] = "O Braga é melhor!\n";
    printf("A compração tem valor %d!\n",my_strcmp(test_1,test_2));
    //my_strcpy(test_2,test_1);
    //printf(test_2);
    my_strcat(test_2,test_1);
    printf(test_2);

    return 0;
}

// exercicio 1
void imprimeSoma() {
    int op1, op2;
    printf("Escreva dois numeros inteiros\n");
    scanf("%d %d",&op1,&op2);
    printf("O Valor da soma é: %d\n", op1+op2);
    if (op1>op2){
        printf("O maior valor é %d\n",op1);
    }else {
        printf("O maior valor é %d\n",op2);
    }
}

// exercio 3
void divisivelpor3e5(){
    int num;
    printf("Escreva um numero inteiro\n");
    scanf("%d",&num);
    if (num%5==0) {
        if (num%3==0){
            printf("O numero é divisivel por 5 e por 3\n");
        }
    }
}

// exercio 4
void soma3de4numeros(){
    int nums [4] = {23,56, 45, 12};
    int o_maior_valor = nums[0];
    int acomulador = 0;
    for (int i = 0 ; i < 4; i++){
        if (o_maior_valor < nums[i]) {
            o_maior_valor = nums[i];
        }
        acomulador = acomulador + nums[i];
    }
    acomulador = acomulador - o_maior_valor;
    printf("A soma dos valores excepto o maior é %d\n",acomulador);
}

// Exercicio 5
void formularesolvente(int a, int b, int c){
    double res1, res2;
    res1 = (-(b)+sqrt(b*b-4*a*c))/(2*a);
    res2 = (-(b)-sqrt(b*b-4*a*c))/(2*a);
    printf("O valores da formula resolvente são %lf %lf\n",res1, res2);
}

// Exercicio 6
void quantosNomestem(){
    char nome_completo [100];
    printf("Escreva o nome completo\n");
    scanf("%[^\n]s", nome_completo);
    int contador = 0;
    int i = 0;
    while (nome_completo[i]!='\0'){
        if(nome_completo[i]==' '){
            contador++;
        }
        i++;
    }
    printf("O nome tem %d nomes\n",(contador+1));
}


int my_strlen(char str[]){
    int i = 0;
    while (str[i]!='\0'){
        i++;
    }
    return i;
}

int my_strcmp (char destino[], char origem[]){
    int i = 0;
    while (origem[i]!='\0'){
        if(origem[i]!=destino[i]){
            if(destino[i]>origem[i]){
                return 1;
            }else {
                return -1;
            }
        }
        i++;
    }
    return 0;
}

void my_strcpy (char destino[], char origem[]){
    int i = 0;
    while (origem[i]!='\0'){
        destino[i]=origem[i];
        i++;
    }
}

void my_strcat (char destino[], char origem[]){
    int i = my_strlen(destino)-1;
    int j = 0;
    while (origem[j]!='\0'){
        destino[i]=origem[j];
        i++;
        j++;
    }
}