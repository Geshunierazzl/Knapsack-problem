#include "Object.h"

Object::Object()
{
	m_nSpace = 0;
}

Object::Object(int nSpace)
{
	m_nSpace = nSpace;
}

Object::~Object()
{
}

int Object::GetSpace() const
{
	return m_nSpace;
}

void Object::Show()
{
	//cout << m_nSpace << endl;
}