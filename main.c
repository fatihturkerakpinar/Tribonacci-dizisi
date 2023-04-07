#include <stdio.h>

int tribonacci(int n) {
    if (n == 0 || n == 1 || n == 2) {  
        return (n == 0 || n == 1) ? 0 : 1;
        //kullanicidan girilen deger 0 veya 1 ise 0, 2 ise 1 degeri verilecektir
    }
    int a = 0, b = 0, c = 1, d;
    for (int i = 3; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
        //3 ten girilen degere kadar giden bir dongu sayesinde her adimda once mevcut durumdaki d degerini hesaplayip
        //sonra her degiskenin icindeki degeri bir sonraki degiskenin icinde attim boylece girilen degerdeki sonucu buldum
    }
    return c;
}

int main() {
    int n;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    printf("Tribonacci degeri: %d\n", tribonacci(n));
    return 0;
}
