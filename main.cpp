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
#include <vector>
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

//Write array to hold the three colors so it can check properly.
void GuessVerification::guessVerifier(int guess){ //Needs work.
    int n = 100;
    randNum = 100 + (rand() % 899);
    vector <int> colors(3);
    
    for (int i = 1; i <= 3; i++){
        if (i == 1){
            if (((guess/n) % 10) == ((randNum/100) % 10)){ //compares guess to randNum digit 1
                n = n/10;
                //colors.at(j) = colors.at(j) + 1; //Updates element.
                //element at 0 ++
                //swap
            } else if (((guess/n) % 10) == ((randNum/10) % 10)) { //compares guess to randNum digit 2
                n = n/10;
                //element at 1 ++
                //swap
            } else if (((guess/n) % 10) == (randNum % 10)) { //compares guess to randNum digit 3
                n = n/10;
                //element at 2 ++
                //swap
            } else {
                n = n/10;
                red++;
            }

        } else if (i == 2){
            if (((guess/n) % 10) == ((randNum/10) % 10)){ //compares guess to randNum digit 1
                n = n/10;
                //colors.at(j) = colors.at(j) + 1; //Updates element.
                //element at 0 ++
                //swap
            } else if (((guess/n) % 10) == ((randNum/100) % 10)) { //compares guess to randNum digit 2
                n = n/10;
                //element at 1 ++
                //swap
            } else if (((guess/n) % 10) == (randNum % 10)) { //compares guess to randNum digit 3
                n = n/10;
                //element at 2 ++
                //swap
            } else {
                n = n/10;
                red++;
            }

        } else if (i == 3){
            if (((guess/n) % 10) == (randNum % 10)){ //compares guess to randNum digit 1
                n = n/10;
                //colors.at(j) = colors.at(j) + 1; //Updates element.
                //element at 0 ++
                //swap
            } else if (((guess/n) % 10) == ((randNum/100) % 10)) { //compares guess to randNum digit 2
                n = n/10;
                //element at 1 ++
                //swap
            } else if (((guess/n) % 10) == ((randNum/10) % 10)) { //compares guess to randNum digit 3
                n = n/10;
                //element at 2 ++
                //swap
            } else {
                n = n/10;
                red++;
            }

        }
        
    }
    //green = colors.at(2);
    //yellow = colors.at(1) + colors.at(0);
}


void GuessVerification::printResults(){ //WORKS
    cout<<"You have: "<<red<<" red"<<endl;
    cout<<"          "<<green<<" green"<<endl;
    cout<<"          "<<yellow<<" yellow"<<endl;
    cout<<"The number was "<<randNum<<endl;
}


int main() {
    //int guess;
    //GuessVerification guessedValue;
    //srand(static_cast<unsigned int>(time(0)));
    /* cout<<"Try to guess the 3 digit number."<<endl;
     cin>>guess;
     guessedValue.guessVerifier(guess);
     guessedValue.printResults();
     */
    vector <int> test(3);
    test.at(0) = 1;
    test.at(1) = 45;
    test.at(2) = 209;
    cout<<test.at(0)<<endl;
    test.at(0) = test.at(0) + 1;
    cout<<test.at(0)<<endl;
    
    
    
    
    
    return 0;
}