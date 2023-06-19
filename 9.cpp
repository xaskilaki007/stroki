//9 задание: По введенному номеру дня недели вывести его название,
//используя оператор множественного выбора. Нумерация дней
//недели начинается с 1 – понедельник, 2 — вторник и т.
#include <iostream>
#include <string>
#include <array>
using namespace std;
int main(){
    int numb;
    string day;
    std::cin>>numb;
    if (numb>31)
        std::cout<<"Monday";
    else{
        while(numb>7){
            numb-=7;
        }
            switch(numb){
                case 1:{
                    std::cout<<"Monday";
                    break;
                }
                case 2:{
                    std::cout<<"Tuesday";
                        break;
                }
                case 3:{
                    std::cout<<"Wednesday";
                    break;
                }
                case 4:{
                    std::cout<<"Thursday";
                    break;
                }
                case 5:{
                    std::cout<<"Friday";
                    break;
                }
                case 6:{
                    std::cout<<"Saturday";
                    break;
                }
                case 7:{
                    std::cout<<"Sunday";
                    break;
                }
            }
    }
    return 0;
}
