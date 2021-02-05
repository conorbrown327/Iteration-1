#include <iostream>
#include <fstream>
#include <string>
#include <time.h> // used for seeding rand()
#include <cstdlib>
#include <cmath>

#include "point2.h"


Point2::Point2()
{
    xPos = 0;
    yPos = 0;
}

Point2::Point2(float x, float y)
{
    xPos = x;
    yPos = y;
}

void Point2::Print()
{
    std::cout << "(" << xPos << ", " << yPos << ")" << std::endl;
}

float Point2::DistanceBetween(Point2 p)
{
    float distance = sqrt(((xPos - p.xPos) * (xPos - p.xPos)) + 
                     ((yPos - p.yPos) * (yPos - p.yPos)));
    return fabs(distance);
}

int Point2::Quadrant()
{
    int r = 0;

    if((xPos > 0) && (yPos >= 0))
    {
        r = 1;
    }
    else if((xPos <= 0) && (yPos > 0))
    {
        r = 2;
    }
    else if((xPos < 0) && (yPos <= 0))
    {
        r = 3;
    }
    else if((xPos >= 0) && (yPos < 0))
    {
        r = 4;
    }

    return r;
}