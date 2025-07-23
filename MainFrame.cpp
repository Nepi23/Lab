#include "MainFrame.h"
#include "Register.h"
#include "Activity.h"
#include <wx/wx.h>
#include <string>
using namespace std;

MainFrame::MainFrame(Register* reg,const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    int i=1;
    for (Activity* a : reg->getActivities()){
        string desc=a->getDesc();
        string start=a->getStart();
        string end=a->getEnd();
        wxStaticText* text1 = new wxStaticText(panel, wxID_ANY, "Descrizione: ", wxPoint(100,120*i));
        wxStaticText* text2 = new wxStaticText(panel, wxID_ANY, desc, wxPoint(150,120*i));
        wxStaticText* text3 = new wxStaticText(panel, wxID_ANY, "Inizio: ", wxPoint(200,120*i));
        wxStaticText* text4 = new wxStaticText(panel, wxID_ANY, start, wxPoint(250,120*i));
        wxStaticText* text5 = new wxStaticText(panel, wxID_ANY, "Fine: ", wxPoint(300,120*i));
        wxStaticText* text6 = new wxStaticText(panel, wxID_ANY, end, wxPoint(350,120*i));
        i++;
    }
}


