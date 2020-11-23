
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
class Box
{
private:
    int l, b, h;

public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLenght()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }

    friend bool operator<(Box &A, Box &B)
    {
        if ((A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)))
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    friend ostream &operator<<(ostream &output, const Box &B)
    {
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};
