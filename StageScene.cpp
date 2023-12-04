#include "StageScene.h"

StageScene::StageScene()
{
}

StageScene::~StageScene()
{
	delete player_;
}

void StageScene::Inisialize()
{
	inputHander_ = new InputHandler();

	// Assign command
	inputHander_->AssignMoveLeftCommand2PressKeyA();
	inputHander_->AssignMoveRightCommand2PressKeyD();

	// New Player
	player_ = new Player;
}

void StageScene::Update()
{

	// get Input
	command_ = inputHander_->HandleInput();

	// set Command
	if (this->command_) {
		command_->Exec(*player_);
	}

	player_->Update();
}

void StageScene::Draw()
{
	player_->Draw();
}