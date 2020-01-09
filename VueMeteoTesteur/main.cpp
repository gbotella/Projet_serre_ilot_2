#include <QApplication>

#include "VueMeteo.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

   VueMeteo *maVueMeteo = new VueMeteo() ;
   maVueMeteo->show();

   maVueMeteo->mettreAjour();
    return app.exec();
}