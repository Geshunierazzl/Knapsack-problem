#ifndef _OBJECTDERIVE_H
#define _OBJECTDERIVE_H

#include "../ObjectBase/Object.h"

////最大的物体////
class ObjectHeavy : public Object
{
public:
	ObjectHeavy();
	~ObjectHeavy();
	virtual void Show();
};

////中等的物体////
class ObjectMedium : public Object
{
public:
	ObjectMedium();
	~ObjectMedium();
	virtual void Show();
};

////最小的物体////
class ObjectSmall : public Object
{
public:
	ObjectSmall();
	~ObjectSmall();
	virtual void Show();
};

#endif
