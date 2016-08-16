//
//  Primes.cpp
//  
//
//  Created by Christine Baertl on 16/06/16.
//
//

#include <stdio.h>
int main(){
    long num = 600851475143;
    for( int i = 2; i<10000000; i++){
        if(num%i==0){printf("%d\n",i); num = num/i;}
    }
}

//largest prime is 6857