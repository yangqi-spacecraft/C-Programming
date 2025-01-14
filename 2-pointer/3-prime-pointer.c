#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


bool is_prime(int n){
    // pay attention to <= sqrt as like sqrt(9)=3, 3 also should be counted.
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int *first_n_primes(int n){
    int *prime_numbers = malloc(sizeof(int) * n);
    int count = 0;
    int i = 2;

    while(count <= n){
        if(is_prime(i)){
            prime_numbers[count] = i;
            count++;
        }
        i += 1;
    }

    return prime_numbers;
}


int main(){
    int n = 10;
    int *final_prime_numbers;
    final_prime_numbers = first_n_primes(n);

    printf("wow~~, the first n prime numbers are:\n");

    for(int i = 0; i < n; i++){
        printf("%i\n", final_prime_numbers[i]);
    }
}