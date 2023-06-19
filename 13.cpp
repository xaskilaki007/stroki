// 13 Составить алгоритм, исключающий все слова "плохо из текста"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string text,maxword="",temp;
    getline(std::cin, text);

    while (text.find("ploho")!=string::npos)
        text.replace(text.find("ploho"), 5, "");

    cout << text << endl;
    return 0;
}
