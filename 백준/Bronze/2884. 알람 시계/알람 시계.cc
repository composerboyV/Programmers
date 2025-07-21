#include <iostream>
using namespace std;

int	main()
{
	int a = 0, b = 0;
	cin >> a;
	cin >> b;

	if (b >= 45) {
		b -= 45;
		cout<<a<<" ";
		cout<<b<<endl;
	}
	else {
		b += 15;
		if (a == 0)
			a = 23;
		else
			a -= 1;
		cout<<a<<" ";
		cout<<b<<endl;
	}
	return (0);	
}
