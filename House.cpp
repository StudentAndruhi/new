#include "main.h"

House::House()
{
    num_corners = 0;
    hight = 0;
    width = 0;
    for(int i = 0; i<4; i++)
    {
        p[i].setLatitude(0);
        p[i].setLongtitude(0);

    }

}

void House::Draw(Map *p, int dist1, int dist2)
{
    int i,j;
    for(i=0; i<hight; i++)
        for(j=0; j<width; j++)
            p->drawPoint(dist2+j,dist1+i,1);




}

void House::add_Corner(Position t_p)
{
    p[num_corners] = t_p;
    num_corners++;
}

void House::setHight(int t_hight)
{
    hight = t_hight;
}

void House::setWidth(int t_width)
{
    width = t_width;
}
