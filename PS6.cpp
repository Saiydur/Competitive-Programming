#include<bits/stdc++.h>
using namespace std;

int main()
{
    int line,input;
    cin>>line;
    int arr[line];

    for(int i=0;i<line;i++)
    {
        cin>>input;
        arr[i]=input;
    }


    for(int i=0;i<line;i++)
    {
        if(arr[i]>=10000 && arr[i]<=99999)
        {
            cout<<"Sum = "<<(arr[i]%10)+(arr[i]/10000)<<endl;
        }
    }
}
