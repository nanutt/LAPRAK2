#include <stdio.h>
int main(){
    int A,B,C;
    A=12;
    C=5;
    B=((A*A)+(C*C))/13;
    printf("Diketahui: \n");
    printf("Alas = 5cm \n");
    printf("Tinggi = 12cm \n");
    printf("Jawab: \n");
    printf("Sisi A = ? cm \n");
    printf("Sisi B = ? cm \n");
    printf("Sisi C = ? cm \n");
    printf("Keliling = %d cm \n", (A+B+C));
    printf("Luas = %d cm \n", ((1*A*C)/(2)));
}