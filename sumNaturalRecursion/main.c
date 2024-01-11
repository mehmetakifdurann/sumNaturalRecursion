// This is a 'C' program to find the sum of natural numbers in given range using recursion.
 
/*
 Example output:
    Input lower limit :1
    Input upper limit :10
    ----------------------
    Sum of the natural numbers from 1 to 10 = 55.
    
    ! ! ! THE PROGRAM ENDS ! ! !
 
 */

// Created by Mehmet Akif DURAN January 11, 2024.

#include <stdio.h>

int sumOfNumbers(int,int); //function prototype.

int main(){ // beginnig of the main function
    
    //variable decleration(s).
    
    int lowerLimit, upperLimit;
    int answer,temp;
    
    // executable statement(s).
    
        //getting inputs from the user.
    printf("Input lower limit : \n");
        scanf("%d", &lowerLimit);
    printf("Input upper limit : \n");
        scanf("%d", &upperLimit);
    
    //changing operation for wrong inputs.
    if(lowerLimit>upperLimit){
        temp = lowerLimit;
        lowerLimit = upperLimit;
        upperLimit = lowerLimit;
    }
    
    printf("----------------------------\n");
    
    //function call.
    
    answer = sumOfNumbers(lowerLimit, upperLimit);
    
    // printing answers.
    
    printf("Sum of the natural numbers 1 to 10 = %d\n",answer);
    
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    
    return 0;
} //end of the main funciton


//funciton definition
int sumOfNumbers(int lowerInput, int upperInput){
    
    //executable statement(s).
    
    if(lowerInput == upperInput)
        return lowerInput;
    else
        return lowerInput + sumOfNumbers(lowerInput+1,upperInput);
        
}
