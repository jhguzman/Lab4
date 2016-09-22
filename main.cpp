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


void GuessVerification::guessVerifier(int guess){ //Needs work.
    int n = 100;
    randNum = 100 + (rand() % 899);
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
