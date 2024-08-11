#define OLC_PGE_APPLICATION
#include "MainWindow.h"


int main()
{
	olcDemo_QuickGUI demo;
	if (demo.Construct(256, 240, 4, 4))
		demo.Start();
	return 0;
}