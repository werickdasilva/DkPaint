#pragma once

#include <wx/wx.h>

class MainWindow : public wxFrame
{
public:
	MainWindow();
private:
	wxMenuBar* menuBar;
	void loadMenuBar();
};

