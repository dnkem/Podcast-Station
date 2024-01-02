#include "PodcastPlayer.h"
#include <fstream>
#include <limits>
#include <iostream>

// #include <iostream>

// void AudioPlayer::look(){
//     cout<<"LISTENINGGGGG YOU"<<endl;
// }
// void VideoPlayer::look(){
//     cout<<"WATHCINGGGGG YOU"<<endl;
// }

void AudioPlayer::play(const Episode& e, ostream& ost){
    cout<<"In audio play func"<<endl;
    ost<<e.getAudio();
}
void VideoPlayer::play(const Episode& e, ostream& ost){
    ifstream infile;
    string text;
    cout<<"In video play func"<<endl;
    infile.open(e.getVideoFile());

    // std::string line;
    while(infile.is_open()){
        if (infile.eof()){
            false;
            infile.close();
        }
        else{
            getline(infile, text);
            cout<<endl;
            cout<<text;
        }
    }
    ost<<text;
}