#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int k;
    std::getline(std::cin,text);
    std::cin>>k;
    k-=1;
    text.erase(k,1);
    cout<<text<<endl;
    return 0;
}
