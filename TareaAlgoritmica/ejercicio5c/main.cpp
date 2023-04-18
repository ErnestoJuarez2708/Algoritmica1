#include <iostream>
#include <math.h>
using namespace std;

int main() {

  int g, s, c, sum; // gold, silver, cooper
 

  cin >> g >> s >> c;
 
  g = g*3; // Se multiplica por su poder
  s = s*2;

  sum = g + s + c;
  
  if (sum > 1){
    if (sum > 7){
      cout << "Province";
    }else if (sum > 4){
      cout << "Duchy";
    }else{
      cout << "Estate";
	}
    cout << " or ";
  }

  if (sum > 5){
    cout << "Gold" << endl;
  }else if (sum > 2){
    cout << "Silver" << endl;
  }else{ 
    cout << "Copper" << endl;
  }
  return 0;
	
}