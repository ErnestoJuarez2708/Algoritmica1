#include <iostream>
using namespace std;

int main() {
	
	int periods;
	float quality, year, result =0;
	
    cin >> periods;
	while(periods --){
	
           cin >> quality >> year;
		   
		   result += quality * year; 
		    
            
         
	}
     cout << result << endl;

return 0;
}