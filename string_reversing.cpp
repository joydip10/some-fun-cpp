#include<bits/stdc++.h>

using namespace std;
void reverse_string(string& str)
{
    int len=str.size();
    for(int i=0;i<len/2;i++)
    {
        swap(str[i],str[len-i-1]);
    }
}
void reverse_char_string(char* str)
{
    int i;
    for(i=0;str[i]!='\0';i++);
    int len =i;
    for(int i=0;i<len/2;i++)
    {
        swap(str[i],str[len-i-1]);
    }
}
int main()
{
    string str="kola";
    cout<<"Before reversing:";
    cout<<str<<endl;
    reverse_string(str);
    cout<<"After reversing:";
    cout<<str<<endl;

    cout<<endl<<endl;

    char ch[10]="kola";
    cout<<"Before reversing character string:";
    cout<<ch<<endl;
    reverse_char_string(ch);
    cout<<"After reversing character string:";
    cout<<ch<<endl;

    cout<<endl<<endl;

    string string1="kola";
    cout<<"Before reversing:";
    cout<<string1<<endl;
    cout<<"After using built in reverse method:";
    reverse(string1.begin(),string1.end());
    cout<<string1<<endl;
}
