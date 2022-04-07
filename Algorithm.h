#ifndef LAB_1_SORTING_DAVIDHOFFMAN11_ALGORITHM_H
#define LAB_1_SORTING_DAVIDHOFFMAN11_ALGORITHM_H
#include <iostream>

using namespace std;

class Algorithm {
public:
    virtual void load(string) = 0;
    virtual void execute() = 0;
    virtual void display() = 0;
    virtual void stats() = 0;
    virtual void select(int) = 0;
    virtual void save() = 0;
    virtual void configure() = 0;
};

#endif //LAB_1_SORTING_DAVIDHOFFMAN11_ALGORITHM_H
