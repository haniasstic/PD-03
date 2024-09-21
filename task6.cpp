#include<iostream>
using namespace std;
main()
{
	int x,y,a;
	float z,b;
	cout << " Enter the size of the fertilizer bag in pounds:  " << endl;
	cin >> x;
	cout << " Enter the cost of the bag: " << endl;
	cin >> y;
	cout << " Enter the area in square feet that can be covered by the bag: "<< endl;
	cin >> z;
	a=y/x;
	b=y/z;	
	cout << " The cost of fertilizing per pound is " <<  a << endl;
	cout << " The cost of fertilizing per square feet is " << b << endl;
}
	
