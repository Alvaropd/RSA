
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include "miller_rabin.h"

uint64_t random_bits(uint64_t b){
uint64_t e= pow(2,b)-1;
uint64_t n = rand()%(e);
uint64_t m = pow(2,b-1)+1;
n=n|m;
return n;
}

uint64_t random_prime(uint64_t b){
uint64_t s = 10;
uint64_t n = random_bits(b);
while(miller_rabin(n,s)==false){
    n = n+2;
}
return n;
}

uint64_t gen_prime(uint64_t n){
uint64_t s =10;
uint64_t modulo = n%2;
n = n+1-modulo;
while(miller_rabin(n,s)==false){
    n=n+2;
}
}
