#include <iostream>

using namespace std;

int main() {
	int cases;
    for(int i=0;cin>>cases,cases!=0;i++){
        int a,result = 0;
        while(cases--){
            cin>>a;
            if(a){
                result++;
            }else{
                result--;
			}
			}
			 cout<<"Case "<< i + 1 <<": "<< result <<endl;
        }
     
    

	return 0;
}