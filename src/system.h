#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <cstring>
using namespace std;

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

#endif