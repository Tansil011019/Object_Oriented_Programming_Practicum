#include <iostream>

using namespace std;

class Hewan {
	public:
		Hewan(string nm) { this->name = nm;} 
        ~Hewan(){
            cout << "Hewan mati " << name << endl;
        }
        virtual void print(){
			cout << "Hewan ini namanya " << this->name << endl;
		}
	protected:
		string name;
};

class Kucing : public Hewan {
	public:
		Kucing(string nm) : Hewan(nm) {}
        virtual ~Kucing(){
            cout << "Kucing mati " << Hewan::name << endl;
        }
};

class Anjing : public Hewan {
	public:
		Anjing(string nm) : Hewan(nm) {}
        ~Anjing(){
            cout << "Anjing mati " << Hewan::name << endl;
        }
		void print(){
			cout << "Anjing ini namanya " << this->name << endl;
		}
};

class KucingAnggora : public Kucing {
	public:
		KucingAnggora(string nm, string milik) : Kucing(nm) {pemilik = milik;}
		void print() {cout << "Kucing anggora ini namanya " << name << ". Pemiliknya adalah " << pemilik << endl;}
		~KucingAnggora(){
			cout << "Kucing anggora mati " << Hewan::name << endl;
		}
	private:
		string pemilik;
};

class AnjingBulldog : public Anjing {
	public:
		AnjingBulldog(string nm, string milik) : Anjing(nm) {pemilik = milik;}
		void print() {cout << "Anjing bulldog ini namanya " << name << ". Pemiliknya adalah " << pemilik << endl;}
		~AnjingBulldog(){
			cout << "Anjing bulldog mati " << Hewan::name << endl;
		}
	private:
		string pemilik;
};