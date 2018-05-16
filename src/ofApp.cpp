#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	string dataLocation;
	// dataLocation = "/home/icq4ever/oF/apps/myApps/oF0100HangulRenderTest/bin/data/";
	ofTrueTypeFontSettings setting("NotoSansCJK-Medium.ttc", 150);
	// ofTrueTypeFontSettings setting("Noto Sans CJK KR", 150);
	setting.antialiased = true;
	setting.dpi = 72;
	setting.addRanges(ofAlphabet::Korean);
	setting.addRanges(ofAlphabet::Latin);
	// setting.addRange(ofUnicode::CJKUnified);
	// setting.addRange(ofUnicode::LatinExtendedAdditional);
	kF.load(setting);

	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetHexColor(0xFFFFFF);

	// kF.load(setting);
	kF.drawString("1.가나다라 色はにほへど", 50, ofGetHeight()/2);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
