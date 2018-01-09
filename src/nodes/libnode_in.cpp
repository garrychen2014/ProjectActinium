#include <stdio.h>

#include "../include/node_in.h"
#include "../include/debug.h"

class CActNode *ActNewNode()
{
    class CActNodeIn *pNode = new class CActNodeIn();
    return (class CActNode *)pNode;
}

int ActDeleteNode(class CActNode *pNode)
{
    delete (class CActNodeIn *)pNode;
    return 0;
}




CActNodeIn::CActNodeIn():CActNode()
{

}

CActNodeIn::~CActNodeIn()
{
    
}

int CActNodeIn::PrintMe()
{
    ACTDBG_INFO("I'm NodeIn.\n")
    return 0;
}
