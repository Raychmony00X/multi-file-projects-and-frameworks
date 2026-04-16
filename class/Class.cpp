#include "Class.h"



Counter::Counter() : value(1) {}
Counter::Counter(int initValue) : value(initValue) {}


int Counter::increase() { return ++value; }
int Counter::decrease() { return --value; }
int Counter::getValue() const { return value; }