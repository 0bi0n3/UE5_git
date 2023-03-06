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

int main()
{
	float MovementSpeed;

	PlayerStatus status = PS_crouching;

	UpdateMovementSpeed(status, MovementSpeed);

	std::cout << "MovementSpeed = " << MovementSpeed << std::endl;


	std::cin.get();
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
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
}
