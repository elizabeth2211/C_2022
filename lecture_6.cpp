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
        int fill();//функция
        int flush();       //функция
}; // конец объявления класса 
 


int Bucket::fill() // (функция - наполнить 'entered' литрами жидкости)
{
    do
    {
        cout << "How many liters do you want to pour?   ";    cin >> entered; cout<<"\n";
        used= used+entered;
            if (used<=volume)
            {
                cout << "Used - "<<used<< " out of " <<volume<<". \n";
            } else
            {
                cout << "The bucket is full. \n";
            }   
    } while (entered<=(volume-used+entered));
   
    return 0;     
}



int Bucket::flush() // (функция - опустошить весь объем ковша)
{
    int m;
    cout<<"Do you want to flush the bucket? (yes-1/no-0) "; cin >> m; cout<<"\n";
    if (m==1)
    {
        used=0;
        cout << "The bucket is empty! "<<used<<"\n";
        cout << "Run the program again if you want to continue. ";
    } 
    if (m==0)
    {
        cout << "There are "<<volume<<" liters in your bucket.\n";
        cout << "You didn't pour "<< entered<<" liters into the bucket (bucket is full). ";
    } 
    return 0; 
}




int main()
{   
    Bucket objBucket; // объявление объекта класса Bucket
   
    cout << "BUCKET CLASS!\n\n";
    cout << "Full Bucket volume: "; cin >> objBucket.volume;
    cout<< "\n"<<"\n";
    objBucket.entered=0;
    objBucket.used=0;
        
    objBucket.fill(); // вызов функции класса fill
    objBucket.flush();// вызов функции класса flush
}