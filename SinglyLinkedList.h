#pragma once
#include "NodeList.h"

/// <summary>
/// ����� ���� ����������� ������
/// </summary>
class SinglyLinkedList
{
private:
	NodeList *nodeHead;	//��������� �� ������ ������
public:
	//����������� ��� ����������
	SinglyLinkedList();
	//����� ��������� ���� � ������ ������, �� ��������� int
	void addNode(int);
	//����� ������� �������� int ����� ������, ����� ";"
	void viewSinglyLinkedList();
	//����� ���������� true, ��� ������ ������� (������) ���� �� ��������� int
	bool isNodeExsist(int);
	//����� ������� ���� ������ (������ �� ������), �������� �������� ����� int
	void deleteFirstSearchNode(int);
	//����������
	~SinglyLinkedList();
};