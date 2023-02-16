#include <iostream>
#include "SubstractExpression.hpp"
using namespace std;

int SubstractExpression::solve(){
    return x->solve()-y->solve();
}