#include<bits/stdc++.h>

using namespace std;

int missing_value(int* arr,int* arrr,int s,int z)
{
    int res=arr[0];
    for(int i=1;i<s;i++)
    {
        res=res^arr[i];
    }
    for(int i=0;i<z;i++)
    {
        res=res^arrr[i];
    }
    return res;
}

int main()
{
    int arr[4]={1,2,3,4};
    int arrr[5]={1,2,3,4,5};
    cout<<"Missing number: "<<missing_value(arr,arrr,4,5)<<endl;
    return 0;
}
