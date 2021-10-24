#include "Message.h"
#include <iostream>

/// <summary>
/// ����������� ��� ����������
/// </summary>
Message::Message() 
{
};
/// <summary>
/// ����� ������� ��������� � ������� "########"
/// </summary>
void Message::viewBorder() 
{
	std::cout << "#############################################################" << std::endl;
};
/// <summary>
/// ����� ������� ��������� � ������� "������� ��������..."
/// </summary>
void Message::viewMessageAdd()
{
	std::cout << "������� �������� � ������." << std::endl;
};
/// <summary>
/// ����� ������� ��������� � ������� "������� ����..." �������� valueNode
/// </summary>
/// <param name="valueNode"></param>
void Message::viewMessageExsist(int valueNode)
{
	std::cout << "������� ���� ������ �� ���������: "<< valueNode <<" - ";

};
/// <summary>
/// ����� ������� ��������� � ������� "��", ��� ������� ���� � "���", ��� ���������
/// </summary>
/// <param name="isExsist"></param>
void Message::viewMessageExsistResult(bool isExsist)
{
	if (isExsist)
	{
		std::cout << " ���� " << std::endl;
	}
	else
	{
		std::cout << " ��� " << std::endl;
	}
};
/// <summary>
/// ����� ������� ��������� � ������� "�������� ����..." �������� valueNode
/// </summary>
/// <param name="valueNode"></param>
void Message::viewMessageDelete(int valueNode)
{
	std::cout << "�������� ���� ������ �� ���������: "<< valueNode << std::endl;
};
/// <summary>
/// ����������
/// </summary>
Message::~Message()
{
};