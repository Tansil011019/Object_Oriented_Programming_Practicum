#include <iostream>
#include <math.h>
#include "Polinom.hpp"
using namespace std;

Polinom::Polinom(){
    this->derajat = 0;
    this->koef = new int(this->derajat+1);
    this->koef[0] = 0;
}

Polinom::Polinom(int orde){
    this->derajat = orde;
    this->koef = new int(this->derajat+1);
    for(int i= 0; i<=this->derajat; i++){
        setKoefAt(i, 0);
    }
}

Polinom::Polinom(const Polinom& other){
    this->derajat = other.derajat;
    this->koef = new int(this->derajat+1);
    for(int i= 0; i<=this->derajat; i++){
        setKoefAt(i, other.koef[i]);
    }
}

Polinom::~Polinom(){
    delete[] this->koef;
}

Polinom& Polinom::operator=(const Polinom& other){
    this->derajat = other.derajat;
    delete[] this->koef;
    this->koef = new int(this->derajat+1);
    for(int i= 0; i<=this->derajat; i++){
        setKoefAt(i, other.koef[i]);
    }
    return *this;
}

int Polinom::getKoefAt(int idx) const{
    return this->koef[idx];
}

int Polinom::getDerajat() const{
    return this->derajat;
}

void Polinom::setKoefAt(int idx, int val){
    this->koef[idx] = val;
}

void Polinom::setDerajat(int derajat){
    int *temp_cont = new int(this->derajat+1);
    for(int i= 0; i<=this->derajat; i++){
            temp_cont[i] = this->koef[i];
    }
    delete[] this->koef;
    this->koef = new int(derajat+1);
    for(int i= 0; i<=this->derajat; i++){
            this->koef[i] = temp_cont[i];
    }
    this->derajat = derajat;
}

void Polinom::input(){
    for(int i= 0; i<=this->derajat; i++){
        cin >> this->koef[i];
    }
}

void Polinom::printKoef(){
    for(int i= 0; i<=this->derajat; i++){
        cout << this->koef[i] << endl;
    }
}

int Polinom::substitute(int x){
    int result;
    for(int i= 0; i<=this->derajat; i++){
        result+= this->koef[i] * pow(x, i);
    }
    return result;
}

void Polinom::print(){
    bool all0 = true;
    for(int i= 0; i<=this->derajat; i++){
        if(this->koef[i] != 0){
            all0 = false;
            if(i == 0){
                cout << this->koef[i];
            }else if(this->koef[i] < 0){
                cout << this->koef[i] << "x^" << i;
            }else{
                cout << "+" << this->koef[i] << "x^" << i;
            }
        }
    }
    if(all0){
        cout << "0";
    }
    cout << endl;
}