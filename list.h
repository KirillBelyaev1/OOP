#include "stdafx.h"
#ifndef _list
#define _list

#include "shape.h"

namespace shapes {

	struct listElement {
		shape *shape;
		listElement *next = NULL;
	};

	class list {
		listElement *listHead;
		int listLength;
	public:
		void LoadElements(ifstream &inFileStream);
		void PrintElements(ofstream &outFileStream);
		void PrintElementsByMask(ofstream &outFileStream, string &menu);
		void SortByPerimeter();

		void Clear();
		void Init();
		list() { Init(); };
		~list() { Clear(); }
	};
}
#endif
