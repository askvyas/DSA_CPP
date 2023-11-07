#include "iostream"
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int res[7];
    int r;
    cout<<"Enter no of positions for array rotation";
    cin>>r;

    int temp[r];
    for(int i=0;i<r;i++)
    {
        temp[i]=arr[i];
    }

    for(int j=0;j<7-r;j++)
    {
        res[j]=arr[j+r];
    }
    for(int k=7-r;k<7;k++)
    {
        arr[k]=temp[7-k];
    }
    cout<<"Rotated Array"<<endl;
    for(int j=0;j<7;j++)
    {
        cout<<res[j]<<endl;
    }
    cout<<res[0]<<endl;
    return 0;



}