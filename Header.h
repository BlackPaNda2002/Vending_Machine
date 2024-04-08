#pragma once
#include <iostream>
#include <string>

using namespace std;

class Snack
{
public:
	Snack(string N) : Name(N) {};
	

private:
	string Name;
};

class SnackSlot
{
public:
	


	SnackSlot(int S) :Size(S), CurrentSize(0) {};
	
	void addSnack(Snack* snack);
private:
	Snack* snacks[100];
	int Size;
	int CurrentSize;
};

class Vending_Machine
{
public:
	Vending_Machine(int SlotC) :SlotCount(SlotC),SlotCurrent(0) {};
	void addSlot(SnackSlot* Slot);
	int getEmptySlotsCount();
private:
	SnackSlot* Slots[100];
	int SlotCount;
	int SlotCurrent;
};

