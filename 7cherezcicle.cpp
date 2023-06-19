#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text,maxword = "",temp;
    getline(cin,text);

    text += " ";
    int cnt = 0,maxcnt = 0,oldspace = -1;
    for(int i = 0; i < text.length();i++)
    {
        if(text[i] == ' ')
        {
            if (cnt > maxcnt)
            {
                maxword = text.substr(oldspace+1,cnt);
                maxcnt = cnt;
            }
            cnt = 0;
            oldspace = i;
        }
        else
            cnt++;
//            cout << maxword << endl;
    }


    cout << maxword << maxcnt;
    return 0;
}
