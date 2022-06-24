#include <iostream>
#include "euclides.h"


int phi(int n){
        int r = 0;
        for (int i =1; i<n; i++){
           int d =mcd(i,n);
           if(d == 1){r = r+1;}
        }
        return r;
        }
