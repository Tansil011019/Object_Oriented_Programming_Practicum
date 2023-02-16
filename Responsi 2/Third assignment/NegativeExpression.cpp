#include <iostream>
#include "NegativeExpression.hpp"
using namespace std;

int NegativeExpression::solve(){
    return x->solve() * -1;
}