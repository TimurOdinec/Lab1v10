#pragma once

/// <summary>
/// ����� ��� ������������ �������� - ��������� � �������
/// </summary>
class Message
{
private:
public:
	//����������� ��� ����������
	Message();
	//����� ������� ��������� � ������� "########"
	void viewBorder();
	//����� ������� ��������� � ������� "������� ��������..."
	void viewMessageAdd();
	//����� ������� ��������� � ������� "������� ����..."
	void viewMessageExsist(int);
	//����� ������� ��������� � ������� "��", ��� ������� ���� � "���", ��� ���������
	void viewMessageExsistResult(bool);
	//����� ������� ��������� � ������� "�������� ����..."
	void viewMessageDelete(int);
	//����������
	~Message();
};
