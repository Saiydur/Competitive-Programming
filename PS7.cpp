#include <bits/stdc++.h>
using namespace std;
int main()
{

    int line;
    cin >> line;
    string s;
    cin.ignore();
    while(line--){
        getline(cin, s);
        int counts = 0;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i]) && isspace(s[i+1]))
                counts++;
        }
        cout << counts+1 << endl;
    }
    return 0;
}