#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>  
#include <stdio.h>

struct berResults
{
    double tot;
    double err;
    float ber;
    clock_t t1;
    clock_t t2;
};