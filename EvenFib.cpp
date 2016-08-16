//
//  EvenFib.cpp
//  
//
//  Created by Christine Baertl on 16/06/16.
//
//

#include "EvenFib.hpp"
int main() {
    int x1 = 1;
    int x2 = 2;
    int res = 0;
    for( int i = 0; i<4000000;){
        i = x1 + x2;
        if(i%2==0){res+=i;}
        x1=x2;
        x2=i;
    }
    res += 2;
    printf("result = %d",res);
    return 0;
}

//result is: 4613732
