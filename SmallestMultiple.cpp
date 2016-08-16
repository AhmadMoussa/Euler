//
//  SmallestMultiple.cpp
//  
//
//  Created by Christine Baertl on 16/08/16.
//
//

#include <stdio.h>
#include <iostream>



bool isSmallest(int s){
    for(int i = 1; i<20; i++){
        if(s%i != 0){
            return false;
        }
    }
    return true;
}

int findSmallest(){
    int i = 2520;
    while(!isSmallest(i)){
        if(isSmallest(i)){break;}
        i++;
    }
    return i;
}

int main(){
    int smallest = findSmallest();
    printf("%d",smallest);
    return 0;
}

//232792560