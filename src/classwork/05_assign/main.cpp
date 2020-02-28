//write include statemetns
#include "rectangle.h"
#include <vector>
#include<iostream>
using std::vector;	using std::cout;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	vector<Rect> rectangle;
	Rect area(4, 5);
	Rect area1(10, 10);
	Rect area2(100, 10);

	rectangle.push_back(area);
	rectangle.push_back(area1);
	rectangle.push_back(area2);

	for (int i = 0; i < rectangle.size(); ++i)
	{
		cout << rectangle[i].get_area() << "\n";
	}
	return 0;
}