#pragma once
#include <string>
#include <vector>
#include <map>

enum NodeType { NODE_TEXT, NODE_ELEMENT };

struct DOMNode {
    NodeType type;
    std::string tagName;
    std::string textContent;
    std::map<std::string, std::string> attributes;
    std::vector<DOMNode*> children;

    ~DOMNode() {
        for (auto child : children) {
            delete child;
        }
    }
};

class HtmlParser {
public:
    static DOMNode* parse(const std::string& html);
};
