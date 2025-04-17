#pragma once
#include <string>
#include <vector>
#include<map>
#include "User.h"
using namespace std;

class Student:public User {
private:
    string id;
    string UserName;
    string Password;
    vector<string> enrolledCourses;
    map<string, double>grades;

public:
    Student();
    Student(int id, string password, vector<string>enrolledCourses, map<string, double>grades);
    
    int getStudentID() const;
    string getName() const;
    vector<string> getEnrolledCourses() ;
    map<string, double> getGrades() ;

  
    void setStudentID(int id);
    void setName(const string& studentName);
    

};
