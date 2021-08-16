#include <iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        int count=0;
        cin >> key;
        map<int,int> m;
        for(int i = 0;i<n;i++)
            m.insert(make_pair(arr[i],i));
        for(int i=0;i<n;i++)
        {
            if(m.find(key+arr[i]) != m.end())
                count++;
        }
        cout<<count <<endl;
        t--;
    }
}
