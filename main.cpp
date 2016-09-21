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


int guess = 145;

int main() {
    //srand(static_cast<unsigned int>(time(0)));
    //int randNum = 100 + (rand() % 899);
    cout<<guess<<endl;
    cout<<(guess/100) % 10<<endl; //Gives first digit
    cout<<(guess/10) % 10<<endl; //Gives second digit
    cout<<guess % 10<<endl; //Gives third digit
    return 0;
}
