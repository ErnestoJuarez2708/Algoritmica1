#include <iostream>
#include <string>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while(cases--){
	 string linea;
	 cin >> linea;
	
	 int count = 0;
	 int previous = 0;
        
        for (int i = 0; i < linea.size(); ++i)
        {
            if (linea[i] == 'O')
            {
                ++previous;
                count += previous;
            }
            else
                previous = 0;
        }
        
        cout << count << '\n';
		
	
		
		
	}
	
	

}