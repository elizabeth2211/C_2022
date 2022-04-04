//Imankalimova Elizaveta IFb-18-1 lecture_5
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;


int main()

{   /*1)Создайте текстовый массив с названиями цифр от 0 до 9 Пользователь вводит число и получает на экран его название.*/
    cout << "Task_1"<<"\n";
    int number;
    char array[10][6] = {
        "zero", 
        "one", 
        "two", 
        "three", 
        "four", 
        "five", 
        "six", 
        "seven", 
        "eight", 
        "nine"
        };
    
     cout << "Enter a number from 0 to 9: ";
     cin >> number;

        if (number > 9 or number < 0) {
            do{
                cout<< "Your number -  is incorrect!!! "<< "\n";
                cout << "Enter a new number from 0 to 9: ";
                cin >> number; 
            } while (number<0 or number>9);
            cout<< "Your number - " <<array[number]<<"\n"<< "\n"; 

        } else {
            cout<< "Your number - " <<array[number]<<"\n"<< "\n";   
        }
      
   
   
    /* 2) Пользователь вводит строку. Используя указатель на строку, сдвиньте каждую букву в строке на 1 (a → b, b→c …) 
    (каждый символ задается числом) длину строки можно получить функцией strlen() из библиотеки cstring.*/
   
    cout << "Task_2"<<"\n";
    int size;
    cout << "How many symbols will you enter?"<<"\n";
    cin>> size;
    char entered_string [size];
    cout << "Write something using the English alphabet or numbers (you only need to enter "<< size << " symbol) : "<<"\n";
    cin>> entered_string ;
  
  
    cout <<"\n"<< "Converted Text:  "<<"\n"; 
    for (auto i : entered_string){ 
        if(isalnum(i))  {     
            if(isdigit(i)){
                i=i+1;
                cout << i;
            } else{
                i=i+1;
                cout << i ;
            }
        } 
    }
   
    return 0;
}