#include <iostream>
#include "AddExpression.hpp"
using namespace std;

int AddExpression::solve(){
    return x->solve() + y->solve();
}