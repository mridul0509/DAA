#include<iostream>
#include<math.h>

using namespace std;

int jumps=0;

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
        int step = sqrt(n);
        int temp =0;
        while(arr[min(step,n)-1]<key)
        {
            jumps++;
            temp = step;
            step += step;
            if(step>=n)
                break;
        }
        while(arr[temp]<key)
        {
            jumps++;
            temp++;
            if(temp==min(n,step))
                break;
        }
        if(arr[temp]==key)
        {
            cout<<"Present "<<jumps+1<<endl;
        }
        else
        {
            cout<<"Not Present "<<jumps<<endl;
        }
        t--;
    }
    return 0;
}
