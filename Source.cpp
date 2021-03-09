//all this is going to do is spit out something to do in FF
#include <iostream>
#include <stdlib.h>
#include <time.h>

//Prototypes
void primalFight();
void somethingElse();

int main()
{
	int choice;
	//randomizing
	srand(time(NULL));

	//Menu
	std::cout << "Choose 1: \n";
	std::cout << "1: Primal Fights \n";
	std::cout << "2: Others \n";
	std::cin >> choice;
	std::cout << "\n\n";

	while (choice != 1 && choice != 2)
	{
		std::cout << "Invalid Choice Please Pick again. \n\n";

		//Menu
		std::cout << "Choose 1: \n";
		std::cout << "1: Primal Fights \n";
		std::cout << "2: Others \n";
		std::cin >> choice;
		std::cout << "\n\n";
	}
	if (choice == 1)
	{
		primalFight();
	}
	else if (choice == 2)
	{
		somethingElse();
	}


	std::cout << "\nPress Enter to Continue ";
	std::cin.get();
	std::cin.get();
	return 0;
}

void somethingElse()
{
	//random initializing
	int randOne;
	//Others
	enum others{ BEASTTRIBES, MAPS, LEVELING, DIADEM };

	randOne = rand() % DIADEM;
	switch (randOne)
	{
	case BEASTTRIBES:	std::cout << "Beast Tribes ";
		break;
	case MAPS:			std::cout << "Maps ";
		break;
	case LEVELING:		std::cout << "Leveling ";
		break;
	case DIADEM:		std::cout << "Diadem ";
		break;
	default:			std::cout << "Diadem ";

	}

}

void primalFight()
{
	char spiceItUp;
	//random initializing
	int randOne, randTwo;
	//modifiers
	enum modifiers{ FIRSTPERSON, SYNCED, MINIMUMILVL, NOARMOR, NOMODIFIERS };
	//primals
	enum primals{ GARUDA, IFRIT, TITAN, RAMUH, LEVIATHAN, SHIVA, BISMARK, RAVANA, THORDAN, SEPHIROT, NIDHOGG, SOPHIA };

	std::cout << "Do you wanna spice up this fight? y/n ";
	std::cin >> spiceItUp;
	//Output the modifiers for primal fights
	if (spiceItUp == 'y' || spiceItUp == 'Y')
	{
		randOne = rand() % NOMODIFIERS;
		switch (randOne)
		{
		case FIRSTPERSON:	std::cout << "First Person ";
			break;
		case SYNCED:		std::cout << "Synced ";
			break;
		case MINIMUMILVL:	std::cout << "Minimum ilvl ";
			break;
		case NOARMOR:		std::cout << "No Armor ";
			break;
		default:
			std::cout << "No Modifiers";
		}
	}

	//Output which primal to fight
	randTwo = rand() % SOPHIA;
	switch (randTwo)
	{
	case GARUDA:	std::cout << "Garuda ";
		break;
	case IFRIT:		std::cout << "Ifrit ";
		break;
	case TITAN:		std::cout << "Titan ";
		break;
	case RAMUH:		std::cout << "Ramuh ";
		break;
	case LEVIATHAN: std::cout << "Leviathan ";
		break;
	case SHIVA:		std::cout << "Shiva ";
		break;
	case BISMARK:	std::cout << "Bismark ";
		break;
	case RAVANA:	std::cout << "Ravana ";
		break;
	case THORDAN:	std::cout << "Thordan ";
		break;
	case SEPHIROT:	std::cout << "Sephirot ";
		break;
	case NIDHOGG:	std::cout << "Nidhogg ";
		break;
	case SOPHIA:	std::cout << "Sophia ";
		break;
	default:		std::cout << "Sophia ";

	}

}