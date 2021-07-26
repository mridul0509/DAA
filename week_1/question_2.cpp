#include<iostream>

using namespace std;

int count =0;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int f=0,l=n-1;
        while(f<=l)
        {
            int mid = f+((l-f)/2);
            count++;
            if(key==arr[mid]){
                cout<<"Present "<<count<<endl;
                break;
            }
            else if(key>arr[mid])
                f=mid+1;
            else
                l=mid-1;
        }
        if(f>l)
            cout<<"Not Present "<<count<<endl;
        t--;
    }
    return 0;
}
