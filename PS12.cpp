#include<bits/stdc++.h>
using namespace std;

int main()
{
    int line;
    cin>>line;
    int t = 0;
    int input[line];
    for(int i=0;i<line;i++)
    {
        cin>>input[i];
    }
    for(int i=0;i<line;i++){
        int t = input[i];
        int ans = 0;
        while(t>=5){
            ans = ans + t / 5;
            t /= 5;
        }
        cout<<ans<<endl;
    }
}
