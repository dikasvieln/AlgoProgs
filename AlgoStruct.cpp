// AlgoStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <iterator>
#include <sstream>
#include "Fruits.h"
#include "Solutions.h"

using namespace std;

class Variables
{
public:
    /*Fruits s;
    Fruits a;
    Fruits d;

    Solutions codeTen;
    Solutions changes;

    string get;
    int teps;
    int tips;
    int data;
    int inputA;
    int inputB;
    int getA;
    int getB;*/
};


int main()
{
    Fruits s;
    Fruits a;
    Fruits d;

    Solutions codeTen;
    Solutions changes;
    Solutions dtd;
    
    string get;
    int teps;
    int tips;
    int data;
    int inputA;
    int inputB;
    int getA;
    int getB;
    int *chA;

    int size;

    //var data = new variable();

    /*auto random_numb = launch::xorshift(4);

    for (auto u : random_numb) {
        cout << u << '\n';
    }*/

    
    cout << "Hello everyone!" << endl;
    
   /* cout << "Count your fruits : " << endl;
    

    cin >> data;

    cout << "your fruits are : " << s.Fruity(data) << endl;

    cout << "code solve backAround: ";
    cin >> get;

    cout << "the answers : " << a.backAround(get) << endl;

    

    cout << "input A number to solve close10 : "; 
    cin >> inputA;

    cout << "input B number to solve close10 : ";
    cin >> inputB;
 
    
    cout << "the answer of close 10 is : " << codeTen.close10(inputA, inputB) << endl;

    cout << "check the opposition: " << endl;
    cin >> getA;

    cout << "check the opposition B : " << endl;
    cin >> getB;

    cout << "the answer is : " << changes.abs10(getA, getB) << endl;*/

    int odd;

    cout << "input for case odd  : ";
    cin >> odd;
    string result = to_string(dtd.oddNumb(odd));

  

    cout << "the answer is : " << odd << endl;

}


