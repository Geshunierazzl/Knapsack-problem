#include "Bag.h"

Bag::Bag()
{
	m_nSpace = 34;
	m_vecBox.clear();
}

Bag::~Bag()
{
	for (int i = 0; i < m_vecBox.size(); i++)
	{
		delete m_vecBox[i];
	}
	m_vecBox.clear();
}

void Bag::PutInObject(Object* object)
{
	m_vecBox.push_back(object);
}

void Bag::Show()
{
	for (int i = 0; i < m_vecBox.size(); i++)
	{
		m_vecBox[i]->Show();
	}
}

int Bag::GetNumObject() const
{
	return m_vecBox.size();
}

bool Bag::IsCanPutIn(const Object& object)
{
	int nCurrentSpace = 0;
	for (int i = 0; i < m_vecBox.size(); i++)
	{
		nCurrentSpace += m_vecBox[i]->GetSpace();
	}

	if ((nCurrentSpace + object.GetSpace()) > m_nSpace)
	{
		return false;
	}

	return true;
}