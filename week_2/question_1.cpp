#include <iostream>
#include<vector>

using namespace std;
int count = 0;

void keySearch( int arr[], int f, int l, int key)
{
	if (f > l)
		return;
	int mid = f + (l - f) / 2;
	if (arr[mid] == key)
	{
		count++;
		keySearch(arr, f, mid - 1, key);
		keySearch(arr, mid + 1, l, key);
	}
	else if (arr[mid] < key)
		keySearch(arr, mid + 1, l, key);
	else
		keySearch(arr, f, mid - 1, key);
}

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
        cin >> key;
        keySearch(arr, 0, n-1, key);
        if(count == 0)
            cout<<"Key not found"<<endl;
        else
            cout<<key<<" : "<<count<<endl;
        count = 0;
        t--;
    }
    return 0;
}
