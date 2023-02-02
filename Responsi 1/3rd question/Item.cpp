#include "Item.hpp"
using namespace std;

int Item::totalItems = 0;
int Item::totalRevenue = 0;

Item::Item():serialNum(totalItems+1){
    this->stock = 0;
    this->price = 0;
    this->sold = 0;
    this->totalItems++;
}

Item::Item(int stock, int price):serialNum(totalItems+1){
    this->stock = stock;
    this->price = price;
    this->sold= 0;
    this->totalItems++;
}

Item::Item(const Item& other):serialNum(other.totalItems+1){
    this->stock = other.stock;
    this->price = other.price;
    this->sold = other.sold;
    this->totalItems++;
}

Item::~Item(){

}

int Item::getSerialNum() const{
    return this->serialNum;
}

int Item::getSold() const{
    return this->sold;
}

int Item::getPrice() const{
    return this->price;
}

void Item::addStock(int addedStock){
    this->stock += addedStock;
}

void Item::sell(int sellStock){
    int init_stock = this->stock;
    int after_stock= init_stock-sellStock;
    if(after_stock >= 0){
        this->sold += sellStock;
        this->stock = after_stock;
        this->totalRevenue+=sellStock*getPrice();
    }else{
        this->sold += init_stock;
        this->stock = 0;
        this->totalRevenue+=init_stock*getPrice();
    }
}

void Item::setPrice(int newPrice){
    this->price = newPrice;
}