#include <iostream>
#include <string>
#include "Header.h"
using namespace std;




int main() {
	setlocale(LC_ALL, "RUS");
	int SlotCount=10;
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	
	Vending_Machine* machine = new Vending_Machine(SlotCount /*Количество слотов для снеков*/);
	machine->addSlot(slot); 
	// Помещаем слот обратно в аппарат
	cout << "Оставшихся количество слотов для снеков\t" ;
	cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	
}
