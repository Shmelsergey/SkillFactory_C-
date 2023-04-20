





#include <iostream>
#include "Snack.h"
#include <iostream>
#include "SnackSlot.h"
#include "VendingMachine.h"

int main() {
	Snack* bounty = new Snack("Bounty");

	//std:: cout << bounty->getName() << "\n";

	Snack* snickers = new Snack("Snickers");

	//std::cout << snickers->getName() << "\n";
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	//slot->show();
	VendingMachine* machine = new VendingMachine(5 /*Количество слотов для снеков*/);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат
	machine->show();

	std::cout << machine->getEmptySlotsCount() << "\n"; // Должно выводить количество пустых слотов для снеков
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}

