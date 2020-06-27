#include <bits/stdc++.h>

using namespace std;
long long int ans[1000000];
void stockspan(long long int* arr,long long int n)
{
    stack<long long int>st;
    st.push(0);
    ans[0]=1;
    for(int i=1;i<n;i++)
    {
       // if(arr[st.top()]<=arr[i])
       while(!st.empty() && arr[i]>=arr[st.top()])
        {
            //ans[i]=1+ans[i-1];
            //st.push(i);
            st.pop();
        }
        if(!st.empty())
        {
            ans[i]=(i-st.top());
        }
        else
        {
            ans[i]=i+1;
        }
        st.push(i);
	}

       // if(arr[i]<arr[st.top()]){

         // st.push(i);
        //}
 for(int i=0;i<n;i++)
   {
       cout<<ans[i]<<" ";
   }
   cout<<"END";

}
int main()
{
   long long int n;
   cin>>n;
   long long int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   stockspan(arr,n);
    return 0;
}
