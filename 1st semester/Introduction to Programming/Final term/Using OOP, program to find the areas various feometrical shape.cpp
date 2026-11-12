//Program to find areas of various geometrical shape
#include <iostream>

using namespace std;

class Shape //Declaring parent class
{
protected:
    float radius,AreaCircle,length,width,AreaRect,AreaTriangle,side,AreaSquare;
public:
      virtual void displayInfo (){}

};

class Circle:public Shape //Declaring child class which inherits from a class named Shape
{
public:
    float setCircleArea(float rad)
    {
        radius=rad;
        AreaCircle=3.1416*radius*radius;
        return AreaCircle;
    }
    void displayInfo()
    {
        cout<<"The area of Circle is= "<<AreaCircle<<" Square meter"<<endl<<endl;
        cout<<"Thank you!"<<endl;
    }

};

class Rectangle:public Shape //Declaring Rectangle class which inherits from a class named Shape
{
public:
    float setRectangleArea(float ln, float wd)
    {
        length=ln;
        width=wd;
        AreaRect=length*width;
        return AreaRect;

    }
    void displayInfo()
    {
        cout<<"The area of Rectangle is= "<<AreaRect<<" Square meter"<<endl<<endl;
        cout<<"Thank you!"<<endl;
    }
};
class Triangle:public Shape //Declaring Triangle class which inherits from a class named Shape
{
public:
    float setTriangleArea(float lnT, float wdT)
    {
        length=lnT;
        width=wdT;
        AreaTriangle=0.5*length*width;
        return AreaTriangle;
    }
    void displayInfo()
    {
        cout<<"The area of Triangle is= "<<AreaTriangle<<" Square meter"<<endl<<endl;
        cout<<"Thank you!"<<endl;
    }

} ;

class Square:public Shape //Declaring Square class which inherits from a class named Shape
{
public:
    float setSquareArea(float sd)
    {
        side=sd;
        AreaSquare=side*side;
        return AreaSquare;

    }
   void displayInfo()
    {
        cout<<"The area of Square is= "<<AreaSquare<<" Square meter"<<endl<<endl;
        cout<<"Thank you!"<<endl;
    }

};

int main()
{
    float rad,ln,wd,lnT,wdT,sd;
    int choice;

    cout<<"Welcome to our area calculation system created by Md. Imtiaz Habib!"<<endl<<endl;
    cout<<"choice 1 for Circle, choice 2 for Rectangle, choice 3 for Triangle, choice 4 for Square"<<endl<<endl;
    cout<<"Enter your choice"<<endl<<endl;
    cin>>choice;

    Circle obj1;
    Rectangle obj2;
    Triangle obj3;
    Square obj4;

    if(choice==1)
    {
    cout<<"Enter your radius"<<endl;
    cin>>rad;
    obj1.setCircleArea(rad);
    obj1.displayInfo();
    }
    else if(choice==2)
    {
    cout<<"Enter length and width"<<endl;
    cin>>ln;
    cin>>wd;
    obj2.setRectangleArea(ln,wd);
    obj2.displayInfo();
    }
    else if(choice==3)
    {
    cout<<"Enter length and width"<<endl;
    cin>>lnT;
    cin>>wdT;
    obj3.setTriangleArea(lnT,wdT);
    obj3.displayInfo();
    }
    else if(choice==4)
    {
    cout<<"Enter side"<<endl;
    cin>>sd;
    obj4.setSquareArea(sd);
    obj4.displayInfo();
    }
    else
    cout<<"You've entered an invalid choice"<<endl<<"sorry!"<<endl;
}
