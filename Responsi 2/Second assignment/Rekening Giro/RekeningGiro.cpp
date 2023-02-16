#include <iostream>
#include "RekeningGiro.h"
using namespace std;

RekeningGiro::RekeningGiro(double saldo, double bunga) : Rekening(saldo){
    this->sukuBunga = bunga;
}

void RekeningGiro::setSukuBunga(double bunga){
    this->sukuBunga = bunga;
}

double RekeningGiro::getSukuBunga() const{
    return this->sukuBunga;
}

double RekeningGiro::hitungBunga(){
    return this->sukuBunga * Rekening::getSaldo();
}