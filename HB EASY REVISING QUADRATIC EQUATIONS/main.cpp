#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    int x,y;
    cin>>a>>b>>c;
    int F= (b*b)-(4*a*c);
    int D = pow(F, 0.5);
    if(D==0 && a!=0){
        cout<<"Real and Equal"<<endl;
    }
    if(D>0 && a!=0){
        cout<<"Real and Distinct"<<endl;
    }
    if (D<0 && a!=0) {
            cout<<"Imaginary"<<endl;
    }
    if (D>=0 && a!=0){
        x= (-b+D)/(2*a);
        y= (-b-D)/(2*a);
    cout<<y<<" "<<x;
    }



        return 0;
}
