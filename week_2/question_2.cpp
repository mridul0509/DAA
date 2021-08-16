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
        for (int i = n-1; i >= 0; i--)
        {
            int j = 0, k = i - 1;
            while (j < k)
            {
                if (arr[i] == arr[j] + arr[k])
                {
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
        t--;
    }
    return 0;
}
