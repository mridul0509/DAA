#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count=0;
        for (int i = n-1; i >= 0; i--)
        {
            int j = 0, k = i - 1;
            while (j < k)
            {
                if (arr[i] == arr[j] + arr[k])
                {
                    count = 1;
                    cout << j+1 << "," << k+1 << "," << i+1 << endl;
                    j++;
                    k--;
                }
                else if (arr[j] + arr[k] > arr[i])
                    k--;
                else
                    j++;
            }
        }
        if(count == 0)
            cout << "No sequence found" << endl;
        t--;
    }
    return 0;
}
