#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() {
    reg->addActivity(new Activity("Nuoto","10:20","11:20"));
    reg->addActivity(new Activity("Corsa","14:20","15:20"));
    reg->addActivity(new Activity("Calcio","17:20","19:20"));
    MainFrame *mainframe = new MainFrame(reg,"Attività giornaliera");
    mainframe->SetClientSize(800, 600);
    mainframe->Center();
    mainframe->Show(true);
    return true;
}
