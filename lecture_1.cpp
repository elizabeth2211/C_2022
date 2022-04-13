//Imankalimova Elizaveta IFb-18-1 lecture_1
#include <stdio.h>
#include <math.h>

// типы данных:
// int - целые числа
// float - числа с плавающей токой
// char - символ

int main()
{
    int r, S, l;
    char area[4] = {'D', 'O', 'N', 'E'};
    
    printf("Calculate the area, length of the circle.\n");
    printf("Enter the radius - ");
    scanf("%d", &r);// считываем целое значение и записываем в переменную r
    S=pow(r, 2)*M_PI;// Формула для расчета площади круга
    printf("Area of the circle -  %d\n", S);//вывод значения площади круга
    l=2*r*M_PI;// Формула для расчета длины окруности 
   
    printf("Length of the circle -  %d\n", l);//вывод значения длины окружности
     for(int i = 0; i < 10; i = i + 1)
     printf("%c\t",area[i]);
     printf("\n");



    return 0;
}

