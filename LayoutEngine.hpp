#pragma once
#include "HtmlParser.hpp"

struct LayoutBox {
    float x, y, width, height;
    DOMNode* node;
    std::vector<LayoutBox*> children;

    ~LayoutBox() {
        for (auto child : children) delete child;
    }
};

class LayoutEngine {
public:
    static LayoutBox* generateLayout(DOMNode* root, float screenWidth, float screenHeight);
};
