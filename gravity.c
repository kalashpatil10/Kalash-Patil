#include<stdio.h>
#include<conio.h>
#define G 6.67e-11
void main()
{
    double F,r,M1,M2;
    //clrscr();
    printf("Enter the mass of object M1 and M2");
    scanf("%lf%lf",&M1,&M2);
    printf("Enter distance between objects");
    scanf("%lf",&r);
    F=G*M1*M2/(r*r);
    printf("Gravitational force F = %lf\n",F);
    getch();
}
