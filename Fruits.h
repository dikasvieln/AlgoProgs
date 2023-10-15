#pragma once
#include <string>

class Fruits
{
public:
    
	int Fruity(int d);


    std::string mul(int p1, int p2)
    {
        Fruits::param1 = p1;
        Fruits::param2 = p2;

        return std::string(p1, p2);
    }
    
    operator int()
    {
        return param1 * param2;
    }

    operator std::string()
    {
        return std::string(param2, param1 + '0');
    }

    std::string backAround(std::string str) {
        return str[str.size() - 1] + str + str[str.size() - 1];
    }

private:
    int param1;
    int param2;
};

