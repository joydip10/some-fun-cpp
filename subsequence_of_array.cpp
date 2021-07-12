#include<bits/stdc++.h>

using namespace std;


int main()
{
    int arr[5]={1,2,3,4,5};
    int opsize=pow(2,5);
    for(int counter=1;counter<opsize;counter++)
    {
        for(int i =0;i<5;i++)
        {
            if(counter & (1<<i))
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}
