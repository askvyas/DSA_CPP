#include "iostream"
using namespace std;

int binary_search(int arr[], int key, int l, int h)
{  if(l>h)
{
  return -1;
}
 else{
    int mid=(h+l)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
       return  binary_search(arr,key,mid+1,h);
    }
    else
    {
             return   binary_search(arr,key,l,mid-1);

    } }
   


}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int key=8;

    int idx_k=binary_search(arr,key,0,9);
  
    cout<<idx_k<<endl;
    return 0;




}