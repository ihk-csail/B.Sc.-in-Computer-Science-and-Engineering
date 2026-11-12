#include <stdio.h>
#include <stdlib.h>

void DeterminingTheAreaOfDifferentGeometricalFigures(float x, float y)
{
    int Option;
    float Circle, rectangle, triangle, square;
    printf("Enter your Option\n");
    printf("Option 1=Circle\nOption 2=rectangle\nOption 3=triangle\nOption 4=square\n");
    scanf("%d",&Option);
    if(Option==1)
    {
        printf("Enter the value of your radius\n");
        scanf("%f", &x);
        Circle= 3.1426*x*x;
        printf("The area of a Circle is =%f\n",Circle);
    }
    else if (Option==2)
    {
        printf("Enter the value of length and wide\n");
        scanf("%f%f", &x,&y);
        rectangle= x*y;
        printf("The area of a rectangle is=%f",rectangle);
    }
    else if (Option==3)
    {
        printf("Enter the value of length and wide\n");
        scanf("%f%f", &x,&y);
        triangle= 0.5*x*y;
        printf("The area of a triangle is=%f\n",triangle);
    }
    else if (Option==4)
    {
        printf("Enter the value of side\n");
        scanf("%f", &x);
        square= x*x;
        printf("The area of a square is=%f\n",square);
    }
    else printf("This is not a valid Option\n");

}
int main()
{
    float m,n;
    DeterminingTheAreaOfDifferentGeometricalFigures(m,n);
}
