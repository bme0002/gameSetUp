#include <iostream>
#include <raylib.h>

#include<imgui.h>
#include<rlImGui.h>

#include <gameMain.h>

#include "imGuiThemes.h"


int main()
{
#if PRODUCTION_BUILD == 1
	SetTraceLogLevel(LOG_NONE);
#endif

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, "EDGAR++");
	SetExitKey(KEY_NULL); // DISABLE ESC FROM CLOSING WINDOW
	SetTargetFPS(240); //

#pragma region ImGui

	rlImGuiSetup(true);
	SteamStyle();

	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;
	io.FontGlobalScale = 2;

#pragma endregion

	if (!initGame())
	{
		return 0;
	}
	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
	
#pragma region imgui


		rlImGuiBegin();

		//docking stuff
		ImGui::PushStyleColor(ImGuiCol_WindowBg, {});
		ImGui::PushStyleColor(ImGuiCol_DockingEmptyBg, {});
		ImGui::DockSpaceOverViewport(ImGui::GetMainViewport());
		ImGui::PopStyleColor(2);

#pragma endregion

#pragma region imgui windows



		//ImGui::ShowDemoWindow();

#pragma endregion

		if (!updateGame())
		{
			closeGame();
		}

#pragma region imgui

		rlImGuiEnd();
#pragma endregion


		EndDrawing();
	}
	
	CloseWindow();

	closeGame();

#pragma region imgui

	rlImGuiShutdown();
#pragma endregion

	return 0;
}