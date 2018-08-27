/*
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

/* 
* File:   main.c
* Author: William Arthur McDonald
*
* Created on August 25, 2018, 9:43 PM
*/

#include <stdio.h>
#include <string.h>


double circle(int r);
double square(int h, int w);
double triangle(int b, int h);


/*
* 
*/
void main()
{
    int x, y;
    double area;
    char shape[10];

    printf("What shape would you like to find the area of?\n");
    scanf("%s", &shape);

    if (strcmp(shape, "circle") == 0)
    {
        printf("Enter radius: ");
        scanf("%d", &x);
        area = circle(x);
    }
    else if (strcmp(shape, "rectangle") == 0 || strcmp(shape, "square") == 0)
    {
        printf("Enter height: ");
        scanf("%d", &x);
        printf("Enter width: ");
        scanf("%d", &y);
        area = square(x,y);
    }
    else if (strcmp(shape, "triangle") == 0)
    {
        printf("Enter base: ");
        scanf("%d", &x);
        printf("Enter height: ");
        scanf("%d", &y);
        area = triangle(x,y);
    }
    else
    {
        printf("Sorry, I don't recognize that shape.\n");
        return;
    }

    printf ("The area of %s is %f\n", shape, area);
}

double circle(int r)
{
    return 3.14159 * r *r;
}

double square(int h, int w)
{
    return h * w;
}          

double triangle(int b, int h)
{
    return 0.5 * b * h;
}
