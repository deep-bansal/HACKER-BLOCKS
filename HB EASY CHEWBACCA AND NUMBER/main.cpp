#include <iostream>

using namespace std;

int main()
{
    char arr[50];
    cin>>arr;

    int i=0;
    if(arr[i]=='9')
    {
        i++;
    }
    for(;arr[i]!='\0';i++)
    {
        int digit=arr[i]-'0';
        if(digit>=5)
        {
            digit=9-digit;
            arr[i]=digit+'0';
        }

    }
    cout<<arr;
    return 0;
}
