#include "stdafx.h"
#include "shape.h"

#include "rectangle.h"
#include "circle.h"

using namespace std;

namespace shapes {	
	shape* shape::ReadInfoAboutShapeFromFileStream(ifstream &inFileStream) {
		shape *readShape;
		int key;
		int _color;
		inFileStream >> key;
		inFileStream >> _color;

		switch (key) {
		case 1:
			readShape = new rectangle;
			break;
		case 2:
			readShape = new circle;
			break;
		default:
			return NULL;
			break;
		}

		readShape->color = _color;

		readShape->ReadDimensionsOfShapeFromFileStream(inFileStream);

		return readShape;
	}
}