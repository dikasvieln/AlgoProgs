#pragma once
#include <string>
class Solutions
{
public:
	int close10(int a, int b);

	bool abs10(int a, int b);

	bool increaseScore(int scores[], int size);

	bool oddNumb(int a);

	// learning djikstra algo
	string djikstraAlgo(vector<int> &edge, int vsize, int startv, int endv);
};

