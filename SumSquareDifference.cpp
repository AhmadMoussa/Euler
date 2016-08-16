//
//  SumSquareDifference.cpp
//  
//
//  Created by Christine Baertl on 16/08/16.
//
//

#include <stdio.h>

int sumSquare(int max){
    int sum = 0;
    for( int i = 1; i <=max; i++){
        sum += (i*i);
    }
    return sum;
}

int squareSum( int max){
    int sum = 0;
    for( int i = 1; i <=max; i++){
        sum += i;
    }
    return (sum*sum);
}

int squareSumDifference(int max){
    return squareSum(max) - sumSquare(max);
}

int main() {
    int i = 100;
    printf("%d",squareSumDifference(i));
    return 0;
}