#include <iostream>
using namespace std;

int	main()
{
	int a = 0, b = 0;
	cin >> a;
	cin >> b;

	if (a <= 0 && b <= 0)
		cout<<"3"<<endl;
	else if (a >= 0 && b <= 0)
		cout<<"4"<<endl;
	else if (a <= 0 && b >= 0)
		cout<<"2"<<endl;
	else
		cout<<"1"<<endl;
	return (0);	
}
