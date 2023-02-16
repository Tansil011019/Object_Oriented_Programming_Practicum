#include <iostream>
#include "RekeningTabungan.h"

using namespace std;

RekeningTabungan::RekeningTabungan(double saldo, double biaya) : Rekening(saldo){
    this->biayaTransaksi = biaya;
}

void RekeningTabungan::setBiayaTransaksi(double biaya){
    this->biayaTransaksi = biaya;
}

double RekeningTabungan::getBiayaTransaksi() const{
    return this->biayaTransaksi;
}

void RekeningTabungan::simpanUang(double saldo){
    Rekening::simpanUang(saldo - getBiayaTransaksi());
}

bool RekeningTabungan::tarikUang(double saldo){
    if(Rekening::getSaldo() >= saldo){
        Rekening::setSaldo(Rekening::getSaldo() - saldo - this->biayaTransaksi);
        return true;
    }
    return false;
}