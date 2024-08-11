#define OLC_PGE_APPLICATION
#include "MainWindow.h"


#define     SCREEN_WIDTH    960   
#define     SCREEN_HEIGHT   540
#define     PIXEL_WIDTH     1
#define     PIXEL_HEIGHT    1

int main()
{
	MainWindow window;
	if (window.Construct(SCREEN_WIDTH, SCREEN_HEIGHT, PIXEL_WIDTH, PIXEL_HEIGHT))
		window.Start();
	return 0;
}