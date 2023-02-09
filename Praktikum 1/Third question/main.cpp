#include <iostream>
#include "Kompleks.hpp"
using namespace std;

int main(){
	Kompleks k(1, 2);
	Kompleks u(1, 2);
	k = k*u;
	k.Print();
	cout << u.CountKompleksInstance() << endl;
}
