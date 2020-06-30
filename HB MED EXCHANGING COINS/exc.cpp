#include <iostream>
using namespace std;
#include<map>

map<unsigned int,unsigned int> m;
unsigned int coins(unsigned int n)
{
  if(n==0)
  return 0;

  if(m.find(n)!=m.end())
    return m[n];
  m.insert(make_pair(n,max(n,(coins(n/2)+coins(n/3)+coins(n/4)))));
  return m[n];
   
}
int main() {
     unsigned int n;
    cin>>n;
    cout<<coins(n);
	return 0;
}
