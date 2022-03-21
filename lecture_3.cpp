//Imankalimova Elizaveta IFb-18-1 lecture_3
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string> 
using namespace std;


// 1) Получить от пользователя два числа А, В (В>A). Пройти циклом от А до В, вывести
// значение каждого числа умноженного на 3 в файл «output»

int main()

{   cout << "task_1"<<endl;
    // o-запись в файл
    ofstream fout ("output.txt"); 
    
    int a, b, z; //Инициализация
    cout << "Enter the number A = ";
    cin>> a;
    cout << "Enter the number B = ";
    cin>> b;
   
    do {
            if (b>a) {
            break;
            } else{
                if (b<a) {
                    cout << "Your number is too small." <<endl;
                    cout <<"Enter the number B (greater than A) = ";
                    cin>> b;
                } else {
                    if (b=a) {
                        cout << "Your numbers don't have to be equal to each other." <<endl;
                        cout << "Enter the number B (greater than A) = ";
                        cin>> b;
                    } 
                }
            } 
    
   
    }
    while (b<=a);

    
    cout << "All numbers from A = "<<a<< " to B = "<<b<< ", raised to the third power (increments of one) are in the file output.txt"<< endl;

    for (z = a; z <= b; z++) {
        
        fout <<z*3 << endl;;
    }
      
    fout.close();

    cout<< "  "<<endl; 

    // 2) Используя цикл прочитать каждое число из файла «output» и вывести на экран в виде:
    // «n. Число», где n - порядковый номер числа в файле
     
     cout<< "task_2"<<endl; 
     cout<< "Reading from the file output.txt:\n"; 
        
    int k = 1, m;
   
    ifstream file;
    file.open("output.txt");
        
    while (1) {
      file >> m;

        if (file.eof()) {
            break;
        }
      cout << k << "." << m << "\n";
      k++;

    }

    file.close();
    
    
   
    return 0;
}