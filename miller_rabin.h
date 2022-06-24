#include <iostream>"
#include <cmath>
bool es_compuesto(uint64_t a,uint64_t n,uint64_t t,uint64_t u){
uint64_t pot = pow(a,u);
uint64_t x0= pot%n;
if(x0 ==1 | x0 == n-1){return false;}
for (int i =1; i<t; i++){
    uint64_t pot2 =  pow(x0,2);
    uint64_t xi = pot%n;
    if(xi ==n-1){
        return false;
    }

    x0 = xi;

}
return true;
}


bool miller_rabin(uint64_t n,uint64_t s){
uint64_t t = 0;
uint64_t u = n-1;
while(u%2 ==0){
  u = u/2;
  t = t+1;
}
for(int j =1; j < s; j++){
  uint64_t a = rand()%(n-1)+2;
if(es_compuesto(a,n,t,u)){
    return false;
}
return true;
}
}
