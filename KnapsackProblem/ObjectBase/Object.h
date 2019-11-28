#ifndef _OBJECT_H
#define _OBJECT_H

#include <vector>

class Object
{
protected:
	int m_nSpace;

public:
	Object();
	Object(int nSpace);
	virtual ~Object();

	virtual int GetSpace() const;
	virtual void Show();
};

#endif #pragma once
