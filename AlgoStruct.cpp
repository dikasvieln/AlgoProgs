// AlgoStruct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
//#include <iterator>
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
    
    Solutions changes;
    Solutions dtd;
    
    string get;
    int *chA;

    int size;

 
    int dt;
    
    cout << "Hello everyone!" << endl;

    do
     {
        
        int odd;
        int even;

        cout << "list of algorithm practice" << endl;
        cout << "1. Odd number" << endl;
        cout << "2. Abs number" << endl;
        cout << "5. exit programs" << endl;

        cout << "input your choose (1..5): ";
        cin >> dt;

        switch (dt)
        {
        case 1:
            cout << "testing odd number" << endl;
            cout << "input for case odd  : ";
            cin >> odd;
  
            cout << "the answer is : " << changes.oddNumb(odd) << endl;
            break;
        case 2:
            cout << "testing abs10" << endl;
            cout << "input A for case abs 10 : ";
            cin >> odd;
            cout << "input B for case abs 10 : ";
            cin >> even;

            cout << "the answer is : " << changes.abs10(odd, even) << endl;
            break;
        default:
            cout << "close the program by ctrl + c or type: exit";
            break;
        }
    } while (dt != 5);
    
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


    

}


