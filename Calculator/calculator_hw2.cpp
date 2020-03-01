#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a,b,c;
	cin >> a >> b;
	char z;
	cout << "Input 1->+ 2->- 3->* 4->/ 5->sqrt:";
	cin >> z;
	switch (z){
		case '1':
		{
		c = a + b; 
		cout << c;
		break;
		}
			
		case '2':
		{	
		c = a - b;
		cout << c;
		break;
		}
	
		case '3':
		{
		c = a * b;
		cout << c;
		break;
		}
		
		case '4':
		{
		c = a / b;
		cout << c;
		break;
		}
		case '5':
		{
		a = sqrt(a);
		b = sqrt(b);
		cout << a << " "<< b;
		break;		
		}
	}
}

