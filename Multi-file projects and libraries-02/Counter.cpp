#include "Counter.h"
#include<iostream>


class Counter {
private:
    int num;

public:
    Counter(int initial = 0) : num(initial)
    {
    }

    int increase()
    {
        return num++;
    }

    int decrease()
    {
        return num--;
    }

    void currentValue()
    {
        std::cout << num << "\n";
    }
};
