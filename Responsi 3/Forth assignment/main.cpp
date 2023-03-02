#include "sekretaris.h"
#include <iostream>
using namespace std;

Sekretaris::Sekretaris() {
    this->energi = ENERGI_MAX;
    this->kertas = KERTAS_DEFAULT;
    this->tinta = TINTA_DEFAULT;
    this->memoLength = 0;
    this->memo = new Memo[5000];
};

Sekretaris::Sekretaris(int kertas, int tinta) {
    this->energi = ENERGI_MAX;
    this->kertas = kertas;
    this->tinta = tinta;
    this->memoLength = 0;
    this->memo = new Memo[5000];
};

Sekretaris::~Sekretaris() {
    delete[] this->memo;
}

void Sekretaris::buatMemo(string pesan, string untuk) {
    try {
        Memo m (pesan, untuk);
        pakaiKertas();
        pakaiEnergi();
        pakaiTinta(pesan.length());
        this->memo[this->memoLength] = m;
        this->memoLength++;
        cout << "Memo [" << this->memoLength << "] untuk " << untuk << " berhasil dibuat" << endl;
    }
    catch (KertasHabisException e) {
        cout << e.what();
        cout << ", segera isi kertas" << endl;
    }
    catch (TintaKurangException e) {
        cout << e.what();
        cout << ", segera isi tinta" << endl;
        batalPakaiEnergi();
        batalPakaiKertas();
    }
    catch (EnergiHabisException e) {
        cout << e.what();
        cout << ", segera istirahat" << endl;
        batalPakaiKertas();
    }
    catch (PesanKepanjanganException e) {
        cout << e.what();
        cout << ", perpendek pesannya" << endl;
    }
}

void Sekretaris::pakaiKertas() {
    if (this->kertas == 0) {
        KertasHabisException e;
        throw e;
    } else {
        this->kertas--;
    }
}

void Sekretaris::pakaiTinta(int num) {
    if (this->tinta - num < 0) {
        TintaKurangException e;
        throw e;
    } else {
        this->tinta -= num;
    }
}

void Sekretaris::pakaiEnergi() {
    if(this->energi == 0) {
        EnergiHabisException e;
        throw e;
    } else {
        this->energi--;
    }
}

void Sekretaris::batalPakaiKertas() {
    this->kertas++;
}

void Sekretaris::batalPakaiTinta(int num) {
    this->tinta += num;
}

void Sekretaris::batalPakaiEnergi() {
    this->energi++;
}

void Sekretaris::isiTinta(int num) {
    this->tinta += num;
}

void Sekretaris::isiKertas(int num) {
    this->kertas += num;
}

void Sekretaris::istirahat() {
    this->energi = ENERGI_MAX;
}

void Sekretaris::printStatus() {
    cout << "Status" << endl;
    cout << "  Energi : " << this->energi << endl;
    cout << "  Tinta : " << this->tinta << endl;
    cout << "  Kertas : " << this->kertas << endl;
    cout << "  Memo : " << this->memoLength << endl;
    for (int i = 0; i < this->memoLength; i++) {
        cout << "    Memo [" << i + 1 << "]" << endl;
        cout << "      Pesan : " << this->memo[i].getPesan() << endl;
        cout << "      Untuk : " << this->memo[i].getUntuk() << endl;
    }
}