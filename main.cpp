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
private:
    void randomNumber();
    void guessVerifier(int randNum, int guess);
    void printResults();
};

void GuessVerification::randomNumber(){
    randNum = 100 + (rand() % 899);
}

void GuessVerification::guessVerifier(int randNum, int guess){
    int n = 100;
    for (int i = 0; i < 3; i++){
        if (((guess/n) % 10) == ((randNum/100) % 10)){
            n = n/10;
            green++;
        } else if (((guess/n) % 10) == ((randNum/10) % 10)) {
            n = n/10;
            yellow++;
        } else if (((guess/n) % 10) == (randNum % 10)) {
            n = n/10;
            yellow++;
        } else {
            n = n/10;
            red++;
        }
    } 
}

void GuessVerification::printResults(){
    
}




int main() {
    srand(static_cast<unsigned int>(time(0)));
    return 0;
}