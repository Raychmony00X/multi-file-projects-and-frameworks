#pragma once

class Counter {
private:
    int value;

public:
    Counter();                    
    Counter(int initValue);      

    int increase();               
    int decrease();
    int getValue() const;
};