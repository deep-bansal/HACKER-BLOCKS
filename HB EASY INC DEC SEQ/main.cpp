#include <iostream>
using namespace std;
void inc_decseq(int arr[1000], int n)
{
   int i=0;
   while(arr[i+1]<arr[i])
   {
       if(arr[i+1]>arr[i])
       {
           break;
       }
       else
       {
           i++;
       }
   }
   int j=i+1;
   bool incdec=true;
   if(j<n)
   {
       while (j<n-1)
       {
           if(arr[j+1]>arr[j])
           {
               j++;
           }
           else{
            incdec=false;
            break;
           }
       }
   }
   if(incdec)
   {
       cout<<"true"<<endl;
   }
   else
   {
       cout<<"false"<<endl;
   }
}

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    inc_decseq(arr,n);
    return 0;
}
