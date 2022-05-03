/*
 * IPB_FibonacciRecursivo_.c
 * Este programa muestra el n-simo termino de la secuencia de fibonacci
 * Autor: Isaac Pancardo Botello
 * Fecha: 01 / oct / 2021
 */
#include <stdio.h>

/*
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
 * fibonacci = 1
 * fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
 */

unsigned long long int fibonacci (unsigned int);

int main() {
    unsigned int n = 20;

    unsigned long long int f = fibonacci(n);
    printf("fibonacci(%u) = %llu", n, f);
    return 0;
}

unsigned long long int fibonacci (unsigned int n){
    if(0 == n || 1 == n)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
