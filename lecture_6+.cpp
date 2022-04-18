//Imankalimova Elizaveta IFb-18-1 lecture_6+
#include <math.h>
#include <iostream>
using namespace std;
 
class Bucket // имя класса
{
    private: // спецификатор доступа private
    
    public: // спецификатор доступа public
        int volume=0,        // полный объем
            used=0,          // используемый объем
            entered=0;     //наливаемый объем
            Bucket (int a, int b) 
        {
            volume=a;
            used=b;
        }
        int fill(int entered); //функция
        int flush();           //функция
}; // конец объявления класса 



int Bucket::flush() // (функция - опустошить весь объем ковша)
{
    used=0;
    return 0; 
}




int Bucket::fill(int entered) // (функция - наполнить 'entered' литрами жидкости)
{
  int m=volume-used;
  int remain=0;
  if (entered<=m)
    {  
        used=entered;     
    } 
    else
   {
       used=volume;
       remain=entered-m;
    }

   return  remain;
}

int main()
{   Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n";

    int a=test_01.fill(14);
    cout << "2) " << test_01.used << ", " << a << "\n";
    
    test_01.flush();
    int b=test_01.fill(8);
    cout << "3) " << test_01.used << ", " << b << "\n";

}
