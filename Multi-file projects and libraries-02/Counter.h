#pragma once
#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int num;
    
public:
    Counter(int initial = 0);
    int increase();
    int decrease();
    void currentValue();
};

#endif


