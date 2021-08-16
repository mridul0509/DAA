#include<iostream>

using namespace std;

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
        int count=0;
        cin>>key;
        if(arr[0] == key)
        {
            cout<<"Found at 0 index"<<endl;
        }
        else
        {
            int i=1;
            while(i<n && arr[i]<key)
            {
                i=i*2;
            }
            int f=i/2,l=min(i,n-1);
            while(f<=l)
            {
                int mid = f+((l-f)/2);
                count++;
                if(key==arr[mid]){
                    cout<<"Present "<<count<<" INDEX :- "<<mid<<endl;
                    break;
                }
                else if(key>arr[mid])
                    f=mid+1;
                else
                    l=mid-1;
            }
            if(f>l)
                cout<<"Not Present "<<count<<endl;
        }
        t--;
    }
    return 0;
}
