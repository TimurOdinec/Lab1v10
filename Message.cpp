#include "Message.h"
#include <iostream>

/// <summary>
/// конструктор без параметров
/// </summary>
Message::Message() 
{
};
/// <summary>
/// метод выводит сообщение в консоль "########"
/// </summary>
void Message::viewBorder() 
{
	std::cout << "#############################################################" << std::endl;
};
/// <summary>
/// метод выводит сообщение в консоль "Добавим элементы..."
/// </summary>
void Message::viewMessageAdd()
{
	std::cout << "Добавим элементы в список." << std::endl;
};
/// <summary>
/// метод выводит сообщение в консоль "Наличие узла..." значение valueNode
/// </summary>
/// <param name="valueNode"></param>
void Message::viewMessageExsist(int valueNode)
{
	std::cout << "Наличие узла списка со значением: "<< valueNode <<" - ";

};
/// <summary>
/// метод выводит сообщение в консоль "ДА", при наличии узла и "НЕТ", при отсутсвии
/// </summary>
/// <param name="isExsist"></param>
void Message::viewMessageExsistResult(bool isExsist)
{
	if (isExsist)
	{
		std::cout << " ЕСТЬ " << std::endl;
	}
	else
	{
		std::cout << " НЕТ " << std::endl;
	}
};
/// <summary>
/// метод выводит сообщение в консоль "Удаление узла..." значение valueNode
/// </summary>
/// <param name="valueNode"></param>
void Message::viewMessageDelete(int valueNode)
{
	std::cout << "Удаление узла списка со значением: "<< valueNode << std::endl;
};
/// <summary>
/// деструктор
/// </summary>
Message::~Message()
{
};