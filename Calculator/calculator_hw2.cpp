#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b;
	char z;
	cout << "Input + - * / &:";
	cin >> z;
	switch (z){
		case '+':
		{
		c = a + b; 
		cout << c;
		break;
		}
			
		case '-':
		{	
		c = a - b;
		cout << c;
		break;
		}
	
		case '*':
		{
		c = a * b;
		cout << c;
		break;
		}
		
		case '/':
		{
		c = a / b;
		cout << c;
		break;
		}
		case '&':
		{
		c = sqrt(a+b);
		cout << c;
		break;		
		}
	}
}

