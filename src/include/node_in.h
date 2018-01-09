#ifndef ACTINIUM_NODE_IN_H_c6d4d071_3e05_4788_b325_5b9d81373e61
#define ACTINIUM_NODE_IN_H_c6d4d071_3e05_4788_b325_5b9d81373e61
extern "C"{
#include "../include/node.h"

class CActNodeIn:public CActNode
{
public:
    CActNodeIn();
    ~CActNodeIn();

    int PrintMe();

};

class CActNode *ActNewNode();

int ActDeleteNode(class CActNode *pNode);

}
#endif
