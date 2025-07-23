#ifndef MAINFRAME_H
#define MAINFRAME_H

#include<wx/wx.h>
#include "Register.h"

class MainFrame : public wxFrame {
    public:
    MainFrame(Register* reg,const wxString& title);
};



#endif //MAINFRAME_H
