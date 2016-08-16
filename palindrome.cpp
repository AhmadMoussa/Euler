//
//  palindrome.cpp
//  
//
//  Created by Christine Baertl on 18/06/16.
//
//

#include <stdio.h>
#include <iostream>

bool isPalindrome(int num){
    int initial = num;
    int last = 0;
    int image = 0;
    while(num>0){
        last = num%10;
        num = num/10;
        image = image*10 + last;
    }
    
    return image==initial;
}

int palindrom(){
    
    int prod = 0;
    int biggest = 0;
    
    for(int i = 999; i >99; i--){
        for(int j = 999; j>99; j--){
            
            prod = i*j;
           
            if(isPalindrome(prod))
            {
                if (biggest<prod){ biggest = prod;}
            }
        }
    }
    
    return biggest;
        
}



int main() {
    int a = palindrom();
    printf("%d\n",a);
    return 0;
}

