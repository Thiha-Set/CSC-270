#include <sstream>
#include "shapes.h"
#include <iostream>

//checkWidthIntegrity() and checkLengthIntegrity() helper methods
//will assist in ensuring that proper integrity constraints are adhered to
int checkWidthIntegrity(float width){
	//check to see if the width is negative
	try{
		//if the width is less than 0, throw an exception (with value = -1)
		if(width < 0){
			throw -1;
		}
	}
	//catch the exception
	catch (int num){
		//issue the error message
		std::cerr << "NegativeWidthException: the width value cannot be negative. ";
		
		//end function execution by returning -1
		return -1;
	}
	return 0;
}
int checkLengthIntegrity(float length){
	//check to see if the length is negative
	try{
		//if the length is less than 0, throw an exception (with value = -1)
		if(length < 0){
			throw -1;
		}
	}
	//catch the exception
	catch (int num){
		//issue the error message
		std::cerr << "NegativeLengthException: the length value cannot be negative. ";
		
		//end function execution by returning -1
		return -1;
	}
	//otherwise return 0 to signal a successful integrity check
	return 0;
}
Rectangle::Rectangle(float length, float width) {
	this->length = length;
	this->width = width;
}

float Rectangle::getlength() const {
	return length;
}

float Rectangle::getwidth() const {
	return width;
}

float Rectangle::perimeter() const {
	//check integrity
	int width_integrity_flag = checkWidthIntegrity(width);
	int length_integrity_flag = checkLengthIntegrity(length);
	
	//if either the width or length < 0, return -1
	if(width_integrity_flag == -1 || length_integrity_flag == -1){
		return -1;
	}
	//otherwise, execute the operation normally
	else
		return 2 * length + 2 * width;
}

float Rectangle::area() const {
	//check integrity
	int width_integrity_flag = checkWidthIntegrity(width);
	int length_integrity_flag = checkLengthIntegrity(length);
	
	//if either the width or length < 0, return -1
	if(width_integrity_flag == -1 || length_integrity_flag == -1){
		return -1;
	}
	//otherwise, execute the operation normally
	else
		return length * width;
}

std::string Rectangle::str() const {
	//check integrity
	int width_integrity_flag = checkWidthIntegrity(width);
	int length_integrity_flag = checkLengthIntegrity(length);
	
	//if either the width or length < 0, return -1
	if(width_integrity_flag == -1 || length_integrity_flag == -1){
		return "ERROR";
	}
	//otherwise, execute the operation normally
	else{
		std::stringstream out;
		// "A rectangle width sides (3,4)"

		out << "A rectangle width sides (" << length << "," << width << ")";
		return out.str();
	}
	
}
/******************************/
//although either checkLengthIntegrity() or checkWidthIntegrity() can be used
//another helper method will be instantiated in order to 
//better match the context of the Square class
int checkSideIntegrity(float side){
	//check to see if the side is negative
	try{
		//if the side is less than 0, throw an exception (with value = -1)
		if(side < 0){
			throw -1;
		}
	}
	//catch the exception
	catch (int num){
		//issue the error message
		std::cerr << "NegativeSideException: the side value cannot be negative. ";
		
		//end function execution by returning -1
		return -1;
	}
	return 0;
}
Square::Square(float side) : Rectangle(side, side) {
}

std::string Square::str() const {
	//use checkSideIntegrity() to check the validity of the values
	int side_integrity_flag = checkSideIntegrity(this->getlength());
	
	//if either the width or length < 0, return -1
	if(side_integrity_flag == -1){
		return "ERROR";
	}
	//otherwise, execute the operation normally
	else{
		std::stringstream out;
		// "A square width sides (3)"

		out << "A square width sides (" << getlength() << ")";
		return out.str();
	}
}
//although either checkLengthIntegrity() or checkWidthIntegrity() can be used
//another helper method will be instantiated in order to 
//better match the context of the Circle class
int checkRadiusIntegrity(float radius){
	//check to see if the radius is negative
	try{
		//if the radius is less than 0, throw an exception (with value = -1)
		if(radius < 0){
			throw -1;
		}
	}
	//catch the exception
	catch (int num){
		//issue the error message
		std::cerr << "NegativeRadiusException: the radius value cannot be negative. ";
		
		//end function execution by returning -1
		return -1;
	}
	return 0;
}
Circle::Circle(float radius) {
	this->radius = radius;
}

float Circle::getradius() const {
	return radius;
}

float Circle::perimeter() const {
	//use checkRadiusIntegrity() to check the validity of the values
	int radius_integrity_flag = checkRadiusIntegrity(this->radius);
	
	//if radius < 0, return -1
	if(radius_integrity_flag == -1){
		return -1;
	}
	//otherwise, execute the operation normally
	else{
		return 2 * radius * PI;
	}
	
}

float Circle::area() const {
	//use checkRadiusIntegrity() to check the validity of the values
	int radius_integrity_flag = checkRadiusIntegrity(this->radius);
	
	//if radius < 0, return -1
	if(radius_integrity_flag == -1){
		return -1;
	}
	//otherwise, execute the operation normally
	else{
		return PI * radius * radius;
	}
}

std::string Circle::str() const {
	//use checkRadiusIntegrity() to check the validity of the values
	int radius_integrity_flag = checkRadiusIntegrity(this->radius);
	
	//if radius < 0, return ERROR
	if(radius_integrity_flag == -1){
		return "ERROR";
	}
	//otherwise, execute the operation normally
		else{
		std::stringstream out;
		// "A circle width radius (3)"

		out << "A circle width radius (" << radius << ")";
		return out.str();
	}
}
