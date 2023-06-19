// 7 Составить алгоритм находящий самое длинное слово
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text,maxword,temp;
    getline(cin, text);

    text += " ";
    while (text.find(" ") != string::npos and !text.empty()) {
        temp = text.substr(0, text.find(" "));
        if (temp.length() > maxword.length())
            maxword = temp;
        text.erase(0, text.find(" ")+1);
        cout << text << endl;
    }
    cout << maxword;
    return 0;
}
