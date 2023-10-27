#include "Counter.h"
#include<iostream>

Counter::Counter(int initial) : num(initial) {}

int Counter::increase() {
    return num++;
}

int Counter::decrease() {
    return num--;
}

void Counter::currentValue() {
    std::cout << num << "\n";
}
