#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        int j,osum=0,esum=0,r;
        cin>>j;
        int num=j;
        while(num>0)
        {
         r=num%10;
         if(r%2!=0)
         {
             osum=osum+r;
         }
         else
         {
             esum=esum+r;
         }
         num=num/10;
        }
        if(esum%4==0 || osum%3==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }



    return 0;
}
