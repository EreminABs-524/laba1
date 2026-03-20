#include <cmath>
int rectanglePerimeter(int firstEdge, int secondEdge){
	return firstEdge*2+secondEdge*2;
}
int rectangleArea(int firstEdge, int secondEdge){
	return firstEdge*secondEdge;
}
float rectangleDiagonal(int firstEdge, int secondEdge){
	return  sqrt(firstEdge*firstEdge+secondEdge*secondEdge);
}
