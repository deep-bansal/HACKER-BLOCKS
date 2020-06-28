#include <iostream>
///also called divide and conquer sort
using namespace std;
void towerofhanoi(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1,src,helper,dest);
    cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;

    towerofhanoi(n-1,helper,dest,src);
}

int main()
{
    int n;
    cin>>n;
    towerofhanoi(n,'A','B','C');
    return 0;
}
