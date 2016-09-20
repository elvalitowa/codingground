#include <stdio.h>

void main()
{
    int a=0,
        b=3,
        c=2;
    if (a==3)
    { printf("значение переменной a равно трем. \n");}
  if (b>0 && (c%a==0))
  {printf("значение переменной b положительно. значение переменной с кратно %d. \n",a);}
    else {printf("значение переменной b меньше либо равно нулю или значение переменной с не кратно %d. \n",a);}
    if (b%10==0) {printf("число %d кратно 10 .\n");}
    else if (b%2==0) {printf("число %d кратно 2 .\n", b);}
    else {printf("значение числа b не кратно 2 и 10 .\n");}
    int place=1;
    switch(place) {
        case 1:
        printf("первое место! \n");
        
        case 2:
        printf("второе место ! \n");
        break;
        case 3:
        printf("третье место! \n");
        break;
        default:
        printf("вы не заняли призового места .\n");
    }
    }
    


