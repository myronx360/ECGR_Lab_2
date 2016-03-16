/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Myron Williams
 *
 * Created on March 14, 2016, 3:12 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

void NumCompare(){
    // TODO: asks the user to enter two numbers. The program should use the 
    // conditional operator/expression to determine which number is the smaller 
    // and which is the larger of the two

    int num1 = 0;
    int num2 = 0;
    
    cout << " Enter two integers:" << endl;
    cin >> num1;
    cin >> num2;
    
    if (num1 < num2){// indicates the first number is smaller
        cout << num1 << " is smaller than " << num2 << endl;
    }else if(num1 > num2){// indicates the second number is smaller
        cout << num2 << " is smaller than " << num1 << endl;
    }else{// indicates both numbers are equal
        cout << "Both numbers are equal" << endl;
    }
    
    return;
}

void NumberToLetter(){
    /*
     * TODO:
     * 2. Write a program that asks the user to enter a number within the range 
     * of numbers equivalent to the lowercase alphabet. Use a switch statement 
     * to display the alphabet version of that number.
     */

    int num = 0;
    cout << "Enter a number between 97 - 122 inclusive" << endl;
    cin >> num; // get the users number
    cout << (char)num << endl; // convert number to letter
    
    return;
}

void ChangeCountingGame(){
    /* TODO:
     * 3. Create a change-counting game that asks the user to enter what coins 
     * to use to make exactly one dollar. The program should ask the user to 
     * enter the number of pennies, nickels, dimes, and quarters. If the total 
     * value of the coins inserted is equal to one dollar the program should 
     * congratulate the user for winning the game. Otherwise, the program should
     * display a message indicating whether the amount entered was more or less
     * than one dollar. Use constant variables to hold the coin value
     */
    
    const double PENNY = .01;
    const double NICKEL = .05;
    const double DIME = .1;
    const double QUARTER = .25;
    
    double pennies = 0.0;
    double nickels = 0.0;
    double dimes = 0.0;
    double quarters = 0.0;
    
    double total = 0.0;
    
    cout << "Change Counting Game" << endl << endl;
    
    cout << "Enter the number of pennies" << endl;
    cin >> pennies;
    cout << "Enter the number of nickels" << endl;
    cin >> nickels;
    cout << "Enter the number of dimes" << endl;
    cin >> dimes;
    cout << "Enter the number of quarters" << endl;    
    cin >> quarters;
    
    total = (PENNY * pennies) + (NICKEL * nickels) + (DIME * dimes) 
            + (QUARTER * quarters);
    
    if(total > 1.0){
        cout << "Total amount is more than a dollar" << endl;
    }else if (total < 1.0){
        cout << "Total amount is less than a dollar" << endl;
    }else{
        cout << "WINNER total equals a dollar" << endl;
    }
    
    return;
}

void LetterNumberIncrementer(){
    /*TODO:4. Write code that lets the user enter a number and a letter.Both 
     * should be increased until the end of the alphabet is reached and printed.
     * Use a while loop. 
     */
    
    int num = 0;
    char letter;
    
    // Get user input
    cout << "Enter a number" << endl;
    cin >> num;
    cout << "Enter a letter" << endl;
    cin >> letter;
    
    while(letter <= 'z'){   // loop until the end of the alphabet    
        cout << num <<": " << letter << endl; // print current number and letter
        // increment number and letter
        num++;
        letter++;
    }
    return;
}

void primeNumbers(){
    /* TODO:
     * 6. Write a program that finds and prints all of the prime numbers 
     * between 3 and 100. A prime number is a number that can only be divided 
     * by one and itself (i.e. 3, 5, 7, 11, 13...).
     */
    bool test = true;
    
    for(int min = 3; min <= 100; min++){// loop through 0 to 100
        test = true;
        for(int i = 2; i <= min - 1; i++){
            if(min % i == 0){ // if true then current number is not prime
                test = false;
                break; // skip to next number
            }
        }
        if(test == true){// The number is prime so print it
            cout << min << endl;
        }
    }
    return;
}

int main(int argc, char** argv) {
     NumCompare();
    NumberToLetter();  
     ChangeCountingGame();
    LetterNumberIncrementer();
    primeNumbers();
    return 0;
}


