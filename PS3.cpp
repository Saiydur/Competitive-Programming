#include <iostream>
using namespace std;

int main()
{
    for(int i=1000;i>0;i--)
    {
        cout<<i<<"\t";
        if(i%6==1)
        {
            cout<<endl;
        }
    }
    return 0;
}
