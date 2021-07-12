#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    char ch[20];
    int len;
    for(len=0;ch[len]!='\0';len++);

    int a[26]={0};
    int A[26]={0};

    cin>>str;
    strcpy(ch,str.c_str());
    for(int i=0;i<len;i++)
    {
        if(ch[i]>'A' && ch[i]<'Z'){
            int num=int(ch[i]);
            int pos=num-65;
            A[pos]++;
        }
        else if(ch[i]>'a' && ch[i]<'z'){
            int num=int(ch[i]);
            int pos=num-97;
            a[pos]++;
        }
    }
    for(int i =0;i<26;i++)
    {
        if(a[i]>=1){
            char ch=(char)(i+97);
            cout<<ch<<":"<<a[i]<<endl;
        }
        if(A[i]>=1){
            char ch=(char)(i+65);
            cout<<ch<<":"<<A[i]<<endl;
        }
    }
}
