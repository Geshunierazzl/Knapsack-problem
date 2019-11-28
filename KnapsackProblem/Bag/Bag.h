#ifndef _BAG_H
#define _BAG_H

#include <vector>
#include "../ObjectBase/Object.h"

using namespace std;

class Bag
{
private:
	int m_nSpace;
	vector<Object* > m_vecBox;

public:
	void PutInObject(Object* object);
	void Show();
	int GetNumObject() const;
	bool IsCanPutIn(const Object& object);

	Bag();
	~Bag();
};

#endif#pragma once
