#include <iostream>
#include "Kompleks.hpp"
using namespace std;

int Kompleks::n_kompleks= 0;

Kompleks::Kompleks(){
	this->real= 0;
	this->imaginer= 0;
	this->n_kompleks++;
}

Kompleks::Kompleks(int real, int imaginer){
	this->real = real;
	this->imaginer = imaginer;
	this->n_kompleks++;
}

int Kompleks::GetReal() const{
	return this->real;
}

int Kompleks::GetImaginer() const{
	return this->imaginer;
}

void Kompleks::SetReal(int real){
	this->real = real;
}

void Kompleks::SetImaginer(int imaginer){
	this->imaginer = imaginer;
}

Kompleks operator+ (const Kompleks& first, const Kompleks& second){
	int real= first.GetReal() + second.GetReal();
	int imaginer = first.GetImaginer() + second.GetImaginer();
	Kompleks num(real, imaginer);
	return num;
}

Kompleks operator- (const Kompleks& first, const Kompleks& second){
	int real= first.GetReal() - second.GetReal();
	int imaginer = first.GetImaginer() - second.GetImaginer();
	Kompleks num(real, imaginer);
	return num;
}

Kompleks operator* (const Kompleks& first, const Kompleks& second){
	int real= (first.GetReal() * second.GetReal()) - (first.GetImaginer() * second.GetImaginer());
	int imaginer = (first.GetImaginer() * second.GetReal()) + (second.GetImaginer() * first.GetReal());
	Kompleks num(real, imaginer);
	return num;
}

Kompleks operator* (const Kompleks& first, const int mul){
	int real= first.GetReal() * mul;
	int imaginer = first.GetImaginer() * mul;
	Kompleks num(real, imaginer);
	return num;
}


Kompleks operator* (const int mul, const Kompleks& first){
	int real= first.GetReal() * mul;
	int imaginer = first.GetImaginer() * mul;
	Kompleks num(real, imaginer);
	return num;
}

int Kompleks::CountKompleksInstance(){
	return Kompleks::n_kompleks;
}

void Kompleks::Print(){
	if(this->imaginer >= 0){
		cout<< this->real << '+' << this->imaginer << 'i' <<endl;
	}else{
		cout<< this->real << this->imaginer << 'i' <<endl;
	}
}
