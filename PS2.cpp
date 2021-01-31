#include <iostream>
#include<string>
using namespace std;

int main()
{
    int T;
    string n;
    cin>>T;

    for(int i=0;i<T;i++)
    {
        cin>>n;
        int length=n.length();
        if(n.at(length-1)%2==0 && length<=100)
        {
            cout<<"even"<<endl;
        }
        else if(n.at(length-1)%2!=0 && length<=100)
        {
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
