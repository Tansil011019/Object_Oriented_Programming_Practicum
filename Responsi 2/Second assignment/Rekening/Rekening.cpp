#include <iostream>
#include "Rekening.h"
using namespace std;

Rekening::Rekening(double saldo){
    this->saldo = saldo > 0 ? saldo : 0;
}

void Rekening::setSaldo(double saldo){
    this->saldo = saldo;
}

double Rekening::getSaldo() const{
    return this->saldo;
}

void Rekening::simpanUang(double additional){
    this->saldo += additional;
}

bool Rekening::tarikUang(double reduce){
    double temp= this->saldo - reduce;
    if(temp < 0){
        return false;
    }else{
        this->saldo = temp;
        return true;
    }
}