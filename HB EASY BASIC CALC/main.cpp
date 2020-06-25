#include <iostream>

using namespace std;

int main()
{
    char ch;
    int a,b,result;
    cin>>ch;
    while(ch != 'x' && ch != 'X'){
        if(ch=='/')
        {
            cin>>a>>b;
            result=a/b;
            cout<<result<<endl;
        }
        else if(ch=='*')
        {
            cin>>a>>b;
            result=a*b;
            cout<<result<<endl;
        }
        else if(ch=='+')
        {
            cin>>a>>b;
            result=a+b;
            cout<<result<<endl;
        }
        else if(ch=='%')
        {
            cin>>a>>b;
            result=a%b;
            cout<<result<<endl;
        }
        else if(ch=='-')
        {
            cin>>a>>b;
            result=a-b;
            cout<<result<<endl;
        }
      else
        {
            cout<<"Invalid operation. Try again."<<endl;
        }
         cin>>ch;

    }
    return 0;
}
