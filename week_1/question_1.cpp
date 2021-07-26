#include <iostream>

using namespace std;

int main()
{
    unsigned int t;
    cin>>t;
    while(t>0)
    {
        unsigned int n,i,key;
        cin>>n;
        unsigned int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        for(i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                cout<<"Present "<<i+1<<endl;
                break;
            }
        }
        if(i>=n)
            cout<<"Not Present "<<i<<endl;
        t--;
    }
    return 0;
}
