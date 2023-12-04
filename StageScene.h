#pragma once
#include "IScene.h"
#include "Player.h"
#include "InputHandle.h"
#include "Command.h"

class StageScene : public IScene {
public:
	StageScene();
	~StageScene();

	void Inisialize() override;
	void Update() override;
	void Draw() override;

private:
	InputHandler* inputHander_ = nullptr;
	ICommand* command_ = nullptr;
	Player* player_;
};
