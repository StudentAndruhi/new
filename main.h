#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <vector>
#include <fstream>

using namespace std;


class Position{
public:
    float latitude;
    float longtitude;
public:
    Position();
    float getLatitude();
    float getLongtitude();
    void setLatitude(float t_lat);
    void setLongtitude(float t_longt);
};

class Map{
    int *p;
    int x_max,y_max;
    float lat1;
    float lat2;
    float longt1;
    float longt2;
public:
    Map(int n, int m);
    void drawPoint(int x, int y, int color);
    void assosiate(float t_lat1, float t_longt1, float t_lat2, float t_longt2);
    void show();
    void save(char *fname);
    void Load(char *fname);
    float return_coord(int t);
};




class House{
    public:
    int hight;
    int width;
    int num_corners;
    Position p[4];
    int h;
public:
    void setHight(int t_hight);
    void setWidth(int t_width);
    House();
    void Draw(Map *m, int dist1, int dist2);
    void add_Corner(Position p);
};


