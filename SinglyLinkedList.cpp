#include "SinglyLinkedList.h"
#include <iostream>

/// <summary>
/// конструктор без параметров
/// </summary>
SinglyLinkedList::SinglyLinkedList()
{
	//std::cout << "constructor SinglyLinkedList()" << std::endl;
	nodeHead = NULL;
}
/// <summary>
/// метод добавляет узел в начало списка, со значением int
/// </summary>
/// <param name="nodeList"></param>
void SinglyLinkedList::addNode(int valueNode)
{
	//std::cout << "addNode()" << std::endl;
	NodeList *nodeList = new NodeList(valueNode);
	nodeList->setNodeNext(nodeHead);
	nodeHead = nodeList;
}
/// <summary>
/// метод выводит значения int узлов списка, через ";"
/// </summary>
void SinglyLinkedList::viewSinglyLinkedList()
{
	//std::cout << "viewSinglyLinkedList()" << std::endl;
	std::cout << "Односвязный список: ";
	NodeList* node = nodeHead;
	while (node != NULL)
	{
		//std::cout << "		valueNode="<< node->getValueNode() << std::endl;
		std::cout << node->getValueNode() << "; ";
		node = node->getNodeNext();
	}
	std::cout << std::endl;
}
/// <summary>
/// метод возвращает true, как только находит (первый) узел со значением int
/// </summary>
/// <param name="valueNode"></param>
/// <returns></returns>
bool SinglyLinkedList::isNodeExsist(int valueNode)
{
	//std::cout << "isNodeExsist()" << std::endl;
	bool isNodeExsist = false;
	//std::cout << "search valueNode=" << valueNode << std::endl;
	NodeList* node = nodeHead;
	while (node != NULL)
	{
		if (node->getValueNode() == valueNode)
		{
			isNodeExsist = true;
			break;
		}
		node = node->getNodeNext();
	}
	return isNodeExsist;
}
/// <summary>
/// метод удаляет узел списка (первый от начала), значение которого равно int
/// </summary>
/// <param name="valueNode"></param>
void SinglyLinkedList::deleteFirstSearchNode(int valueNode)
{
	//std::cout << "deleteFirstSearchNode()" << std::endl;
	if (isNodeExsist(valueNode))
	{
		NodeList* node = nodeHead;
		NodeList* previousNode = NULL;
		NodeList* nextNode = NULL;
		while (node != NULL)
		{
			//std::cout << "		valueNode=" << node->getValueNode() << std::endl;
			if (node->getValueNode() == valueNode)
			{
				if (node == nodeHead)
				{
					nextNode = node->getNodeNext();
					nodeHead = nextNode;
				}
				else
				{
					nextNode = node->getNodeNext();
					previousNode->setNodeNext(nextNode);
				}
				break;
			}
			previousNode = node;
			node = node->getNodeNext();
		}
	}
}
/// <summary>
/// деструктор
/// </summary>
SinglyLinkedList::~SinglyLinkedList()
{
	//std::cout << "destructor ~SinglyLinkedList()" << std::endl;
}
