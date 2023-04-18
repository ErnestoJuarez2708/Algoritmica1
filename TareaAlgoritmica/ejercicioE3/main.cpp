#include <iostream>
#include <math.h>

using namespace std;

int main() {
 int cases;
cin >> cases;

for(int i =0; i < cases; i++){
	long long student, fast, result=0;
	cin >> student;
	while(student--){
		cin >> fast;
		result = max(result,fast);
	}
	cout <<"Case " << i+1 <<": " << result <<endl; 
	
} 
 
	
	
	return 0;
}