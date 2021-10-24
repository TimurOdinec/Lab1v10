#include "NodeList.h"
#include <iostream>

/// <summary>
/// конструктор без параметров
/// </summary>
NodeList::NodeList()
{
	//std::cout << "constructor NodeList()" << std::endl;
	NodeList::valueNode = 0;
	NodeList::nodeNext = NULL;
}
/// <summary>
/// конструктор с передачей значения узла int
/// </summary>
/// <param name="valueNode"></param>
NodeList::NodeList(int valueNode) //:nodeNext(NULL)
{
	//std::cout << "constructor NodeList(int valueNode)" << std::endl;
	NodeList::valueNode = valueNode;
	nodeNext = NULL;
}
/// <summary>
/// метод получения указателя на следующий узел (относительно текущего)
/// </summary>
/// <returns></returns>
NodeList* NodeList::getNodeNext()
{
	//std::cout << "getNodeNext()" << std::endl;
	return this->nodeNext;
}
/// <summary>
/// метод установки указателя на следующий узел (текущий узел) на переданный адрес (указатель)
/// </summary>
/// <param name="nodeNext"></param>
void NodeList::setNodeNext(NodeList *nodeNext)
{
	//std::cout << "setNodeNext()" << std::endl;
	NodeList::nodeNext = nodeNext;
}
/// <summary>
/// метод получения значения узла (текущий узел)
/// </summary>
/// <returns></returns>
int NodeList::getValueNode()
{
	return this->valueNode;
}
/// <summary>
/// деструктор
/// </summary>
NodeList::~NodeList()
{
	std::cout << "destructor ~NodeList()" << std::endl;
}