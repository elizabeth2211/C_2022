
#include <iostream>
#include <math.h>

using namespace std; //ПРОСТРАНСТВО ИМЕН

// 1 Циклически перебрать числа от 0 до 100 Если число делится на 3 вывести его на экран.
int main()
{
  cout <<"exercise_1"<<endl;
 int a=0;
  for (int a=0; a<=100; a++)
    {
      if (a/3)   
       cout << "a = " << a << endl; // 25

      else continue;
      a++;
    }

// 2 Используя другой тип цикла, перебрать числа от 1 до 1000 с шагом 4 Найти сумму всех чисел, которые делятся на 7 без остатка.


    int size_=1000;
    int arr[size_];
    int sum=0;
    int M;
   
    for (int i=0; i<size_; i++)
    {
        arr[i]=i;
    }
    
    for (int q = 0; q < size_; q+=4)
    {
        M=arr[q];
        int Y=M%7;
        
        if (Y==0)
        {
           sum = sum + M;
        }
    }
 cout <<endl<<"exercise_2"<<endl;
 cout<< "Sum of numbers = "<< sum;
 return 0;
}
