#include "BurnableBarrel.hpp"

BurnableBarrel::BurnableBarrel():Burnable(), Damageable(){

}

BurnableBarrel::BurnableBarrel(int health):Damageable(health), Burnable(){

}

void BurnableBarrel::takeDamage(int damage, string elmt){
    if(!this->isDestroyed()){
        if(elmt == "fire"){
            this->burn();
        }
        if(elmt == "water"){
            this->watered();
        }
        if(this->isBurned()){
            this->Damageable::takeDamage(this->multiplier* damage);
        }else{
            this->Damageable::takeDamage(damage);
        }
    }
}