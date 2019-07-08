#pragma once

#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();

private:
    ofxAssimpModelLoader model_loader_;
    ofEasyCam cam_;
};
