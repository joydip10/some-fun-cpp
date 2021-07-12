#include<bits/stdc++.h>
#define MAX_SIZE 26

using namespace std;

string longest_subsequences(char* str, int k)
{
    string ch;
    int counter[MAX_SIZE]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        counter[str[i]-'a']++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(counter[str[i]-'a']>=k)
        {
            ch=ch+str[i];
        }
    }
    return ch;
}

int main()
{
    string smt="geeksforgeeks";
    char cht[100];
    strcpy(cht,smt.c_str());
    string str=longest_subsequences(cht,2);
    cout<<str<<endl;
    return 0;
}
