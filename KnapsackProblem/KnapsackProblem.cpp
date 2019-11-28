#include <iostream>
#include "Bag/Bag.h"
#include "ObjectDerive/ObjectDerive.h"

int main()
{
	Bag bag;
	ObjectHeavy objHeavy;
	ObjectMedium objMedium;
	ObjectSmall objSmall;
	while (bag.IsCanPutIn(objSmall))
	{
		if (bag.IsCanPutIn(objHeavy))
		{
			ObjectHeavy* objNewHeavy = new ObjectHeavy();
			bag.PutInObject(objNewHeavy);
			continue;
		}

		if (bag.IsCanPutIn(objMedium))
		{
			ObjectMedium* objNewMedium = new ObjectMedium();
			bag.PutInObject(objNewMedium);
			continue;
		}

		if (bag.IsCanPutIn(objSmall))
		{
			ObjectSmall* objNewSmall = new ObjectSmall();
			bag.PutInObject(objNewSmall);
			continue;
		}
	}

	cout << bag.GetNumObject() << endl;

	cout << "Bag : " << endl;
	bag.Show();
	return 0;
}

