#include "Podcast.h"
Podcast::~Podcast(){
    for (int i=0; i<eps.getSize(); i++){
        delete eps[i];
    }
}

bool Podcast::equals(const string& t){
    return t == title;
}
Episode* Podcast::get(const int index){
    return eps.get(index);       // segfault within recursion
}
int Podcast::getSize(){
    return eps.getSize();
}
void Podcast::add(Episode* e){
    eps += e;
    // int num = getSize();
    // eps += e;
    // return (num == getSize());
}
void Podcast::print(ostream& ost) const {
    ost<<title<<endl<<host;
}
void Podcast::printWithEpisodes(ostream& os) const{
    print(os);
    os<<endl;
    for (int i=0; i<eps.getSize(); ++i){
        os<<*eps[i];
    }
}

ostream& operator<<(ostream& output, Podcast& p)
{
  p.print(output);
  return output;
}