#include "coprimes.h"


CoprimeTree::treeNode::treeNode() {
}

void CoprimeTree::treeNode::generate(int depth) {
    if (!this->parent && !this->root)
        throw "Orphaned node not marked as root";
    const int vals[3][2] = {
        {
            (2L * this->value[0]) - this->value[1],
            this->value[0]
        },
        {
            (2L * this->value[0]) + this->value[1],
            this->value[0]
        },
        {
            this->value[0] + (2L * this->value[1]),
            this->value[1]
        }
    };
    for (int i = 0; i < 3; i++) {
        treeNode* node = new treeNode();
        node->root = false;
        node->children = {};
        node->parent = this;
        node->value[0] = (unsigned long)vals[i][0];
        node->value[1] = (unsigned long)vals[i][1];
        this->children.push_back(node);
    }
    if (depth != 0)
        for (treeNode* child : children)
            child->generate(depth - 1);
}
void CoprimeTree::treeNode::get_leaves(std::vector<unsigned long[2]>* out_vector) {
    if (this->children.size() != 0) {
        for (treeNode* child : children) {
            child->get_leaves(out_vector);
        }
    } else {
        out_vector->push_back(this->value);
    }
}
void CoprimeTree::treeNode::get_all(std::vector<unsigned long[2]>* out_vector) {

}

CoprimeTree::CoprimeTree(TreeType treeType) {
    root.root = true;
    root.children = {};
    root.parent = nullptr;
    if (treeType == EVEN_ODD) {
        const int initval[2] = {2, 1};
        root.value[0] = (unsigned long) 2;
        root.value[1] = (unsigned long) 1;
    }
    else if (treeType == ODD_ODD) {
        root.value[0] = (unsigned long) 3;
        root.value[1] = (unsigned long) 1;
    }
}