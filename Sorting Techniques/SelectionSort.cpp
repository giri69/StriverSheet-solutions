#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int a[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            if(min!=i)
            {
                swap(a[min],a[i]);
            }

        }
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
    SelectionSort(a,n);
    cout<<"Array after sorted ="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}