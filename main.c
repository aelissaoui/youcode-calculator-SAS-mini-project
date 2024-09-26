#include <stdio.h>

void addition(){
    int n, total, num;
    total = 0;
    printf("enter the number of numbers you want to add:");
    scanf("%d", &n);
    while(n > 0){
        scanf("%d", &num);
        total += num;
        n--;
    }
    printf("the sum is: %d \n", total);
}

void soustraction(){
    int a, b;
    printf("enter the first number:\n");
    scanf("%d", &a);
    printf("enter the second nuber:\n");
    scanf("%d", &b);
    printf("%d - %d = %d\n", a, b, a-b);
}

void Multiplication(){
    int n, total, num;
    total = 1;
    printf("enter the number of numbers you want to muliply:");
    scanf("%d", &n);
    while(n > 0){
        scanf("%d", &num);
        total *= num;
        n--;
    }
    printf("%d \n", total);
}

void division(){
    int a, b;
    printf("enter the first number:\n");
    scanf("%d", &a);
    printf("enter the second nuber:\n");
    scanf("%d", &b);
    if(b == 0){
        printf("Cannot devide by zero!!\n");
        return;
    }
    printf("%d - %d = %d\n", a, b, a/b);
}

void Moyenne(){
    int n, total, num, len;
    total = 0;
    printf("enter the number of values in your serie:");
    scanf("%d", &n);
    len = n;
    while(n > 0){
        scanf("%d", &num);
        total += num;
        n--;
    }
    printf("le moyenne est : %d \n", total/len);
}

void absolue(){
    int n, res;
    printf("enter the number:");
    scanf("%d", &n);
    if(n < 0)
        res = n * -1;
    else
        res = n;
    printf("the abulte value of %d is %d\n", n, res);
}

void Exponentiation(){
    int number, puissance, total, k;
    printf("enter the number then it's puissance:");
    scanf("%d", &number);
    scanf("%d", &puissance);
    k = puissance;
    total = number;
    while(puissance > 1){
        total = total * number;
        puissance--;
    }
    printf("the power of %d by %d is %d: \n", number, k, total);
}

void squareroot(){
    int n, x, y;
    printf("enter the number: ");
    scanf("%d", &n);
    if(n < 1){
        printf("format error!:\n");
        return;
    } else if(n == 1){
        printf("the square root of 1 is 1\n");
        return;
    }
    x = n;
    y = 1;
    while(x > y){
        x = (x+y)/2;
        y = n/x;
    }
    printf("the square root of %d is %d\n", n, x);
}

int main(){
    int operatoer;
    printf("which operation do you want to do? choose by typing the number of it: \n1_Addition : Ajouter deux ou plusieurs nombres.\n2_Soustraction : Soustraire deux nombres.\n3_Multiplication : Multiplier deux ou plusieurs nombres.\n4_Division : Diviser deux nombres, avec gestion de la division par zero.\n5_Moyenne : Calculer la moyenne d'une serie de nombres.\n6_Valeur absolue : Calculer la valeur absolue d'un nombre.\n7_Exponentiation : Calculer un nombre a une certaine puissance.\n8_Racine carree : Calculer la racine carree d'un nombre positif.\n");
    scanf("%d", &operatoer);
    if(operatoer == 1){
        addition();
    } else if(operatoer == 2){
        soustraction();
    } else if(operatoer == 3){
        Multiplication();
    } else if(operatoer == 4){
        division();
    } else if(operatoer == 5){
        Moyenne();
    } else if(operatoer == 6){
        absolue();
    } else if(operatoer == 7){
        Exponentiation();
    } else if(operatoer == 8){
        squareroot();
    }
}