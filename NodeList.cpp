#include "NodeList.h"
#include <iostream>

/// <summary>
/// ����������� ��� ����������
/// </summary>
NodeList::NodeList()
{
	//std::cout << "constructor NodeList()" << std::endl;
	NodeList::valueNode = 0;
	NodeList::nodeNext = NULL;
}
/// <summary>
/// ����������� � ��������� �������� ���� int
/// </summary>
/// <param name="valueNode"></param>
NodeList::NodeList(int valueNode) //:nodeNext(NULL)
{
	//std::cout << "constructor NodeList(int valueNode)" << std::endl;
	NodeList::valueNode = valueNode;
	nodeNext = NULL;
}
/// <summary>
/// ����� ��������� ��������� �� ��������� ���� (������������ ��������)
/// </summary>
/// <returns></returns>
NodeList* NodeList::getNodeNext()
{
	//std::cout << "getNodeNext()" << std::endl;
	return this->nodeNext;
}
/// <summary>
/// ����� ��������� ��������� �� ��������� ���� (������� ����) �� ���������� ����� (���������)
/// </summary>
/// <param name="nodeNext"></param>
void NodeList::setNodeNext(NodeList *nodeNext)
{
	//std::cout << "setNodeNext()" << std::endl;
	NodeList::nodeNext = nodeNext;
}
/// <summary>
/// ����� ��������� �������� ���� (������� ����)
/// </summary>
/// <returns></returns>
int NodeList::getValueNode()
{
	return this->valueNode;
}
/// <summary>
/// ����������
/// </summary>
NodeList::~NodeList()
{
	std::cout << "destructor ~NodeList()" << std::endl;
}