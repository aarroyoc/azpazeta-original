#ifndef AZPAZETA_H
#define AZPAZETA_H
#include "Librerias.h"


class MyApp : public wxApp
{
public:
    // override base class virtuals
    // ----------------------------

    // this one is called on application startup and is a good place for the app
    // initialization (doing it here and not in the ctor allows to have an error
    // return: if OnInit() returns false, the application terminates)
    virtual bool OnInit();
    //virtual void OnRun(); //Hacer comprobaciones
 


 
};

#endif