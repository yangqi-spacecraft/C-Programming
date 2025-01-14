#include <stdio.h>
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

int main(){
    for(int i = 2; i <= 100; i++){
        if (is_prime(i)){
            printf("wowww~~, %i is a prime!\n", i);
        }
    }
}
