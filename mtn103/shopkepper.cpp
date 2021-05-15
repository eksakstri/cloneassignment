#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    system("cls");
    int i,j,k,arr1 [4],arr2 [4],sum=0;
    string name[4];
    for (j=0;j<4;j++)
        arr1 [i]=(i+1)*10;
    cout<<"Enter name and quantity of items:";
    for (i=0;i<4;i++)
    {
            cin>>name [i]>>arr2 [i];
    }        
    for (k=0;k<4;k++)
        sum+=(arr1[k]*arr2[2]);
    system("cls");
    for (i=0;i<4;i++)
    {
            cout<<name [i]<<" - "<<arr2 [i]<<"\n";
    }
    cout<<"Grand total is : "<<sum;
    return 0;
}
