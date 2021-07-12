#include<bits/stdc++.h>

using namespace std;
int string_appearances(string str, string str2,int m,int n)
{
    if((m==0 && n==0) || n==0)
    {
        return 1;
    }
    if(m==0) return 0;
    if(str[m-1]==str2[n-1]) return string_appearances(str,str2,m-1,n-1)+string_appearances(str,str2,m-1,n);
    else return string_appearances(str,str2,m-1,n);
}

int main()
{
    string a = "GeeksforGeeks";
    string b = "Gks";

    cout << string_appearances(a, b, a.size(), b.size()) << endl;
    return 0;
}
