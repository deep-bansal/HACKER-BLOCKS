#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n; i>0; i--){
        int num;
        cin>>num;
        int p=1;
        int ans=0;
        while (num>0){
            int r=num%10;
            ans=ans+(r*p);
            p=p*2;
            num=num/10;

        }
        cout<<ans<<endl;



    }
    return 0;
}
