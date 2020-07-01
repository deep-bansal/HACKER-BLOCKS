#include <iostream>

using namespace std;

int main()
{
    int testcases;
    cin>>testcases;
    int c1,c2,c3,c4,n,m;
    int rick[1005],cab[1005];
    for(int i=0; i<testcases; i++)
    {
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
        for(int i=0; i<n;i++)
        {
            cin>>rick[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>cab[i];
        }
        int rickcost=0;
        for(int i=0;i<n;i++)
        {
            rickcost=rickcost+min(c1*rick[i],c2);
        }
        rickcost=min(rickcost,c3);

         int cabcost=0;
        for(int i=0;i<m;i++)
        {
            cabcost=cabcost+min(c1*cab[i],c2);
        }
        cabcost=min(cabcost,c3);

        int result=min((rickcost+cabcost),c4);
        cout<<result<<endl;
    }

    return 0;
}
