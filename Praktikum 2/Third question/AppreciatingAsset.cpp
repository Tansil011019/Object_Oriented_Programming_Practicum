#include "AppreciatingAsset.hpp"
#include <iostream>
#include <math.h>
using namespace std;

double AppreciatingAsset::getValue(int years){
    return this->x->getValue(years) * pow((1+this->rate), years);
}