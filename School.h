#pragma once
#include "Info.h"

class School {
private:
	Info* head;

public:
	School();
	void addClass(Info* info);
	void removeClass(char* classs);
	void changeClass(char* classs);
	void printAllClasses();

	void initFromFile(char* file);
	void saveToFile(char* file);

	Info* getLast();

	Info* findByClass(char* classs);
	Info* findByClasshead(char* classhead);
	Info* findByTeacher(char* teacher);

	char* getClasss() {
		return getClasss();
	}
	char* getClasshead() {
                return getClasshead();
        }
	char* getAverageMark() {
                return getAverageMark();
        }
	char* getTeacher() {
                return getTeacher();
        }
	char* getStudentsNumber() {
                return getStudentsNumber();
        }

};

ostream& operator<<(ostream& out, Info* info) {
	return (out<<"("<<info.getClasss","<<info.getClasshead<<","<<info.getAverageMark<<","<<info.getTeacher<<","<<info.getStudentsNumber<<")");
}

istream& operator>>(istream& in, Info* info) {
        return(in>>info.getClasss>>info.getClasshead>>info.getAverageMark>>info.getTeacher>>info.getStudentsNumber);
}
