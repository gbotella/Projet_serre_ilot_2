#include "VueMeteo.h"

#include <iostream>

VueMeteo::VueMeteo() {
    widget.setupUi(this);
}

VueMeteo::~VueMeteo() {
}

void VueMeteo::mettreAjour() {
    widget.vitesseVent->setText("69");
    widget.temperature->setText("420");
}
