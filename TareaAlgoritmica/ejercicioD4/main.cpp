#include <iostream>
using namespace std;

int main() {

	int cases, l, w, h; // lenght, width, height  
	cin >> cases;
	for(int i = 0; i < cases ; i++){
	 cin >> l >> w >> h;
	 if( l <= 20 && w <= 20 && h <=20 ){
		 cout << "Case "<< i + 1 << ": good" << endl;  
	 }else {
		cout << "Case "<< i + 1 << ": bad" << endl; 
	 }
	} 


	
	
	
	
	
return 0;	
}