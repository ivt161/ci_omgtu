#include <stdio.h>
#include <conio.h>

void main()
{
    printf("Enter number: \n");

    int number;
    scanf("%d",&number);

    number%=8;
    printf("\n\n");
    switch (number)
    {
        case 0: printf("Zero"); break;
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
    }

    getch();

}
