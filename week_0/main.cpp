#include<iostream>
 using namespace std;
  int main()
  {
      unsigned int n,t;
      cin>>t;
      while(t>0)
      {
          cin>>n;
          unsigned int arr[n];
          for(unsigned int i=0;i<n;i++)
          {
              cin>>arr[i];
          }
          unsigned int searching_element;
          cin>>searching_element;
          int flag = 0;
          for(unsigned int i=0;i<n;i++)
          {
              if(arr[i]== searching_element){
                cout<<"Element found"<<endl;
                flag =1;
              }
          }
          if(flag == 0)
            cout<<"Element not found"<<endl;
          t--;
      }
      return 0;
  }
