// Lab1v10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 
// 
//10.	Создать класс типа «Односвязный список». 
//Функции-члены добавляют элемент к списку, (вставляем в начало списка)
//удаляют элемент из списка, (по значению)
//печатают элементы с начала списка. (весь список с начала)
//Найти элемент в списке. (по значению)
//
//Односвязный список - это динамическая структура данных, состоящая из узлов. 
//Каждый узел будет иметь какое-то значение и указатель на следующий узел.


#include <iostream>
#include "SinglyLinkedList.h"
#include "Message.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Message *message = new Message();
	message->viewBorder();
	SinglyLinkedList *singlyLinkedList = new SinglyLinkedList();
	message->viewMessageAdd();
	int valNode1 = 33;
	int valNode2 = 55;
	int valNode3 = 11;
	int valNode4 = 88;
	int valNode5 = 543;

	singlyLinkedList->addNode(valNode1);
	singlyLinkedList->viewSinglyLinkedList();
	singlyLinkedList->addNode(valNode2);
	singlyLinkedList->viewSinglyLinkedList();
	singlyLinkedList->addNode(valNode3);
	singlyLinkedList->viewSinglyLinkedList();
	singlyLinkedList->addNode(valNode4);
	singlyLinkedList->viewSinglyLinkedList();

	message->viewBorder();
	message->viewMessageExsist(valNode1);
	bool isExsist = singlyLinkedList->isNodeExsist(valNode1);
	message->viewMessageExsistResult(isExsist);
	message->viewMessageExsist(valNode5);
	isExsist = singlyLinkedList->isNodeExsist(valNode5);
	message->viewMessageExsistResult(isExsist);

	message->viewBorder();
	singlyLinkedList->viewSinglyLinkedList();
	message->viewMessageDelete(valNode2);
	singlyLinkedList->deleteFirstSearchNode(valNode2);
	singlyLinkedList->viewSinglyLinkedList();
	message->viewMessageDelete(valNode4);
	singlyLinkedList->deleteFirstSearchNode(valNode4);
	singlyLinkedList->viewSinglyLinkedList();
	message->viewMessageDelete(valNode1);
	singlyLinkedList->deleteFirstSearchNode(valNode1);
	singlyLinkedList->viewSinglyLinkedList();
	message->viewBorder();
	singlyLinkedList->~SinglyLinkedList();
}



