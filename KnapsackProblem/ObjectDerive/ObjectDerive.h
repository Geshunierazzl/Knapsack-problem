#ifndef _OBJECTDERIVE_H
#define _OBJECTDERIVE_H

#include "../ObjectBase/Object.h"

////��������////
class ObjectHeavy : public Object
{
public:
	ObjectHeavy();
	~ObjectHeavy();
	virtual void Show();
};

////�еȵ�����////
class ObjectMedium : public Object
{
public:
	ObjectMedium();
	~ObjectMedium();
	virtual void Show();
};

////��С������////
class ObjectSmall : public Object
{
public:
	ObjectSmall();
	~ObjectSmall();
	virtual void Show();
};

#endif
