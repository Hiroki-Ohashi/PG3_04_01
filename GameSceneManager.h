#pragma once

#include <memory>
#include "IScene.h"
#include "StageScene.h"
#include "TitleScene.h"

class GameSceneManager {
private:
	// シーンを保持
	std::unique_ptr<IScene> sceneArr_[2];

	int currentSceneNo_;
	int prvSceneNo_;

public:
	GameSceneManager();
	~GameSceneManager();

	int Run();
private:

	int sceneNo;

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};