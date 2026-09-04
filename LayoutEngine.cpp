#include "LayoutEngine.hpp"

LayoutBox* LayoutEngine::generateLayout(DOMNode* root, float screenWidth, float screenHeight) {
    if (!root) return nullptr;

    
    LayoutBox* rootBox = new LayoutBox{0, 0, screenWidth, screenHeight, root, {}};

    

    return rootBox;
}
