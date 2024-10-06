#include <iostream>

class Actor
{
public:
	virtual void MoveRender()
	{
		std::cout << "이동속도 : " << speed << std::endl;
	}
protected:
	int speed = 100;
};

class Player : public Actor
{
public:
	Player()
	{
		speed = 500;
	}

	void MoveRender() override
	{
		speed = 0;
	}
};

int main()
{
	Player Warrior;
	Actor Hero = Warrior;
	Hero.MoveRender();



	return 0;
}

