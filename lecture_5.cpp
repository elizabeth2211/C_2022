//Imankalimova Elizaveta IFb-18-1 lecture_5
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

//прототипы функций
double SquaredSum(double x, double y);
void Sort(int Array_s[10]);


int main(void)
{      
 /* 1) Напишите функцию SquaredSum(), которая принимает два дробных числа и
    возвращает квадрат их суммы
    cout << SquaredSum(12, 6) <<"\n"; // 324
    cout << SquaredSum(12, -6) <<"\n"; // 36 */

    cout << "Task_1"<<"\n";
    double x, y;
       
    cout << "Enter the first fractional number: "<<"\n";
    cin >> x;
    cout << "Enter the second fractional number: "<<"\n";
    cin >> y;

    cout<<"The square of the sum of the numbers a and b = "<< SquaredSum(x, y)<<"\n"<<"\n"<<"\n"; 
   

 /* 2) Напишите функцию Sort(), которая принимает массив из 10 чисел и 
    cортирует их по убыванию
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    Sort(a);
    // 12 9 8 7 6 5 4 3 2 1 */
    cout << "Task_2"<<"\n";
    int Array[10], i;
       
    cout << "Entering ten array elements..."<<"\n";
    for (int i = 0; i < 10; ++i)
    {
        cout << "Enter the " << i+1 << " element of the array: ";
        cin >> Array[i];

        cin.sync();
    }
    cout << "Initial array    " ;
    for (int i = 0; i < 10; ++i)
    {
        printf(" %d", Array[i]);
    }
    cout << "\n";
    
    
    cout << "Converted array  ";
    Sort(Array);
    for (int i = 0; i < 10; ++i)
    {
      printf(" %d", Array[i]);
    }
  return 0;
}


//функции:
double SquaredSum(double x, double y) 
{   //квадрат суммы x и y: 
    return pow((x+y),2);
}

void Sort(int Array_s[10]) 
{
    //сортировка по убыванию:
    for(int i = 1; i < 10; ++i)
    {
        for(int r = 0; r < 10-i; r++)
        {
            if(Array_s[r] < Array_s[r+1])
            {
                int temp = Array_s[r];
                Array_s[r] = Array_s[r+1];
                Array_s[r+1] = temp;
            }
        }
    }
   
}