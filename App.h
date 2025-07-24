#ifndef APP_H
#define APP_H

#include<wx/wx.h>
#include"Register.h"

class App : public wxApp {
public:
    bool OnInit() override;

private:
    Register *reg ;
};


#endif //APP_H
