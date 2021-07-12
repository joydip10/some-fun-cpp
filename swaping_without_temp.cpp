#include<bits/stdc++.h>

using namespace std;

void swapp(int* a,int* b)
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}

int main()
{
    int a=10;
    int b=5;
    cout<<"Before Swapping:"<<a<<" & "<<b<<endl;
    swapp(&a,&b);
    cout<<"After Swapping:"<<a<<" & "<<b<<endl;
    return 0;
}
