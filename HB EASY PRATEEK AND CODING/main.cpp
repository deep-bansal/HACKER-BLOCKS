#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int n;
   cin>>n;
   stack<int>st;
   for(int i=0;i<n;i++)
   {
       int num;
       cin>>num;
        if(st.empty() && num==1)
        {
            cout<<"No Code"<<endl;
            continue;
        }

        if(num==2)
        {
            int cost;
            cin>>cost;
            st.push(cost);
        }

         if(num==1)
        {
            cout<<st.top()<<endl;
            st.pop();
        }

   }


    return 0;
}
