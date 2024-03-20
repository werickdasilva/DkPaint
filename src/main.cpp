// Start of wxWidgets "Hello World" Program
#include <wx/wx.h>
#include "gui/MainWindow.h"

class MyApp : public wxApp
{
public:
    bool OnInit() override;
};

wxIMPLEMENT_APP(MyApp);


bool MyApp::OnInit()
{
    MainWindow* window = new MainWindow();
    window->Show(true);
    return true;
}