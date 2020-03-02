#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a,b,c;
	char z;
	cin >> z;
	cin >> a >> b;
	switch (z){
		case '1':
			c = a + b; 
			cout << c;
			break;			
		case '2':		
			c = a - b;
			cout << c;
			break;	
		case '3':	
			c = a * b;
			cout << c;
			break;	
		case '4':		
			c = a / b;
			cout << c;
			break;
		case '5':		
			c = sqrt(a) + sqrt(b);
			cout << c;
			break;		
		default:
			cout << "error";
			break;
	}
}

