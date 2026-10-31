#include<imgui.h>
#include<imGuiThemes.h>


void SetupImGuiGruvboxHardStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();
    ImVec4* colors = style.Colors;

    // --- 1. Sizing and Spacing (Industrial & Square) ---
    style.WindowPadding = ImVec2(10.0f, 10.0f);
    style.FramePadding = ImVec2(6.0f, 4.0f);
    style.ItemSpacing = ImVec2(8.0f, 4.0f);
    style.ScrollbarSize = 14.0f;
    style.GrabMinSize = 12.0f;

    // --- 2. Borders & Rounding (Gruvbox usually looks best with sharp or low rounding) ---
    style.WindowRounding = 2.0f;
    style.FrameRounding = 2.0f;
    style.PopupRounding = 2.0f;
    style.ScrollbarRounding = 2.0f;
    style.GrabRounding = 2.0f;
    style.TabRounding = 2.0f;

    style.WindowBorderSize = 1.0f;
    style.FrameBorderSize = 1.0f;
    style.PopupBorderSize = 1.0f;

    // --- 3. The Gruvbox Dark Hard Palette ---
    // Background: #1d2021 (Dark Hard) | Foreground: #ebdbb2
    // Red: #fb4934 | Green: #b8bb26 | Yellow: #fabd2f | Blue: #83a598
    // Gray: #928374 | Orange: #fe8019

    // Text
    colors[ImGuiCol_Text] = ImVec4(0.92f, 0.86f, 0.70f, 1.00f); // #ebdbb2
    colors[ImGuiCol_TextDisabled] = ImVec4(0.57f, 0.51f, 0.45f, 1.00f); // #928374

    // Backgrounds
    colors[ImGuiCol_WindowBg] = ImVec4(0.11f, 0.13f, 0.13f, 1.00f); // #1d2021
    colors[ImGuiCol_ChildBg] = ImVec4(0.11f, 0.13f, 0.13f, 0.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.11f, 0.13f, 0.13f, 0.95f);

    // Borders
    colors[ImGuiCol_Border] = ImVec4(0.31f, 0.29f, 0.27f, 1.00f); // #504945
    colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);

    // Frames
    colors[ImGuiCol_FrameBg] = ImVec4(0.24f, 0.22f, 0.21f, 1.00f); // #3c3836
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.31f, 0.29f, 0.27f, 1.00f); // #504945
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.40f, 0.36f, 0.33f, 1.00f); // #665c54

    // Title Bars
    colors[ImGuiCol_TitleBg] = ImVec4(0.11f, 0.13f, 0.13f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.11f, 0.13f, 0.13f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.11f, 0.13f, 0.13f, 1.00f);

    // Menus
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.15f, 0.14f, 0.13f, 1.00f); // #282828

    // Scrollbars
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.11f, 0.13f, 0.13f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.31f, 0.29f, 0.27f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.36f, 0.33f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.57f, 0.51f, 0.45f, 1.00f);

    // Interactables
    colors[ImGuiCol_CheckMark] = ImVec4(0.72f, 0.73f, 0.15f, 1.00f); // #b8bb26 (Green)
    colors[ImGuiCol_SliderGrab] = ImVec4(0.51f, 0.65f, 0.60f, 1.00f); // #83a598 (Blue)
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.55f, 0.73f, 0.67f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.31f, 0.29f, 0.27f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.98f, 0.29f, 0.20f, 1.00f); // #fb4934 (Red)
    colors[ImGuiCol_ButtonActive] = ImVec4(0.80f, 0.20f, 0.15f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.24f, 0.22f, 0.21f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.31f, 0.29f, 0.27f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.40f, 0.36f, 0.33f, 1.00f);

    // Tabs
    colors[ImGuiCol_Tab] = ImVec4(0.24f, 0.22f, 0.21f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.31f, 0.29f, 0.27f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.31f, 0.29f, 0.27f, 1.00f);

    // Misc
    colors[ImGuiCol_PlotLines] = ImVec4(0.98f, 0.74f, 0.18f, 1.00f); // #fabd2f (Yellow)
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.31f, 0.29f, 0.27f, 1.00f);
    colors[ImGuiCol_NavHighlight] = ImVec4(0.98f, 0.29f, 0.20f, 1.00f);

#ifdef IMGUI_HAS_DOCK
    colors[ImGuiCol_DockingPreview] = ImVec4(0.72f, 0.73f, 0.15f, 0.50f);
    colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.11f, 0.13f, 0.13f, 1.00f);
#endif
}

void SetupForestGreenStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();
    ImVec4* colors = style.Colors;

    // --- 1. Sizing and Spacing ---
    style.WindowPadding = ImVec2(10.0f, 10.0f);
    style.FramePadding = ImVec2(6.0f, 4.0f);
    style.CellPadding = ImVec2(6.0f, 4.0f);
    style.ItemSpacing = ImVec2(8.0f, 6.0f);
    style.ItemInnerSpacing = ImVec2(6.0f, 4.0f);
    style.TouchExtraPadding = ImVec2(0.0f, 0.0f);
    style.IndentSpacing = 20.0f;
    style.ScrollbarSize = 14.0f;
    style.GrabMinSize = 12.0f;

    // --- 2. Borders ---
    style.WindowBorderSize = 1.0f;
    style.ChildBorderSize = 1.0f;
    style.PopupBorderSize = 1.0f;
    style.FrameBorderSize = 1.0f;
    style.TabBorderSize = 0.0f;

    // --- 3. Rounding ---
    style.WindowRounding = 6.0f;
    style.ChildRounding = 4.0f;
    style.FrameRounding = 4.0f;
    style.PopupRounding = 4.0f;
    style.ScrollbarRounding = 4.0f;
    style.GrabRounding = 4.0f;
    style.LogSliderDeadzone = 4.0f;
    style.TabRounding = 4.0f;

    // --- 4. Full Color Palette ---

    // Text
    colors[ImGuiCol_Text] = ImVec4(0.85f, 0.90f, 0.85f, 1.00f);
    colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.55f, 0.50f, 1.00f);

    // Backgrounds
    colors[ImGuiCol_WindowBg] = ImVec4(0.06f, 0.09f, 0.06f, 1.00f); // Deep pine
    colors[ImGuiCol_ChildBg] = ImVec4(0.08f, 0.11f, 0.08f, 1.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.07f, 0.10f, 0.07f, 0.96f);

    // Borders
    colors[ImGuiCol_Border] = ImVec4(0.18f, 0.28f, 0.18f, 0.80f);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);

    // Frames (Inputs, Checkboxes, etc.)
    colors[ImGuiCol_FrameBg] = ImVec4(0.12f, 0.18f, 0.12f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.18f, 0.30f, 0.18f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.24f, 0.42f, 0.24f, 1.00f);

    // Title Bars
    colors[ImGuiCol_TitleBg] = ImVec4(0.09f, 0.14f, 0.09f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.14f, 0.26f, 0.14f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.05f, 0.08f, 0.05f, 1.00f);

    // Menus
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.09f, 0.14f, 0.09f, 1.00f);

    // Scrollbars
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.08f, 0.05f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.18f, 0.28f, 0.18f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.25f, 0.38f, 0.25f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.32f, 0.48f, 0.32f, 1.00f);

    // Interactables
    colors[ImGuiCol_CheckMark] = ImVec4(0.45f, 0.75f, 0.45f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.35f, 0.55f, 0.35f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.45f, 0.70f, 0.45f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.18f, 0.35f, 0.18f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.25f, 0.45f, 0.25f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.32f, 0.55f, 0.32f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.18f, 0.35f, 0.18f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.25f, 0.45f, 0.25f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.32f, 0.55f, 0.32f, 1.00f);

    // Separators and Resizing
    colors[ImGuiCol_Separator] = ImVec4(0.18f, 0.28f, 0.18f, 1.00f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.25f, 0.45f, 0.25f, 1.00f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.32f, 0.55f, 0.32f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.18f, 0.35f, 0.18f, 0.80f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.25f, 0.45f, 0.25f, 1.00f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.32f, 0.55f, 0.32f, 1.00f);

    // Tabs
    colors[ImGuiCol_Tab] = ImVec4(0.12f, 0.22f, 0.12f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.25f, 0.45f, 0.25f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.38f, 0.20f, 1.00f);
    colors[ImGuiCol_TabUnfocused] = ImVec4(0.08f, 0.15f, 0.08f, 1.00f);
    colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.12f, 0.22f, 0.12f, 1.00f);

    // Plots
    colors[ImGuiCol_PlotLines] = ImVec4(0.40f, 0.70f, 0.40f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.50f, 0.85f, 0.50f, 1.00f);
    colors[ImGuiCol_PlotHistogram] = ImVec4(0.40f, 0.70f, 0.40f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.50f, 0.85f, 0.50f, 1.00f);

    // Tables
    colors[ImGuiCol_TableHeaderBg] = ImVec4(0.12f, 0.22f, 0.12f, 1.00f);
    colors[ImGuiCol_TableBorderStrong] = ImVec4(0.20f, 0.35f, 0.20f, 1.00f);
    colors[ImGuiCol_TableBorderLight] = ImVec4(0.15f, 0.25f, 0.15f, 1.00f);
    colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_TableRowBgAlt] = ImVec4(0.08f, 0.14f, 0.08f, 0.50f);

    // Misc
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 0.55f, 0.25f, 0.50f);
    colors[ImGuiCol_DragDropTarget] = ImVec4(0.60f, 0.90f, 0.60f, 1.00f);
    colors[ImGuiCol_NavHighlight] = ImVec4(0.40f, 0.80f, 0.40f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.85f, 0.90f, 0.85f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.10f, 0.15f, 0.10f, 0.50f);
    colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.05f, 0.08f, 0.05f, 0.60f);

#ifdef IMGUI_HAS_DOCK
    // Docking (If using the docking branch)
    colors[ImGuiCol_DockingPreview] = ImVec4(0.25f, 0.55f, 0.25f, 0.50f);
    colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.06f, 0.09f, 0.06f, 1.00f);
#endif
}


void SetupImGuiStyle()
{
    // Enemymouse style by enemymouse from ImThemes
    ImGuiStyle& style = ImGui::GetStyle();

    style.Alpha = 1.0f;
    style.DisabledAlpha = 0.6f;
    style.WindowPadding = ImVec2(8.0f, 8.0f);
    style.WindowRounding = 3.0f;
    style.WindowBorderSize = 1.0f;
    style.WindowMinSize = ImVec2(32.0f, 32.0f);
    style.WindowTitleAlign = ImVec2(0.0f, 0.5f);
    style.WindowMenuButtonPosition = ImGuiDir_Left;
    style.ChildRounding = 3.0f;
    style.ChildBorderSize = 1.0f;
    style.PopupRounding = 0.0f;
    style.PopupBorderSize = 1.0f;
    style.FramePadding = ImVec2(4.0f, 3.0f);
    style.FrameRounding = 3.0f;
    style.FrameBorderSize = 0.0f;
    style.ItemSpacing = ImVec2(8.0f, 4.0f);
    style.ItemInnerSpacing = ImVec2(4.0f, 4.0f);
    style.CellPadding = ImVec2(4.0f, 2.0f);
    style.IndentSpacing = 21.0f;
    style.ColumnsMinSpacing = 6.0f;
    style.ScrollbarSize = 14.0f;
    style.ScrollbarRounding = 9.0f;
    style.GrabMinSize = 20.0f;
    style.GrabRounding = 1.0f;
    style.TabRounding = 4.0f;
    style.TabBorderSize = 0.0f;
    style.TabMinWidthForCloseButton = 0.0f;
    style.ColorButtonPosition = ImGuiDir_Right;
    style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
    style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

    style.Colors[ImGuiCol_Text] = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.0f, 0.4f, 0.40784314f, 1.0f);
    style.Colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.83f);
    style.Colors[ImGuiCol_ChildBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
    style.Colors[ImGuiCol_PopupBg] = ImVec4(0.15686275f, 0.23921569f, 0.21960784f, 0.6f);
    style.Colors[ImGuiCol_Border] = ImVec4(0.0f, 1.0f, 1.0f, 0.65f);
    style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
    style.Colors[ImGuiCol_FrameBg] = ImVec4(0.4392157f, 0.8f, 0.8f, 0.18f);
    style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.4392157f, 0.8f, 0.8f, 0.27f);
    style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.4392157f, 0.80784315f, 0.85882354f, 0.66f);
    style.Colors[ImGuiCol_TitleBg] = ImVec4(0.13725491f, 0.1764706f, 0.20784314f, 0.73f);
    style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.0f, 1.0f, 1.0f, 0.27f);
    style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.0f, 0.0f, 0.0f, 0.54f);
    style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.2f);
    style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.21960784f, 0.28627452f, 0.29803923f, 0.71f);
    style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.0f, 1.0f, 1.0f, 0.44f);
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.0f, 1.0f, 1.0f, 0.74f);
    style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_CheckMark] = ImVec4(0.0f, 1.0f, 1.0f, 0.68f);
    style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.0f, 1.0f, 1.0f, 0.36f);
    style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.0f, 1.0f, 1.0f, 0.76f);
    style.Colors[ImGuiCol_Button] = ImVec4(0.0f, 0.64705884f, 0.64705884f, 0.46f);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.007843138f, 1.0f, 1.0f, 0.43f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.0f, 1.0f, 1.0f, 0.62f);
    style.Colors[ImGuiCol_Header] = ImVec4(0.0f, 1.0f, 1.0f, 0.33f);
    style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.0f, 1.0f, 1.0f, 0.42f);
    style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.0f, 1.0f, 1.0f, 0.54f);
    style.Colors[ImGuiCol_Separator] = ImVec4(0.0f, 0.49803922f, 0.49803922f, 0.33f);
    style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.0f, 0.49803922f, 0.49803922f, 0.47f);
    style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.0f, 0.69803923f, 0.69803923f, 1.0f);
    style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.0f, 1.0f, 1.0f, 0.54f);
    style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.0f, 1.0f, 1.0f, 0.74f);
    style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_Tab] = ImVec4(0.1764706f, 0.34901962f, 0.5764706f, 0.862f);
    style.Colors[ImGuiCol_TabHovered] = ImVec4(0.25882354f, 0.5882353f, 0.9764706f, 0.8f);
    style.Colors[ImGuiCol_TabActive] = ImVec4(0.19607843f, 0.40784314f, 0.6784314f, 1.0f);
    style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.06666667f, 0.101960786f, 0.14509805f, 0.9724f);
    style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.13333334f, 0.25882354f, 0.42352942f, 1.0f);
    style.Colors[ImGuiCol_PlotLines] = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.1882353f, 0.1882353f, 0.2f, 1.0f);
    style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.30980393f, 0.30980393f, 0.34901962f, 1.0f);
    style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.22745098f, 0.22745098f, 0.24705882f, 1.0f);
    style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
    style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 1.0f, 1.0f, 0.06f);
    style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.0f, 1.0f, 1.0f, 0.22f);
    style.Colors[ImGuiCol_DragDropTarget] = ImVec4(1.0f, 1.0f, 0.0f, 0.9f);
    style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.25882354f, 0.5882353f, 0.9764706f, 1.0f);
    style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.7f);
    style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.8f, 0.8f, 0.8f, 0.2f);
    style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.039215688f, 0.09803922f, 0.08627451f, 0.51f);
}

void SteamStyle()
{
    // Classic Steam style by metasprite from ImThemes
    ImGuiStyle& style = ImGui::GetStyle();

    style.Alpha = 1.0f;
    style.DisabledAlpha = 0.6f;
    style.WindowPadding = ImVec2(8.0f, 8.0f);
    style.WindowRounding = 0.0f;
    style.WindowBorderSize = 1.0f;
    style.WindowMinSize = ImVec2(32.0f, 32.0f);
    style.WindowTitleAlign = ImVec2(0.0f, 0.5f);
    style.WindowMenuButtonPosition = ImGuiDir_Left;
    style.ChildRounding = 0.0f;
    style.ChildBorderSize = 1.0f;
    style.PopupRounding = 0.0f;
    style.PopupBorderSize = 1.0f;
    style.FramePadding = ImVec2(4.0f, 3.0f);
    style.FrameRounding = 0.0f;
    style.FrameBorderSize = 1.0f;
    style.ItemSpacing = ImVec2(8.0f, 4.0f);
    style.ItemInnerSpacing = ImVec2(4.0f, 4.0f);
    style.CellPadding = ImVec2(4.0f, 2.0f);
    style.IndentSpacing = 21.0f;
    style.ColumnsMinSpacing = 6.0f;
    style.ScrollbarSize = 14.0f;
    style.ScrollbarRounding = 0.0f;
    style.GrabMinSize = 10.0f;
    style.GrabRounding = 0.0f;
    style.TabRounding = 0.0f;
    style.TabBorderSize = 0.0f;
    style.TabMinWidthForCloseButton = 0.0f;
    style.ColorButtonPosition = ImGuiDir_Right;
    style.ButtonTextAlign = ImVec2(0.5f, 0.5f);
    style.SelectableTextAlign = ImVec2(0.0f, 0.0f);

    style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
    style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.49803922f, 0.49803922f, 0.49803922f, 1.0f);
    style.Colors[ImGuiCol_WindowBg] = ImVec4(0.28627452f, 0.3372549f, 0.25882354f, 1.0f);
    style.Colors[ImGuiCol_ChildBg] = ImVec4(0.28627452f, 0.3372549f, 0.25882354f, 1.0f);
    style.Colors[ImGuiCol_PopupBg] = ImVec4(0.23921569f, 0.26666668f, 0.2f, 1.0f);
    style.Colors[ImGuiCol_Border] = ImVec4(0.5372549f, 0.5686275f, 0.50980395f, 0.5f);
    style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.13725491f, 0.15686275f, 0.10980392f, 0.52f);
    style.Colors[ImGuiCol_FrameBg] = ImVec4(0.23921569f, 0.26666668f, 0.2f, 1.0f);
    style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.26666668f, 0.29803923f, 0.22745098f, 1.0f);
    style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.29803923f, 0.3372549f, 0.25882354f, 1.0f);
    style.Colors[ImGuiCol_TitleBg] = ImVec4(0.23921569f, 0.26666668f, 0.2f, 1.0f);
    style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.28627452f, 0.3372549f, 0.25882354f, 1.0f);
    style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.0f, 0.0f, 0.0f, 0.51f);
    style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.23921569f, 0.26666668f, 0.2f, 1.0f);
    style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.34901962f, 0.41960785f, 0.30980393f, 1.0f);
    style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.2784314f, 0.31764707f, 0.23921569f, 1.0f);
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.24705882f, 0.29803923f, 0.21960784f, 1.0f);
    style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.22745098f, 0.26666668f, 0.20784314f, 1.0f);
    style.Colors[ImGuiCol_CheckMark] = ImVec4(0.5882353f, 0.5372549f, 0.1764706f, 1.0f);
    style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.34901962f, 0.41960785f, 0.30980393f, 1.0f);
    style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.5372549f, 0.5686275f, 0.50980395f, 0.5f);
    style.Colors[ImGuiCol_Button] = ImVec4(0.28627452f, 0.3372549f, 0.25882354f, 0.4f);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.34901962f, 0.41960785f, 0.30980393f, 1.0f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.5372549f, 0.5686275f, 0.50980395f, 0.5f);
    style.Colors[ImGuiCol_Header] = ImVec4(0.34901962f, 0.41960785f, 0.30980393f, 1.0f);
    style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.34901962f, 0.41960785f, 0.30980393f, 0.6f);
    style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.5372549f, 0.5686275f, 0.50980395f, 0.5f);
    style.Colors[ImGuiCol_Separator] = ImVec4(0.13725491f, 0.15686275f, 0.10980392f, 1.0f);
    style.Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.5372549f, 0.5686275f, 0.50980395f, 1.0f);
    style.Colors[ImGuiCol_SeparatorActive] = ImVec4(0.5882353f, 0.5372549f, 0.1764706f, 1.0f);
    style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.1882353f, 0.22745098f, 0.1764706f, 0.0f);
    style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.5372549f, 0.5686275f, 0.50980395f, 1.0f);
    style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.5882353f, 0.5372549f, 0.1764706f, 1.0f);
    style.Colors[ImGuiCol_Tab] = ImVec4(0.34901962f, 0.41960785f, 0.30980393f, 1.0f);
    style.Colors[ImGuiCol_TabHovered] = ImVec4(0.5372549f, 0.5686275f, 0.50980395f, 0.78f);
    style.Colors[ImGuiCol_TabActive] = ImVec4(0.5882353f, 0.5372549f, 0.1764706f, 1.0f);
    style.Colors[ImGuiCol_TabUnfocused] = ImVec4(0.23921569f, 0.26666668f, 0.2f, 1.0f);
    style.Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.34901962f, 0.41960785f, 0.30980393f, 1.0f);
    style.Colors[ImGuiCol_PlotLines] = ImVec4(0.60784316f, 0.60784316f, 0.60784316f, 1.0f);
    style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.5882353f, 0.5372549f, 0.1764706f, 1.0f);
    style.Colors[ImGuiCol_PlotHistogram] = ImVec4(1.0f, 0.7764706f, 0.2784314f, 1.0f);
    style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.0f, 0.6f, 0.0f, 1.0f);
    style.Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.1882353f, 0.1882353f, 0.2f, 1.0f);
    style.Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.30980393f, 0.30980393f, 0.34901962f, 1.0f);
    style.Colors[ImGuiCol_TableBorderLight] = ImVec4(0.22745098f, 0.22745098f, 0.24705882f, 1.0f);
    style.Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
    style.Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 1.0f, 1.0f, 0.06f);
    style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.5882353f, 0.5372549f, 0.1764706f, 1.0f);
    style.Colors[ImGuiCol_DragDropTarget] = ImVec4(0.7294118f, 0.6666667f, 0.23921569f, 1.0f);
    style.Colors[ImGuiCol_NavHighlight] = ImVec4(0.5882353f, 0.5372549f, 0.1764706f, 1.0f);
    style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.7f);
    style.Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.8f, 0.8f, 0.8f, 0.2f);
    style.Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.8f, 0.8f, 0.8f, 0.35f);
}