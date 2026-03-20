#include <iostream>

using namespace std;

extern int rectanglePerimeter(int firstEdge, int secondEdge);
extern int rectangleArea(int firstEdge, int secondEdge);
extern float rectangleDiagonal(float firstEdge, float secondEdge);

extern float circleArea(int radius);
extern float circleLength(int radius);
extern float circleSector(int radius, int degree);

int main(){
    int n;
    int degree;
    pair<float, float> rectangle;
    cout << "1 to rectangle, 2 to circle: ";
    cin >> n;

    switch(n){
	while (1){

        case 1:
	    cout << "Input first edge of rectangle: ";
	    cin >> rectangle.first;
	    cout << "Input second edge of rectangle: ";
	    cin >> rectangle.second;
	    while (rectangle.first < 0 | rectangle.second < 0){
		cout << "Incorrect"<< endl;
		cout << "Input first edge of rectangle: ";
	    	cin >> rectangle.first;
	    	cout << "Input second edge of rectangle: ";
	    	cin >> rectangle.second;
	    }
	    cout << "Perimeter: " << rectanglePerimeter(rectangle.first, rectangle.second) << endl;
            cout << "Area: " << rectangleArea(rectangle.first, rectangle.second) << endl;
	    cout << "Diagonals: " << rectangleDiagonal(rectangle.first, rectangle.second) << endl;
            break;

        case 2:
	    int radius;
	    cout << "Input radius: ";
	    cin >> radius;
	    cout << "Input degrees: ";
	    cin >> degree;
	    while(radius < 0){
		cout << "Incorrect" << endl;
		cout << "Input radius: ";
	        cin >> radius;
	    }
	    while(degree < 0 | degree > 360){
		cout << "Incorrect" << endl;
		cout << "Input degrees: ";
	        cin >> radius;
	    }
	    cout << "Area: " << circleArea(radius)<< endl;
	    cout << "Length: " << circleLength(radius)<< endl;
	    cout << "Sector: " << circleSector(radius, degree) << endl;
            
	    break;
    }
    }
	return 0;
}

