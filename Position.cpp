#include "main.h"

Position::Position(){
    latitude = 0;
    longtitude = 0;
}

void Position::setLatitude(float t_lat){
    latitude = t_lat;
}

void Position::setLongtitude(float t_longt){
    longtitude = t_longt;
}

float Position::getLatitude(){
    return latitude;
}

float Position::getLongtitude(){
    return longtitude;
}
