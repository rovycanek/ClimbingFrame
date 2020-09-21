#pragma once
#include <Windows.h>
#include <iostream>
#include "Element.h"

class WindowController
{
private:
	//this is function that is remowing scroll bar from window
	static void RemoveScrollbar();

	//this function changes scale and position of terminal window 
	//right specifies distance of top left corner from left edge
	//right specifies distance of top left corner from top edge
	//right specifies width of terminal window
	//right specifies height of terminal window
	static void RresizeWindow(int right, int down, int width, int height);

	//this function removes blinking cursor from terminal window
	static void HideCursor();

public:

	//this function sets terminal window to correct size, removes scrollbars and hides cursors
	static void InitWindow();

	//this function moves cursor in window to x, y coordinates from top left corner 
	static void SetCursorPosition(Element::Coordinates c);

	//this function returns char from terminal window where x and y are coordinates from top left corner 
	static char ReadFromPosition(Element::Coordinates c);
};

