#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::init()
{
	pos = { 680.0f , 340.0f };
	playerSpeed = 5.0f;
}

void Player::Update()
{
}

void Player::Draw()
{
	// プレイヤーを表示
	Novice::DrawEllipse(
		(int)pos.x, (int)pos.y,
		20, 20,
		0.0f,
		WHITE,
		kFillModeSolid
	);
}

void Player::MoveRight()
{
	this->pos.x += this->playerSpeed;
}

void Player::MoveLeft()
{
	this->pos.x -= this->playerSpeed;
}
