#include "HtmlParser.hpp"


DOMNode* HtmlParser::parse(const std::string& html) {
    DOMNode* root = new DOMNode{NODE_ELEMENT, "html", "", {}, {}};
    
    
    if (!html.empty()) {
        DOMNode* body = new DOMNode{NODE_ELEMENT, "body", "", {}, {}};
        DOMNode* textNode = new DOMNode{NODE_TEXT, "", html, {}, {}};
        body->children.push_back(textNode);
        root->children.push_back(body);
    }

    return root;
}
