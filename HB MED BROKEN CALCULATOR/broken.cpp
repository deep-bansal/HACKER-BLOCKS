#include <bits/stdc++.h> 
#include <iostream> 
using namespace std; 

void multiply(int* arr, int &n,int no)
{
	int carry = 0;
	for (int i = 0; i < n; ++i)
	{
		int product = arr[i]* no + carry;
		arr[i] = product%10;
		carry = product/10;
	}
	while(carry) // left out
	{
		arr[n] = carry%10;
		carry = carry/10;
		n++;
	}

}

void big_interger(int num)
{
	int*  arr = new int [10000]{0};
	arr[0] = 1;
	int n= 1;
	for (int i = 2; i <= num; ++i)
	{
		multiply(arr,n,i);
	}
	for (int i = n-1; i >= 0 ; --i)
	{
		cout<<arr[i];
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	big_interger(n);
	return 0;
}