#include <Novice.h>
#include "GameSceneManager.h"

const char kWindowTitle[] = "PG3_04_01";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameSceneManager* gamemanager_ = new GameSceneManager;

	gamemanager_->Run();

	delete gamemanager_;

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}