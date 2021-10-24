#pragma once
#include "NodeList.h"

/// <summary>
/// класс типа ќƒЌќ—¬я«Ќџ… —ѕ»—ќ 
/// </summary>
class SinglyLinkedList
{
private:
	NodeList *nodeHead;	//указатель на начало списка
public:
	//конструктор без параметров
	SinglyLinkedList();
	//метод добавл€ет узел в начало списка, со значением int
	void addNode(int);
	//метод выводит значени€ int узлов списка, через ";"
	void viewSinglyLinkedList();
	//метод возвращает true, как только находит (первый) узел со значением int
	bool isNodeExsist(int);
	//метод удал€ет узел списка (первый от начала), значение которого равно int
	void deleteFirstSearchNode(int);
	//деструктор
	~SinglyLinkedList();
};