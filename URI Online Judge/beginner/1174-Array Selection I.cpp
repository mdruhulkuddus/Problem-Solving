#include<bits/stdc++.h>
using namespace std;
int main()
{
    double arr[100];
    for(int i = 0; i<100; i++)
    {
        cin>>arr[i];

    }
    for(int i = 0; i<100; i++)
    {
        if(arr[i]<=10)

            cout<<setprecision(1)<<fixed<<"A["<< i<<"] = "<< arr[i]<<"\n";
    }
    return 0;
}



