#pragma once
class c_Smartphone
{
private:
	char* name;
	char* model;
	float screen_diagonal;
	char* screen_type;
	int ram;
public:
	c_Smartphone();
	c_Smartphone(const char* name, const char* model, float screen_diagonal, const char* screen_type, int ram);
	c_Smartphone(c_Smartphone& copy);
	c_Smartphone(c_Smartphone& paste, bool isPaste);

	//set
	void setName(const char* name);
	void setModel(const char* model);
	inline void setScreenDiagonal(float screen_diagonal) {
		this->screen_diagonal = screen_diagonal;
	}
	void setScreenType(const char* screen_type);
	inline void setRam(int ram) {
		this->ram = ram;
	}

	//get
	inline char* getName()const {
		return this->name;
	}
	inline char* getModel()const {
		return this->model;
	}
	inline float getScreenDiagonal()const {
		return this->screen_diagonal;
	}
	inline char* getScreenType()const {
		return this->screen_type;
	}
	inline int getRam()const {
		return this->ram;
	}
};

