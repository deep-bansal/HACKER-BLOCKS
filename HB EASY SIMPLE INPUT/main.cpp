#include <iostream>

using namespace std;

int main()
{
  int n,sum=0;
  while(scanf("%d",&n)!=EOF)
  {
      sum=sum+n;
      if(sum<0)
      {
        break;
      }
      else
        {
             cout<<n<<endl;
        }
  }
    return 0;
}
