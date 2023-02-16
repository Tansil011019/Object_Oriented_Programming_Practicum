#include <iostream>
#include "ArtistUser.h"
using namespace std;

int ArtistUser::num_of_artist = 0;

ArtistUser::ArtistUser(char * name): User(name){
    this->num_of_music_uploaded = 0;
    ArtistUser::num_of_artist++;
    this->uploaded_music_list = new char* [5000];
}

ArtistUser::ArtistUser(const ArtistUser& other): User(other.getName()){
    this->num_of_favourite_music = other.num_of_favourite_music;
    this->music_list = new char* [5000];
    for(int i = 0; i< other.num_of_favourite_music; i++){
        this->music_list[i] = new char[strlen(other.music_list[i])];
        strcpy(this->music_list[i], other.music_list[i]);
    }
    this->num_of_music_uploaded = other.num_of_music_uploaded;
    this->uploaded_music_list = new char* [5000];
    for(int i = 0; i< other.num_of_music_uploaded; i++){
        this->uploaded_music_list[i] = new char[strlen(other.uploaded_music_list[i])];
        strcpy(this->uploaded_music_list[i], other.uploaded_music_list[i]);
    }
    ArtistUser::num_of_artist++;
}

ArtistUser::~ArtistUser(){
    cout << "Artist user " << User::name << " deleted" << endl;
    User::n_user--;
}

void ArtistUser::uploadMusic(char * music){
    this->num_of_music_uploaded++;
    this->uploaded_music_list[this->num_of_music_uploaded - 1] = new char[strlen(music)];
    strcpy(this->uploaded_music_list[this->num_of_music_uploaded-1], music);
}

void ArtistUser::deleteUploadedMusic(char * music){
    if(this->num_of_music_uploaded > 0){
        bool found= false;
        int idx= -1;
        for(int i= 0; i<this->num_of_music_uploaded; i++){
            if(!strcmp(this->uploaded_music_list[i], music)){
                found = true;
                idx = i;
                break;
            }
        }
        if (found){
            this->num_of_music_uploaded--;
            for(int j = idx; j< this->num_of_music_uploaded; j++){
                strcpy(this->uploaded_music_list[j], this->uploaded_music_list[j+1]);
            }
        }
    }
}

void ArtistUser::viewUploadedMusicList() const{
    if(this->num_of_music_uploaded > 0){
        for(int i= 0; i< this->num_of_music_uploaded; i++){
            cout << i+1 << ". " << this->uploaded_music_list[i] << endl; 
        }
    }else{
        cout << "No music uploaded" << endl;
    }
}

int ArtistUser::getNumOfMusicUploaded() const{
    return this->num_of_music_uploaded;
}

int ArtistUser::getNumOfArtist(){
    return ArtistUser::num_of_artist;
}