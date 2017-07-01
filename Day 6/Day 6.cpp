#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void odd_index(string s)
    {
    for(int i=0;i<s.length();i++)
        {
        if(i%2!=0)
            cout<<s[i];
    }
    cout<<" ";
}
void even_index(string s)
    {
    for(int i=0;i<s.length();i++)
        {
        if(i%2==0)
            cout<<s[i];
    }
    cout<<" ";
}
int main() {
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
        {
        cin>>s;
        even_index(s);
        odd_index(s);
        cout<<endl;
    }
    return 0;
}
