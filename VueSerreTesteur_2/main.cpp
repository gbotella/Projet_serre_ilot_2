/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 19 décembre 2019, 17:01
 */

#include <QApplication>
#include <QWidget>
#include "VueSerre.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    VueSerre *maVueSerre = new VueSerre();
    maVueSerre->show();
    
    maVueSerre->mettreAjour();

    return app.exec();
}
