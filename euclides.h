#include <iostream>
#include  <ctime>

uint64_t mcd(uint64_t a, uint64_t b){
if (b == 0) {return a;}
return mcd(b,a%b);
}



uint64_t extended_mcd(uint64_t a, uint64_t b, uint64_t &x, uint64_t &y)
    {
    if(b==0){
      x=1;
      y=0;
      return a;
    }


  uint64_t x1,y1;

  uint64_t g = extended_mcd(b, a%b, x1, y1);

  x = y1;
  y = x1-y1*(a/b);
  return g;

}

