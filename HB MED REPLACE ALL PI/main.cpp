#include <iostream>

using namespace std;
void replacepi(string in,string out)
{
    if(in.length()==0)
    {
        cout<<out<<endl;
        return;
    }

    if(in.length()>2 && in[0]=='p' && in[1]=='i')
    {
        string osf=out+"3.14";
        string ros=in.substr(2);
         replacepi(ros,osf);
    }
    else
    {
        string osf=out+in[0];
        string ros=in.substr(1);
        replacepi(ros,osf);
    }
}

int main()
{

      int n;
      cin>>n;

      while(n>0)
      {
       string str;
       cin>>str;
       replacepi(str,"");
       n--;
      }



    return 0;
}
