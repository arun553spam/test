#include <iostream>
#include <string>

using namespace std;

int main(void){
	string foobar  = "foobar";
	int i = 0;
	int foobarCount = foobar.size(); 
	while (i < foobarCount/2){
		char temp = foobar[i];
		foobar[i] = foobar[foobarCount - i - 1];
		foobar[foobarCount - i - 1] = temp;
		i++;	
	}	
	cout << "The reversed string is " << foobar << endl;
	return 0;
}


