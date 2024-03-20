#include "MainWindow.h"

MainWindow::MainWindow():wxFrame(nullptr, wxID_ANY, "DkPaint")
{

	this->menuBar = new wxMenuBar();
	this->loadMenuBar();
	this->SetMenuBar(this->menuBar);
}

void MainWindow::loadMenuBar()
{
	auto menuFile = new wxMenu();
	menuFile->Append(wxID_ANY, "&Novo\tCtrl+N");
	menuFile->Append(wxID_ANY, "&Abrir\tCtrl+O");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_ANY, "&Sair\tCtrl+Q");

	this->menuBar->Append(menuFile, "&Arquivo");
}
