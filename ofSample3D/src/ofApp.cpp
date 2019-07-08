#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofSetFrameRate(30);
    ofSetBackgroundColor(0);

    if (!model_loader_.loadModel("model/12337_Statue_v1_l1.obj")) {
        std::cout << "##### load fail." << std::endl;
        return;
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    static float rotate = 0.f;
    //model_loader_.setRotation(2, rotate, 0, 0, 1);

    rotate += 0.2f;
}

//--------------------------------------------------------------
void ofApp::draw(){
    cam_.begin();
    cam_.setPosition(0.f, 500.f, 1000.f);
    cam_.lookAt(ofVec3f(0.f, 300.f, 0.f), ofVec3f(0.f, 1.f, 0.f));

    model_loader_.setPosition(0, 100, 0);
    model_loader_.setScale(1.f, 1.f, 1.f);

    model_loader_.disableTextures();
    glPointSize(.1f);
    model_loader_.drawVertices();

    //glLineWidth(.1f);
    //model_loader_.drawWireframe();

    cam_.end();
}
