#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

// PGEX Require the presence of olc::PixelGameEngine
#define OLC_PGEX_QUICKGUI
#include "extensions/olcPGEX_QuickGUI.h"


class MainWindow : public olc::PixelGameEngine
{
public:
	MainWindow()
	{
		sAppName = "Simple GUI";
	}

protected:
	olc::QuickGUI::Manager guiManager;
	olc::QuickGUI::Button* guiButton1 = nullptr;
	std::vector<std::string> listExample;
	olc::QuickGUI::ListBox* guiListBox = nullptr;

public:
	bool OnUserCreate() override
	{
		
		guiButton1 = new olc::QuickGUI::Button(guiManager,
			"Button 1", { 30.0f, 150.0f }, { 100.0f, 16.0f });

		listExample.push_back("Item 1");
		listExample.push_back("Item 2");
		listExample.push_back("Item 3");
		listExample.push_back("Item 4");
		listExample.push_back("Item 5");
		listExample.push_back("Item 6");

		guiListBox = new olc::QuickGUI::ListBox(guiManager,
			listExample, { 150.0f, 180.0f }, { 100.0f, 54.0f });

		// By default olc::QuickGUI::Manager will delete any Controls added to it, so you
		// dont have to. If you must obfuscate your program with smart pointers, or require
		// that you are in rage-control of your memory at all times, construct the Manager
		// with false as the argument - then its all up to you buddy.

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// We must update the manager at some point each frame. Values of controls
		// are only valid AFTER this call to update()
		guiManager.Update(this);

		// Some silly examples...

        if(guiButton1->bReleased)
        {
            listExample.push_back("Hakan");
        }

		
		// Draw Stuff!
		Clear(olc::VERY_DARK_CYAN);

		
		guiManager.Draw(this); //guiManager.DrawDecal(this);

		
        return true;
	}
};

