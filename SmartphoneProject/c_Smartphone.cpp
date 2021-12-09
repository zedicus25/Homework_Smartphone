#include "c_Smartphone.h"
#include <iostream>
c_Smartphone::c_Smartphone()
{
	this->name = nullptr;
	this->model = nullptr;
	this->screen_diagonal = 0;
	this->screen_type = nullptr;
	this->ram = 0;
}

c_Smartphone::c_Smartphone(const char* name, const char* model, float screen_diagonal, const char* screen_type, int ram)
{
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name)+1, name);

	this->model = new char[strlen(model)+1];
	strcpy_s(this->model, strlen(model)+1, model);

	this->screen_diagonal = screen_diagonal;

	this->ram = ram;

	this->screen_type = new char[strlen(screen_type)+1];
	strcpy_s(this->screen_type, strlen(screen_type)+1, screen_type);
}

c_Smartphone::c_Smartphone(c_Smartphone& copy)
{
	this->name = new char[strlen(copy.getName())+1];
	strcpy_s(this->name, strlen(copy.getName())+1, copy.getName());

	this->model = new char[strlen(copy.getModel())+1];
	strcpy_s(this->model, strlen(copy.getModel())+1, copy.getModel());

	this->screen_diagonal = copy.getScreenDiagonal();

	this->ram = copy.getRam();

	this->screen_type = new char[strlen(copy.getScreenType())+1];
	strcpy_s(this->screen_type, strlen(copy.getScreenType())+1, copy.getScreenType());
}

c_Smartphone::c_Smartphone(c_Smartphone& paste, bool isPaste)
{
	this->name = new char[strlen(paste.getName())+1];
	strcpy_s(this->name, strlen(paste.getName())+1, paste.getName());

	this->model = new char[strlen(paste.getModel())+1];
	strcpy_s(this->model, strlen(paste.getModel())+1, paste.getModel());

	this->screen_diagonal = paste.getScreenDiagonal();

	this->ram = paste.getRam();

	this->screen_type = new char[strlen(paste.getScreenType())+1];
	strcpy_s(this->screen_type, strlen(getScreenType())+1, getScreenType());

	paste.setName(nullptr);
	paste.setModel(nullptr);
	paste.setScreenDiagonal(0);
	paste.setScreenType(nullptr);
	paste.setRam(0);
}

void c_Smartphone::setName(const char* name)
{
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name)+1, name);
}

void c_Smartphone::setModel(const char* model)
{
	this->model = new char[strlen(model)+1];
	strcpy_s(this->model, strlen(model)+1, model);
}

void c_Smartphone::setScreenType(const char* screen_type)
{
	this->screen_type = new char[strlen(screen_type)+1];
	strcpy_s(this->screen_type, strlen(screen_type)+1, screen_type);
}
