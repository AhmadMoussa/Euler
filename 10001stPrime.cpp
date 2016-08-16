//
//  10001stPrime.cpp
//  
//
//  Created by Christine Baertl on 16/08/16.
//
//

#include <stdio.h>
#include <iostream>

bool isPrime(int num){
    for (int i = 2; i<num; i++){
        if(num%i == 0){return false;}
    }
    return true;
}

int findNthPrime(int n){
    int counter = 0;
    int i = 0;
    while(counter<=n){
        i++;
        if(isPrime(i)){counter++;}
        
    }
    return i;
}

int main(){
    int prime = findNthPrime(10001);
    printf("%d",prime);
    return 0;
}

//104743