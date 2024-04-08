#include "Header.h"

void SnackSlot::addSnack(Snack* snack)
{
	if (CurrentSize>Size-1)
	{
		cout << "Size is full" << endl;
		return;
	}

	snacks[CurrentSize] = snack;
	++CurrentSize;


}

void Vending_Machine::addSlot(SnackSlot* Slot)
{
	if (SlotCurrent > SlotCount - 1)
	{
		cout << "Vending Machine is full" << endl;
		return;
	}
	Slots[SlotCurrent] = Slot;
	++SlotCurrent;
}

int Vending_Machine::getEmptySlotsCount()
{

	return SlotCount-SlotCurrent;
}
