#include<bits/stdc++.h>
using namespace std;
void InsertionSort (int a[],int n)
{
    int temp=0;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
         a[j+1]=temp;
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
    InsertionSort(a,n);
    cout<<"Array after sorted ="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}