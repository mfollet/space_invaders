/*
 * Shape.h
 *
 *  Created on: 27 déc. 2016
 *      Author: Maxime
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
	const char SYMBOL;
	const int* coordinates[2];
	const int length;
	const int width;
public:
	Shape(const int* coordinates[2], const char symbol = '+');
	virtual ~Shape();

	const int** getCoordinates() const {
		return coordinates;
	}

	const int getLength() const {
		return length;
	}

	static const char getSymbol() const {
		return SYMBOL;
	}

	const int getWidth() const {
		return width;
	}
};

#endif /* SHAPE_H_ */
