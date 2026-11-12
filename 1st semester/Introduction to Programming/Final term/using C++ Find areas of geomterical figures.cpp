//program to find the areas of various geometrical figure
#include <iostream>

using namespace std;

int main()
{
    int Choice;
    float Circle, Rectangle, Triangle, Square, radius, length, width, side;
    cout<<"Press 1 for Circle, Press 2 for Rectangle, Press 3 for Triangle and Press 4 for Square"<<endl;
    cout<<"Enter your Choice"<<endl;
    cin>>Choice;
    if(Choice==1)
    {
        cout<<"Enter the value of radius"<<endl;
        cin>>radius;
        Circle=3.1416*radius*radius;
        cout<<"The area of Circle: "<<Circle<<endl;
    }
    else if(Choice==2)
    {
        cout<<"Enter the value of length and width"<<endl;
        cin>>length;
        cin>>width;
        Rectangle=length*width;
        cout<<"The area of Rectangle: "<<Rectangle<<endl;
    }
    else if(Choice==3)
    {
        cout<<"Enter the value length and width"<<endl;
        cin>>length;
        cin>>width;
        Triangle=0.5*length*width;
        cout<<"The area of Triangle is = "<<Triangle<<endl;
    }
    else if(Choice==4)
    {
        cout<<"Enter the value of side"<<endl;
        cin>>side;
        Square=side*side;
        cout<<"The area of Square: "<<Square<<endl;
   }
   else
   {
    cout<<"This is not a valid option"<<endl;
   }
}
