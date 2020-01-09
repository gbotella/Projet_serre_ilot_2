/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 19 décembre 2019, 17:59
 */

#include <QApplication>
#include <QWidget>
#include "VueSerre.h"

int main(int argc, char *argv[]) {
   
    QApplication app(argc, argv);
    
    VueSerre *maVue = new VueSerre();
    
    maVue->show();
    maVue->mettreAJour();
    
    return app.exec();
}
