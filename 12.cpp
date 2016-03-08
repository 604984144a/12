#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int a, b, c, i;
	for (i = 0; i<30; i++){
		a = rand() % 100;
		b = rand() % 100;
		c = rand() % 4;
		if (c == 0)
			cout << a << "+" << b << "=" << endl;
		else if (c == 1)
			cout << a << "-" << b << "=" << endl;
		else if (c == 2)
			cout << a << "*" << b << "=" << endl;
		else if (c == 3)
		{
			while (b == 0)
			{
				b = rand() % 100;
			}
			cout << a << "/" << b << "=" << endl;
		}
	}
	return 0;

}