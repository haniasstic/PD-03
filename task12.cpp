#include<iostream>
using namespace std;
main()
{
	int sq_meters,width,height,paint;
	cout << " Number of square meters you can paint: " << endl;
	cin >> sq_meters;
	cout << " Width of the wall (in meters) : " << endl;
	cin >> width;
	cout << " Height of the wall (in meters) : " << endl;
	cin >> height ;
	paint = (sq_meters/(width*height));
	cout << " The numbers of walls you can paint are: " << paint << endl;
}
