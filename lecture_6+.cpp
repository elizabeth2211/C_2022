//Imankalimova Elizaveta IFb-18-1 lecture_7
 #include <math.h>
#include <iostream>
using namespace std;
 
class Bucket // имя класса
{
    private: // спецификатор доступа private
    
    public: // спецификатор доступа public
        int volume,        // полный объем
            used,          // используемый объем
            entered=0;     //наливаемый объем
            Bucket (int a, int b) 
        {
            volume=a;
            used=b;
        }
        int fill(int entered); //функция
        int flush();           //функция
}; // конец объявления класса 
 


int Bucket::fill(int entered) // (функция - наполнить 'entered' литрами жидкости)
{
    int m;
    used=0;
    if(entered>(volume-used)) {
        used=volume;
        m=entered-volume;
    } else{
        used=entered;
        m=0;
    }
         
    return m;     
}



int Bucket::flush() // (функция - опустошить весь объем ковша)
{
    used=0;

    return 0; 
}




int main()
{   
    //     Bucket objBucket; // объявление объекта класса Bucket
    
    //     cout << "BUCKET CLASS!\n\n";
    //     cout << "Full Bucket volume: "; cin >> objBucket.volume;
    //     cout<< "\n"<<"\n";
    //     objBucket.entered=0;
    //     objBucket.used=0;
            
    //     objBucket.fill(); // вызов функции класса fill
    //     objBucket.flush();// вызов функции класса flush
    Bucket test_01(12, 3);
    cout << "1) " << test_01.volume << ", " << test_01.used << "\n";

    test_01.fill(14);
    cout << "2) " << test_01.used << ", " << test_01.fill(14) << "\n";
    
    test_01.flush();
    test_01.fill(8);
    cout << "3) " << test_01.used << ", " << test_01.fill(8) << "\n";

}