#include <iostream>

using namespace std;

int	main()
{
	int a = 0, b = 0, c = 0, d = 0;
	cin >> a;
	cin >> b;
	d = a * b;
	while (b >= 10) {
		c = b % 10;
		cout<<a * c <<endl;
		b /= 10;
	}
	cout<<a * b<<endl;
	cout<<d<<endl;
	return (0);	
}