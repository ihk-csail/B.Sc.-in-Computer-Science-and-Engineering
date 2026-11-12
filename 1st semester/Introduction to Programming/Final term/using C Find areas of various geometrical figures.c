
#include <stdio.h>
#include <stdlib.h>

void FindingVariusGeometricFigure(float c, float d)
{
    int Choice;
    float Circle, rectangle, triangle, square;
    printf("Enter your Choice\n");
    printf("Choice 1=Circle\nChoice 2=rectangle\nChoice 3=triangle\nChoice 4=square\n");
    scanf("%d",&Choice);
    if(Choice==1)
    {
        printf("Enter the value of your radius\n");
        scanf("%f", &c);
        Circle= 3.1426*c*c;
        printf("The area of a Circle is =%f\n",Circle);
    }
    else if (Choice==2)
    {
        printf("Enter the value of length and wide\n");
        scanf("%f%f", &c,&d);
        rectangle= c*d;
        printf("The area of a rectangle is=%f",rectangle);
    }
    else if (Choice==3)
    {
        printf("Enter the value of length and wide\n");
        scanf("%f%f", &c,&d);
        triangle= 0.5*c*d;
        printf("The area of a triangle is=%f\n",triangle);
    }
    else if (Choice==4)
    {
        printf("Enter the value of side\n");
        scanf("%f", &c);
        square= c*c;
        printf("The area of a square is=%f\n",square);
    }
    else printf("This is not a valid Option\n");

}
int main()
{
    float l,m;
    FindingVariusGeometricFigure(l,m);
}
