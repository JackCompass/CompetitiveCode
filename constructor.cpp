#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
#include <iostream>
using namespace std;
class Box
{
    private :
    int l, b, h;
    public :
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    };
    Box(int len, int bre, int hei)
    {
        l = len;
        b = bre;
        h = hei;
    }
    Box(const Box &box)
    {
        l = box.l;
        b = box.b;
        h = box.h;
    };
    int get_length()
    {
        return l;
    }
    int get_breadth()
    {
        return b;
    }
    int get_height()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }
    bool operator <(const Box& box)
    {
        if (this->l < box.l)
            return true;
        else if ((this->b < box.b) && (this->l == box.l))
            return true;
        else if((this->h < box.h) && (this->b == box.b) && (this->l == box.l))
            return true;
        else 
             return false; 
    }
    friend ostream& operator<< (ostream& output, const Box& B)
    {
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }

};
