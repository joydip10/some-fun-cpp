#include<bits/stdc++.h>


using namespace std;

bool is_subsequences(char* str, char* test,int m,int n)
{
    if(n==0) return true;
    if(m==0) return false;
    if(str[m-1]==test[n-1]) return is_subsequences(str,test,m-1,n-1);
    else if(str[m-1]!=test[n-1]) return is_subsequences(str,test,m-1,n);
}

int main()
{
    string geeks= "geeksforgeeks";
    char ch[100];
    strcpy(ch,geeks.c_str());
    string test="geeksfeeks";
    char testt[100];
    strcpy(testt,test.c_str());
    if(is_subsequences(ch,testt,13,10)==true) cout<<"Its a substring\n";
    else cout<<"No its not a substring\n";
    return 0;
}
