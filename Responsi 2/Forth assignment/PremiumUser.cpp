#include <iostream>
#include "PremiumUser.h"
using namespace std;

PremiumUser::PremiumUser(char* name):User(name){
    this->active = true;
    this->num_of_music_downloaded = 0;
}

PremiumUser::PremiumUser(const PremiumUser& other):User(other.name){
    this->num_of_favourite_music = other.num_of_favourite_music;
    this->music_list = new char* [5000];
    for(int i = 0; i< other.num_of_favourite_music; i++){
        this->music_list[i] = new char[strlen(other.music_list[i])];
        strcpy(this->music_list[i], other.music_list[i]);
    }
    this->num_of_music_downloaded = other.num_of_music_downloaded;
    this->active = other.active;
    // cout << "Premium User Copied" << endl;
}

PremiumUser::~PremiumUser(){
    // cout << "Premium User " << User::name << " deleted" << endl;
}

void PremiumUser::downloadMusic(char* music){
    if(this->active){
        cout << "Music Downloaded: " << music << endl;
        this->num_of_music_downloaded++;
    }else{
        cout << "Activate premium account to download music" << endl;
    }
}

void PremiumUser::inactivatePremium(){
    this->active = false;
}

void PremiumUser::activatePremium(){
    this->active = true;
}

int PremiumUser::getNumOfMusicDownloaded() const{
    return this->num_of_music_downloaded;   
}

bool PremiumUser::getPremiumStatus() const{
    return this->active;
}