//
//  main.cpp
//  Lab 5
//
//  Created by Jordan Guzman on 9/29/16.
//  Copyright (c) 2016 Jordan Guzman. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
 Algorithm to fill magic square:
    Move up one and one to the right until you hit an already filled space. If you hit a filled space, then
    move 1 below where you're currently at.
    If you need to wrap around make sure it is still taking the same pattern of moving up one and one to the right.
 */

/*
  Implement a 2D vector (n * n, or n^2, matrix).
 */

/*
class MagicSquare{
public:
    MagicSquare(int size);
    void display(vector<int> magicSquare);
    char square(int userInput);
private:
    int size;
    vector <int> magicSquare;
    void move();
};
*/



int main() {
    int numRows;
    cout << "Please enter the number of rows: " << endl;
    cin >> numRows;
    //Initializes Matrix
    vector < vector <int> > test (numRows, vector<int> (numRows, 0));
    int i = 0;
    int j = 0;
    int n = 0;
    int count = 0;
    
    
    
    while(count < test.size()){
        test[i][j] = n + 3;
        i++;
        j++;
        count++;
    }
    //Function to print Matrix
    for (int i = 0; i < test.size(); i++){
        for(int j = 0; j < test.size(); j++){
            cout<<test[i][j];
        }
        cout<<endl;
    }
    return 0;
}
