
#include <iostream>
#include "phi.h"
#include "primo.h"


void rsa_key_generator(int k){
    // p y q deben ser de k/2 bits
uint64_t p = random_prime(k/2);
p = gen_prime(p);
uint64_t q = random_prime(k/2);
q = gen_prime(q);
uint64_t n = p*q;
uint64_t nphi = phi(n);
uint64_t x,y;
uint64_t e,d;
for(uint64_t i = 2; i < n-1;i++){
    e = i;
    if(extended_mcd(e, nphi,x,y) == 1){
        d = x;
    }
}
std::cout << "n = " << n << std::endl;
std::cout << "d = " << d << std::endl;
std::cout << "e = " << e << std::endl;
}
