// switch_kata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum PlayerStatus
{
	PS_running,
	PS_walking,
	PS_crouching
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

void SwitchOnInt(int i);

int main()
{
	int numberchoice = 2;
	SwitchOnInt(numberchoice);

	float MovementSpeed;

	PlayerStatus status = PS_running;

	UpdateMovementSpeed(status, MovementSpeed);

	std::cout << "MovementSpeed = " << MovementSpeed << std::endl;

	std::cin.get();
}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		std::cout << "Your number was zero. \n";
		break;
	case 1:
		std::cout << "Your number was one! \n";
		break;
	case 2:
		std::cout << "Your number was two!! \n";
		break;
	default:
		std::cout << "Your number was not valid... \n";
	}
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	/*
	if (P_Status == PS_running)
	{
		speed = RunSpeed;
	}
	else if (P_Status == PS_walking)
	{
		speed = WalkSpeed;
	}
	else if (P_Status == PS_crouching)
	{
		speed = CrouchSpeed;
	}
	*/

	switch (P_Status)
	{
	case PS_running:
		speed = RunSpeed;
		break;
	case PS_walking:
		speed = WalkSpeed;
		break;
	case PS_crouching:
		speed = CrouchSpeed;
	}
}
