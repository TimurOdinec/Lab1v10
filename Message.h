#pragma once

/// <summary>
/// класс для формирования объектов - сообщений в консоли
/// </summary>
class Message
{
private:
public:
	//конструктор без параметров
	Message();
	//метод выводит сообщение в консоль "########"
	void viewBorder();
	//метод выводит сообщение в консоль "Добавим элементы..."
	void viewMessageAdd();
	//метод выводит сообщение в консоль "Наличие узла..."
	void viewMessageExsist(int);
	//метод выводит сообщение в консоль "ДА", при наличии узла и "НЕТ", при отсутсвии
	void viewMessageExsistResult(bool);
	//метод выводит сообщение в консоль "Удаление узла..."
	void viewMessageDelete(int);
	//деструктор
	~Message();
};
