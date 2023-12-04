#pragma once
#include "Vector2.h"
#include "Novice.h"

class Player {
public:
	Player();
	~Player();

	void init();
	void Update();
	void Draw();

	// キーコマンドを作る
	void MoveRight();
	void MoveLeft();
public:
	// プレイヤーの座標と速さ
	Vector2 pos = { 680.0f , 340.0f };
	float playerSpeed = 5.0f;
};