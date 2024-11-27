#pragma once
#include <vector>

class CoprimeTree {
    struct treeNode {
        friend class CoprimeTree;

        bool root;
        std::vector<treeNode*> children;//TODO can be treeNode*[3]
        treeNode* parent;
        unsigned long value[2];
        void generate(int depth);
        void get_leaves(std::vector<unsigned long[2]>* out_Vector);//TODO replace with std::array
        void get_all(std::vector<unsigned long[2]>* out_vector);//TODO replace with std::array
    private:
        treeNode();
        ~treeNode();
    };
public:
    enum TreeType {
        EVEN_ODD,
        ODD_ODD
    };
    CoprimeTree(TreeType type);
    CoprimeTree(TreeType type, int pregenDepth);
    ~CoprimeTree();
    void pregen(int num);
    CoprimeTree::treeNode root;
};