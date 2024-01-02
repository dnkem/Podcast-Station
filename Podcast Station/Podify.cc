#include "Podify.h"

Podify::~Podify(){
    for (int i=0; i<pods.getSize(); i++){
        delete pods[i];
    }
}

void Podify::addPodcast(Podcast* p){
    pods += p;
}
void Podify::addEpisode(Episode* e, string podCastTitle){
    // cout<<"IN ADD EPISODE";
    for (int i=0; i<pods.getSize(); i++){
        if (pods[i]->equals(podCastTitle)){
            pods[i]->add(e);
            return;
        }
    }
}
const Array<Podcast*>& Podify::getPodcasts(){
    return pods;
}

Podcast* Podify::getPodcast(int index){
    return pods[index];
}
Podcast* Podify::getPodcast(string podT){
    for (int i=0; i<pods.getSize(); i++){
        if (podT == pods[i]->get(i)->getEpisodeTitle()){
            return pods[i];
        }
    }
    exit(1);
}
void Podify::getEpisodes(Search& search, Array<Episode*>& arr){
    // Search* sPtr = &search;
    for (int i=0; i<pods.getSize(); i++){
        for (int j=0; j<pods[i]->getSize(); j++){
            if (search.matches(pods[i]->get(j))){
                arr += pods[i]->get(j);
            }
        }
    }
}

// void Podify::print(ostream& os){
//     for (int i=0; i< pods.getSize(); i++){
//         os<<pods[i];
//     }
// }

// ostream& Podify::operator<<(ostream& os){
//     for (int i=0; i< pods.getSize(); i++){
//         os<<pods[i];
//     }
// }
