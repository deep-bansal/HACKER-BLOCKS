#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int count=0,i=1;
    while(count<n1)
    {
        if((3*i+2)%n2!=0)
        {
            cout<<3*i+2<<endl;
            count++;
        }
        i++;
    }


    }







