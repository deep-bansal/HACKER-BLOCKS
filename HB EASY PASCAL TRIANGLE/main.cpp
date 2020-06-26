#include<iostream>
using namespace std ;


int main() {
	int n ;
	cin >> n ;
	for(int i=0 ;i<n ; i++){
		for(int sp=0 ; sp< n-i ;sp++ ){
			cout << "  ";
		}
		int val=1 ;
		for(int j=0 ; j<=i ;j++){
			cout << val << "   ";
			val = val*(i-j)/(j+1) ;
		}
		cout << endl ;
	}
	return 0;
}
