List of Files Provided: 
    Controller.cc & Controller.h
    defs.h
    main.cc
    Makefile
    test.cc
    TestControl.cc & TestControl.h
    Tester.h & Tester.cc
    View.h & View.cc
    README.txt
    Array.h
    Episode.cc & Episode.h
    Podcast.cc & Podcast.h
    PodcastFactory.cc & PodcastFactory.h
    PodcastPlayer.cc & PodcastPlayer.h
    Podify.cc & Podify.h
    Search.cc & Search.h


Program Description: 
    There's a podcast network named Podify. This network contains Podcasts with Episodes. There's also a Search object
    that matches Episodes and they're put into a playlist. Episodes can be played in the playlist. When playing Episodes, 
    a video element with ASCII art is an option or you can also play without and play the audio.
    These Podcasts, Episodes, and Search objects are made in the a PodcastFactory.
    
Compilation and Execution Instructions:
    Compiling is all done by the Makefile. To use it, type "make" into your terminal at the "a4"
    folder level. There you will get an executable. Next, type in "./a4" to test the Control.cc that I made, or
    type "./test" to use the given inputs to test. There you can test any of the features by entering a number, 1 through 7 for "./a4",
    and 1 through 7 for "./test" and exit via entering 0.
    EXTRA: To clear your .o files to late compile freshly, enter "make clean".
