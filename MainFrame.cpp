#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    wxStaticText* statictext = new wxStaticText(panel, wxID_ANY, "Hello World!", wxPoint(150,120));
}
