#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10]={8,5,3,6,4,0,7,9,1,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<n;i++)
    {
        res=res^arr[i];
        if(res==0)
        {
            cout<<"Duplicates available"<<endl;
            break;
        }
        res=arr[i];
    }

    return 0;
}
