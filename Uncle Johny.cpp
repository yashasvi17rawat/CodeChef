/* ...
    Uncle Johny
    by:Yashasvi Rawat
    ...*/

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n,k,p,temp;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        p=arr[k-1];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<j;k++)
            {
                if(arr[k]>arr[j])
                {temp=arr[j];
                 arr[j]=arr[k];
                 arr[k]=temp;

                }
            }
        }
        for(int m=0;m<n;m++)
            if(arr[m]==p)
            cout<<m+1<<endl;


    }
}
