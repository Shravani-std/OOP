#include<iostream>
using namespace std;

class Circle{
	private:
		int centerX = 0,centerY = 0,radius = 1;
	   double circumference;
	   double area;
	public:
		//No Argument constructor
		Circle()/*:centerX(0),centerY(0),radius(1)*/{
			calcArea();
			calcCircumference();
		   
		}
		Circle(int cx,int cy){
			centerX = cx;
			centerY = cy;
			calcArea();
			calcCircumference();
		}
		Circle(int cx,int cy,int r){
			radius = r;
			calcArea();
			calcCircumference();
		}
		//set and get values
		void setCenterX(int cx){
			centerX = cx;
		}
		int getCenterX()const{
			return centerX ;
		}
		void setCenterY(int cy){
		    centerY = cy;
		}
		int getCenterY()const{
			return centerY;
		}
		void setRadius(int r){
			radius = r;
			calcArea();
			calcCircumference();
		}
		int getRadius()const{
		return radius;
		}
		
		void calcArea(){
			area = 3.14*radius*radius;
		}
		double getArea(){
			return area;
		}
		void calcCircumference(){
			circumference = 2*3.14*radius;
		}
		double getCircumference(){
			return circumference;
		}
		//tangent or not
		bool isTangent(int x1,int x2,int y1,int y2){
			//cal slope & intercept
			int slope = (y2-y1)/(x2-x1);
			int intercept = y1-slope*x1;
			return isTangent(slope,intercept);
		}
		bool isTangent(int slope,int intercept){
			double distance = abs(slope*centerX - centerY + intercept) / sqrt(slope*slope+1);
			return distance == radius;
		}

		
};
//class Line{
//	
//};

int main(){
	
	//using argument constructor
	Circle circle1;
	cout<<"Circle 1 co-ordinates(x,y): "<<(circle1.getCenterX())<<","<<(circle1.getCenterY())<<endl;
	cout<<"Circle 1 radius: "<<(circle1.getRadius())<<endl;
	cout<<"Circle 1 Area: "<<(circle1.getArea())<<endl;
	cout<<"Circle 1 Circumference: "<<circle1.getCircumference()<<endl;
	
	//using overload constructor with center
	Circle circle2(3,4);
	cout<<"Circle 2 co-ordinates(x,y): "<<(circle2.getCenterX())<<","<<(circle2.getCenterY())<<endl;
	cout<<"Circle 2 radius: "<<(circle2.getRadius())<<endl;
	cout<<"Circle 2 Area: "<<(circle2.getArea())<<endl;
	cout<<"Circle 2 Circumference: "<<circle2.getCircumference()<<endl;
	
	//using overload constructor with center and radius
	Circle circle3(5,6,2);
	cout<<"Circle 3 co-ordinates(x,y): "<<(circle3.getCenterX())<<","<<(circle3.getCenterY())<<endl;
	cout<<"Circle 3 radius: "<<(circle3.getRadius())<<endl;
	cout<<"Circle 3 Area: "<<(circle3.getArea())<<endl;
	cout<<"Circle 3 Circumference: "<<circle3.getCircumference()<<endl;
	
	return 0;
	
}
