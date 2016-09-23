//
//  main.cpp
//  Lab 4
//
//  Created by Jordan Guzman on 9/21/16.
//  Copyright (c) 2016 Jordan Guzman. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;


class GuessVerification {
    int guess;
    int randNum;
    int green;
    int yellow;
    int red;
public:
    void guessVerifier(int guess);
    void printResults();
};


void GuessVerification::guessVerifier(int guess){ //WORKS
    int n = 100;
    randNum = 100 + (rand() % 899);
    
    for (int i = 1; i <= 3; i++){
        if (i == 1){
            if (((guess/n) % 10) == ((randNum/100) % 10)){ //compares guess to randNum digit 1
                n = n/10;
                green++;
            } else if (((guess/n) % 10) == ((randNum/10) % 10)) { //compares guess to randNum digit 2
                n = n/10;
                yellow++;
            } else if (((guess/n) % 10) == (randNum % 10)) { //compares guess to randNum digit 3
                n = n/10;
                yellow++;
            } else {
                n = n/10;
                red++;
            }

        } else if (i == 2){
            if (((guess/n) % 10) == ((randNum/10) % 10)){ //compares guess to randNum digit 1
                n = n/10;
                green++;
            } else if (((guess/n) % 10) == ((randNum/100) % 10)) { //compares guess to randNum digit 2
                n = n/10;
                yellow++;
            } else if (((guess/n) % 10) == (randNum % 10)) { //compares guess to randNum digit 3
                n = n/10;
                yellow++;
            } else {
                n = n/10;
                red++;
            }
            
        } else if (i == 3){
            if (((guess/n) % 10) == (randNum % 10)){ //compares guess to randNum digit 1
                n = n/10;
                green++;
            } else if (((guess/n) % 10) == ((randNum/100) % 10)) { //compares guess to randNum digit 2
                n = n/10;
                yellow++;
            } else if (((guess/n) % 10) == ((randNum/10) % 10)) { //compares guess to randNum digit 3
                n = n/10;
                yellow++;
            } else {
                n = n/10;
                red++;
            }

        }
        
    }
}


void GuessVerification::printResults(){ //WORKS
    cout<<"You have: "<<red<<" red"<<endl;
    cout<<"          "<<green<<" green"<<endl;
    cout<<"          "<<yellow<<" yellow"<<endl;
    cout<<"The number was "<<randNum<<endl;
}


int main() {
    int guess;
    GuessVerification guessedValue;
    srand(static_cast<unsigned int>(time(0)));
    cout<<"Try to guess the 3 digit number."<<endl;
    cin>>guess;
    guessedValue.guessVerifier(guess);
    guessedValue.printResults();
    return 0;
}