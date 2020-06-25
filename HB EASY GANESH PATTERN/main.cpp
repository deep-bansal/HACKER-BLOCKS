#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //for 1st component
    cout<<"*";
    for(int space=1; space<=(n-3)/2; space=space+1){
        cout<<" ";}

        for(int star1=1; star1<=(n+1)/2; star1=star1+1){
            cout<<"*";}
            cout<<endl;
            //for 2nd components
          for(int row=1; row<=(n-3)/2;row=row+1){
            cout<<"*";
            for(int space=1; space<=(n-3)/2; space=space+1){
        cout<<" ";}
        cout<<"*";
        cout<<endl;
                      }
                      //for 3rd components
          for(int star2=1;star2<=n; star2=star2+1){
            cout<<"*";
          }
          cout<<endl;
          //for 4th components
          for(int row2=1; row2<=(n-3)/2; row2=row2+1){
            for (int space2=1; space2<=(n-1)/2; space2=space2+1){
                cout<<" ";
            }
            cout<<"*";
             for(int space=1; space<=(n-3)/2; space=space+1){
            cout<<" ";}
            cout<<"*";
            cout<<endl;

          }
          //for 5 component
          for(int star=1; star<=(n+1)/2; star=star+1){
            cout<<"*";
            }
            for(int space=1; space<=(n-3)/2; space=space+1){
                cout<<" ";}
                cout<<"*";

    return 0;
}
