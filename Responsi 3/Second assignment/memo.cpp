#include <iostream>
#include "memo.h"
using namespace std;

Memo::Memo(){
    this->pesan = "";
    this->untuk = "";
}

Memo::Memo(string pesan, string untuk){
    if(pesan.size() > this->PESAN_MAX){
        PesanKepanjanganException error;
        throw error;
    }else{
        this->pesan = pesan;
        this->untuk = untuk;
    }
}

Memo& Memo::operator=(Memo& obj){
    this->pesan = obj.getPesan();
    this->untuk = obj.getUntuk();
}

string Memo::getPesan(){
    return this->pesan;
}

string Memo::getUntuk(){
    return this->untuk;
}