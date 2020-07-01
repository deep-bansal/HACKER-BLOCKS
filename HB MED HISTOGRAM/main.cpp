#include <bits/stdc++.h>

using namespace std;

void histogram(long long int* arr,long long int& maxarea,long long int n)
{
    stack<int>st;
    st.push(0);
    long long int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[st.top()])
        {
          while(!st.empty() && arr[st.top()]>arr[i] )
           {
           long long int bar=arr[st.top()];
            st.pop();

            if(st.empty())
            {
               long long int area=bar*(i);
                if(area>maxarea)
                {
                    maxarea=area;
                }
            }
            else
            {
              long long int area=bar*(i-st.top()-1);
               if(area>maxarea)
                {
                    maxarea=area;
                }

            }
           }
        }
            st.push(i);
    }

    long long int idx=i;
    while(!st.empty())
    {
    	long long int bar=arr[st.top()];
    	st.pop();
    	if(st.empty())
    	{
    		long long int area=bar*(idx);
    		if(area>maxarea)
    		{
    			maxarea=area;
    		}
    	}
    	else
    	{
    		long long int area=bar*(i-st.top()-1);
    		if(area>maxarea)
    		{
    			maxarea=area;
    		}
    	}
    }

}

int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
   long long int maxarea=0;
   histogram(arr,maxarea,n);
   cout<<maxarea<<endl;
    return 0;
}
