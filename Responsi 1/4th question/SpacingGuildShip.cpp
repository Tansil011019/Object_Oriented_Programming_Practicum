#include "SpacingGuildShip.hpp"
#include <iostream>
#include <math.h>
using namespace std;

int SpacingGuildShip::producedShips = 0;
float SpacingGuildShip::totalGuildTravel = 0;

SpacingGuildShip::SpacingGuildShip():guildNavigatorCount(3), serialNum(producedShips+1), maxPassengerCap(50){
    this->passengerCount = 0;
    this->operatingGuildNavigator = 3;
    this->spiceStock = 50;
    this->producedShips++;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock):guildNavigatorCount(guildNavigatorCount), serialNum(producedShips+1), maxPassengerCap(maxPassengerCap){
    this->passengerCount = 0;
    this->operatingGuildNavigator = guildNavigatorCount;
    this->spiceStock = spiceStock;
    this->producedShips++;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip& ship):guildNavigatorCount(ship.guildNavigatorCount), serialNum(ship.producedShips+1), maxPassengerCap(ship.maxPassengerCap){
    this->passengerCount = ship.passengerCount;
    this->operatingGuildNavigator = ship.guildNavigatorCount;
    this->spiceStock = ship.spiceStock;
    this->producedShips++;
}

SpacingGuildShip::~SpacingGuildShip(){

}

int SpacingGuildShip::getShipSerialNum() const{
    return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const{
    return this->passengerCount;
}

void SpacingGuildShip::travel(float distance){
    if(operatingGuildNavigator != 0){
        this->totalGuildTravel += distance/(pow(E, 2) * operatingGuildNavigator);
        this->operatingGuildNavigator-=1;
    }
}

void SpacingGuildShip::boarding(int addedPassengers){
    int total_passengers = getPassengerCount() + addedPassengers;
    if(total_passengers > this->maxPassengerCap){
        this->passengerCount = this->maxPassengerCap;
    }else{
        this->passengerCount = total_passengers;
    }
}

void SpacingGuildShip::dropOff(int droppedPassengers){
    int total_passengers = getPassengerCount() - droppedPassengers;
    if(total_passengers < 0){
        this->passengerCount = 0;
    }else{
        this->passengerCount = total_passengers;
    }
}

void SpacingGuildShip::refreshNavigator(int n){
    int allowed = this->spiceStock * GUILD_NAVIGATOR_SPICE_DOSE;
    if (n * GUILD_NAVIGATOR_SPICE_DOSE > allowed){
        this->spiceStock -= allowed;
    }else{
        this->spiceStock -= n * GUILD_NAVIGATOR_SPICE_DOSE;
    }
}

void SpacingGuildShip::transitToArrakis(int addedSpice){
    this->spiceStock += addedSpice;
}