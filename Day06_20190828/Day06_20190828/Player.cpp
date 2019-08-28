#include "Player.h"
#include <iostream>

using namespace std;


Player::Player()
{
}


Player::~Player()
{
}

void Player::BeginPlay()
{
	cout << "Palyer::BeginPlay()" << endl;
}

void Player::Tick()
{
	cout << "Palyer::Tick()" << endl;
}

void Player::Render()
{
	cout << "Palyer::Render()" << endl;
}
