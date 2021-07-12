#include<bits/stdc++.h>

using namespace std;
int odd_repeated_num(int* arr,int s)
{
    int res=arr[0];
    for(int i=1;i<s;i++)
    {
        res=arr[i]^res;
    }
    return res;
}

int main()
{
    int arr[5]={1,1,4,4,5};
    cout<<"Odd repeated number:"<<odd_repeated_num(arr,5)<<endl;
}
