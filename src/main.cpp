/**
 * \file main.cpp
 * \author Stephane Boulanger
 * \version 0.1
 * \date 2022-04-06
 * \copyright Copyright (c) 2022
 */

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	
	ofRunApp(new ofApp());
    ofGLWindowSettings settings;
    settings.setGLVersion(4, 1);
    ofCreateWindow(settings);


    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofRunApp(new ofApp());

}
