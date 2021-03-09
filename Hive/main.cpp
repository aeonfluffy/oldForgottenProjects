#include <iostream>
#include <time.h>

using namespace std;

enum I_ID {ERROR, HYBRID, BUSH, LAST};
struct B_Entity
{
	int position_x;
	int position_y;
	int target_x;
	int target_y;
	bool selected;
	bool visible;

	int ID;
	int strength[2];
	int defense[2];

	B_Entity()
	{
		//Allegro Variables
		position_x = position_y = target_x = target_y = NULL;
		//
		selected = visible = false;


		ID = ERROR;
		for(int i = 0; i < 2; i++)
		{
			strength[i] = ERROR;
			defense[i] = ERROR;
		}
	}

	void Create_Hybrid(B_Entity entityOne, B_Entity entityTwo)
	{
		ID = HYBRID;
		square(entityOne.strength[0], entityOne.strength[1], entityTwo.strength[0], entityTwo.strength[1], strength[0], strength[1]);
		square(entityOne.defense[0], entityOne.defense[1], entityTwo.defense[0], entityTwo.defense[1], defense[0], defense[1]);
	}

	void square(int a, int a1, int b, int b1, int &final_1, int &final_2)
	{
		int random_square = rand()%4;
		cout << random_square;
		switch(random_square)
		{
			case 0:
				final_1 = a;
				final_2 = b;
				break;
			case 1:
				final_1 = a1;
				final_2 = b;
				break;
			case 2:
				final_1 = a;
				final_2 = b1;
				break;
			case 3:
				final_1 = a1;
				final_2 = b1;
				break;
		}
		int switch_val = rand()%2;

		if(switch_val = 0);
		{
			int temp = final_2;
			final_2 = final_1;
			final_1 = temp;
		}

	}

	/*THIS IS FOR DEBUG PURPOSES*/
	void display_values(B_Entity entity)
	{
		cout << "Entity ID is " << entity.ID << endl << cout << "Dominant Strength is " << entity.strength[0] << " ";
		cout << "Recissive Strength is " << entity.strength[1] << endl;
	}

};

struct Non_Move_Entity : B_Entity
{
		void Create_Bush()
	{
		ID = BUSH;
		strength[0] = 2+rand()%3;
		strength[1] = 2+rand()%3;
		defense[0] = 5+rand()%3;
		defense[1] = 5+rand()%3;
	}
};

struct Move_Entity : B_Entity
{
	/*
		Movement Values Go in here somewhere
	*/

	void Create_Worker()
	{}
	void Create_Soldier()
	{}
};


int main()
{
	srand(time(NULL));

	Non_Move_Entity bush, bush2;
	bush.Create_Bush();
	bush2.Create_Bush();

	B_Entity hybrid;

	hybrid.Create_Hybrid(bush, bush2);



	system("pause");
	return 0;
}