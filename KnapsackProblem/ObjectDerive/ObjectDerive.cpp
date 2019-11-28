#include <iostream>
#include "ObjectDerive.h"

using namespace std;

ObjectHeavy::ObjectHeavy()
{
	m_nSpace = 5;
}

ObjectHeavy::~ObjectHeavy()
{
}

void ObjectHeavy::Show()
{
	Object::Show();
	cout << "ObjectHeavy : " << m_nSpace << endl;
}

ObjectMedium::ObjectMedium()
{
	m_nSpace = 3;
}

ObjectMedium::~ObjectMedium()
{
}

void ObjectMedium::Show()
{
	Object::Show();
	cout << "ObjectMedium : " << m_nSpace << endl;
}

ObjectSmall::ObjectSmall()
{
	m_nSpace = 1;
}

ObjectSmall::~ObjectSmall()
{
}

void ObjectSmall::Show()
{
	Object::Show();
	cout << "ObjectSmall : " << m_nSpace << endl;
}