/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 19 décembre 2019, 18:16
 */

#include <QApplication>
#include <iostream>

#include "VuePrincipale.h"
using namespace std;
int main(int argc, char *argv[]) {
    
    

    QApplication app(argc, argv);
    VuePrincipale *VP = new VuePrincipale;
    VP ->show();
    
    cout<<"dembele"<<endl;
    // create and show your widgets here

    return app.exec();
}
