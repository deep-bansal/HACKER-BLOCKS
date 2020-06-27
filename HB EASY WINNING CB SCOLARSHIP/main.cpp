#include<iostream>
using namespace std;
int scolarstudents(int n,int m,int x,int y)
{
    int students=0;
    while(n!=0)
    {
        if(m<x)
        {
            m+=y;
            n--;
        }
        else
        {
            students++;
            m-=x;
            n--;
        }


    }
    return students;
}
int main()
{
   int n,m,x,y;
   cin>>n>>m>>x>>y;
   cout<<scolarstudents(n,m,x,y);

}
