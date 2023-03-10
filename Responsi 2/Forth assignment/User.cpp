#include <iostream>
#include "User.h"
using namespace std;

int User::n_user= 0;

User::User(char * name){
    this->name = new char[strlen(name)];
    strcpy(this->name, name);
    User::n_user++;
    this->num_of_favourite_music= 0;
    this->music_list = new char* [5000];
}

User::User(const User& other){
    this->name = new char[strlen(other.getName())];
    strcpy(this->name, other.getName());
    this->num_of_favourite_music = other.num_of_favourite_music;
    this->music_list = new char* [5000];
    for(int i = 0; i< other.num_of_favourite_music; i++){
        this->music_list[i] = new char[strlen(other.music_list[i])];
        strcpy(this->music_list[i], other.music_list[i]);
    }
    User::n_user++;
}

User::~User(){
    cout << "User " << name << " deleted" << endl;;
    delete[] name;
    delete[] music_list;
    User::n_user--;
}

void User::addFavouriteMusic(char* music){
    this->num_of_favourite_music++;
    this->music_list[this->num_of_favourite_music-1] = new char[strlen(music)];
    strcpy(this->music_list[this->num_of_favourite_music - 1], music);    
}

void User::deleteFavouriteMusic(char* music){
    if(this->num_of_favourite_music > 0){
        bool found= false;
        int idx= -1;
        for(int i= 0; i<this->num_of_favourite_music; i++){
            if(!strcmp(this->music_list[i], music)){
                found = true;
                idx = i;
                break;
            }
        }
        if (found && idx){
            this->num_of_favourite_music--;
            for(int j = idx; j< this->num_of_favourite_music; j++){
                strcpy(this->music_list[j], this->music_list[j+1]);
            }
        }
    }
}

void User::setName(char* name){
    strcpy(this->name, name);
}

char* User::getName() const{
    return this->name; 
}

int User::getNumOfFavouriteMusic() const{
    return this->num_of_favourite_music;
}

void User::viewMusicList() const{
    if(this->num_of_favourite_music > 0){
        for(int i= 0; i< num_of_favourite_music; i++){
            cout << i+1 << ". " << this->music_list[i] << endl; 
        }
    }else{
        cout << "No music in your favourite list" << endl;
    }
}

int User::getNumOfUser(){
    return User::n_user;
}