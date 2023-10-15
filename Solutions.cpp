#include "Solutions.h"
#include <math.h>
#include <conio.h>
#include <iterator>

int Solutions::close10(int a, int b)
{
    /*
    Given 2 int values, return whichever value is nearest to the value 10,
    or return 0 in the event of a tie.
    Note that abs(n) returns the absolute value of a number.

    close10(8, 13) → 8
    close10(13, 8) → 8
    close10(13, 7) → 0
    */
    int mainAbsOfA = abs(a - 10);
    int mainAbsOfB = abs(b - 10);

    if (mainAbsOfB > mainAbsOfA)
    {
        return a;
    }
    else if (mainAbsOfA > mainAbsOfB)
    {
        return b;
    }
    else
    {
        return 0;
    }

}

bool Solutions::abs10(int a, int b)
{
    return (abs(a - b) >= 10 && abs(b - 1) <= 50) || (abs(a - 1) <= 10);
}

bool Solutions::increaseScore(int score[], int size)
{
    bool increase = false;

    int i = 0; 
    do {
        increase = score[i + 1] >= score[i];
        i++;
    } while (i < size - 1 && increase);

    if (increase)
    {
        return score[i] >= score[i - 1];
    }

    return increase;
}

bool Solutions::oddNumb(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else {
        return false;
    }
}

string djikstraAlgo()
{
    // shortest path by using djikstra Algorithm 
    // Graph Algo

}
