#include <iostream>
#include "Polinom.hpp"
using namespace std;

int main(){
    Polinom p(4);
    p.print();
    p.input();
    cout << "This is after subtitute = " << p.substitute(3) << endl;
    p.print();
}