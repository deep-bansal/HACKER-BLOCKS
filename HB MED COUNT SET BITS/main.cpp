#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++ ){
            int j;
    cin>>j;
    int count=0;

    while(j>0){
        int result=(j&1);
        j=j>>1;
        count=count+result;
    }
    cout<<count<<endl;


    }



    return 0;
}
