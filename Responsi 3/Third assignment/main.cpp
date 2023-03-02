#include "RestoranRamen.hpp"

int main(){
    RestoranRamen r;
    r.tambahOrder(1, 2000);
    r.tambahOrder(1, 5000);
    r.cekTotal(1);
    r.tambahOrder(5, 2000);
    r.tambahOrder(3, 5000);
    r.totalMeja();
    r.cetakMeja();
    r.tutupOrder(3);
    r.totalMeja();
    r.cetakMeja();
}