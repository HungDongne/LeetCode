#include <bits/stdc++.h>
using namespace std;
void changeDirection(int &directionX, int &directionY, char c, int &currentX, int &currentY)
{
    if (c == 'L')
    {
        if (directionX == 0)
        {
            if (directionY == 1)
            {
                directionX = -1;
                directionY = 0;
            }
            else
            {
                directionX = 1;
                directionY = 0;
            }
        }
        else
        {
            if (directionX == 1)
            {
                directionX = 0;
                directionY = 1;
            }
            else
            {
                directionX = 0;
                directionY = -1;
            }
        }
    }
    else if (c == 'R')
    {
        if (directionX == 0)
        {
            if (directionY == 1)
            {
                directionX = 1;
                directionY = 0;
            }
            else
            {
                directionX = -1;
                directionY = 0;
            }
        }
        else
        {
            if (directionX == 1)
            {
                directionX = 0;
                directionY = -1;
            }
            else
            {
                directionX = 0;
                directionY = 1;
            }
        }
    }
    else
    {
        currentX += directionX;
        currentY += directionY;
    }
}
bool isRobotBounded(string instructions)
{
    int directionX = 0, directionY = 1;
    int currentX = 0, currentY = 0;
    for (auto i = 0; i < 100; i++)
    {
        for (auto c : instructions)
        {
            changeDirection(directionX, directionY, c, currentX, currentY);
        }
        //cout << currentX << " " << currentY << " " << directionX << " " << directionY << endl;
        if (currentX == 0 && currentY == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cout << isRobotBounded("RLLGGLRGLGLLLGRLRLRLRRRRLRLGRLLLGGL");
}