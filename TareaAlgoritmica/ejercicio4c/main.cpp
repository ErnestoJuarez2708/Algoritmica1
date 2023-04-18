#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int chicken, people, result;
	
	cin >> people >> chicken;
	result = abs(chicken - people);
	if(people < chicken){
	if(result > 1){ 
	cout << "Dr. Chaz will have " << result << " pieces of chicken left over!";
	}else {
	cout << "Dr. Chaz will have " << result << " piece of chicken left over!";	
	}
}else {
	if(result > 1){ 
	cout << "Dr. Chaz needs " << result  << " more pieces of chicken!";
	}else {
	cout << "Dr. Chaz needs " << result << " more piece of chicken!" ;	
	}
}
	
	

}