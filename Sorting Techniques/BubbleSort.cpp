#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[],int n)
{
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
      swapped=false;
      for(int j=0;j<n-i-1;j++)
      {
          if(a[j]>a[j+1])
          {
            swap(a[j],a[j+1]);
            swapped=true;
          }
      }
      if(!swapped) break;
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
    BubbleSort(a,n);
    cout<<"Array after sorted ="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}