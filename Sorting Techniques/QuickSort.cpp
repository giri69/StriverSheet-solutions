#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)
{
  int pivot=arr[high];
  int i=(low-1);
   
  for(int j=low;j<=high;j++)
  {

    if(arr[j]<pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
      
void quickSort(int arr[],int low,int high)
{

  if(low<high)
  {
     
    int pi=partition(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    cout<<"Array after sorting ="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}