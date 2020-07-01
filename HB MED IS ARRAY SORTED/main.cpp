#include <iostream>

using namespace std;
bool sortedarray(int* arr, int n)
{
    if(n==1)
    {
        return true;
    }
    if(arr[0]<arr[1] && sortedarray(arr,n-1))
    {
        return true;
    }

        return false;

}

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   if(sortedarray(arr,n))
   {
       cout<<"true"<<endl;
   }
   else
   {
       cout<<"false"<<endl;
   }
    return 0;
}
