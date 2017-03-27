#include <iostream>
#include "dateClass.h"

date::date(int y,int m,int d){setdate(y,m,d);}
void date::setdate(int y,int m,int d){yr=y; mnth=m; day=d;}
int date::getyr() const{return yr;}
int date::getmnth() const{return mnth;}
int date::getday() const{return day;}
void printdate(const date &dt){ std::cout<< dt.getyr() << '/'<< dt.getmnth() <<'/'<<dt.getday()<<'\n';}


