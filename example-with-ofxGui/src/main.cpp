#include "ofMain.h"
#include "ofApp.h"

#include "ofAppGLFWWindow.h"

//========================================================================
int main( ){
    ofGLWindowSettings settings;
    settings.setGLVersion(3, 2); // Using programmable renderer. Comment out this line to use the 'standard' GL renderer.

    settings.setSize(1024,768);

    shared_ptr<ofAppGLFWWindow> mainWindow = dynamic_pointer_cast<ofAppGLFWWindow>(ofCreateWindow(settings));
    shared_ptr<ofApp> mainApp(new ofApp);

    ofRunApp(mainWindow, mainApp);

    ofRunMainLoop();

    // done
    return EXIT_SUCCESS;

}
