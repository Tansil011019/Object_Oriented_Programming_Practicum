#include "RestoranRamen.hpp"

void RestoranRamen::tambahOrder(int n, int p){
    if(this->daftarMeja.find(n) == this->daftarMeja.end()){
        this->daftarMeja.insert(pair<int, int> (n, p));
    }else{
        this->daftarMeja[n] += p;
    }
}

int RestoranRamen::tutupOrder(int n){
    int temp = this->daftarMeja[n];
    this->daftarMeja.erase(n);
    return temp;
}

int RestoranRamen::cekTotal(int n){
    return this->daftarMeja[n];
}

int RestoranRamen::totalMeja(){
    return this->daftarMeja.size();
}

void RestoranRamen::cetakMeja(){
    if(this->totalMeja() == 0){
        cout << "Restoran kosong" << endl;
    }else{
        for(auto i = this->daftarMeja.begin(); i != this->daftarMeja.end(); i++){
            cout << "Meja " << i->first << " = " << i->second << endl;
        }
    }
}