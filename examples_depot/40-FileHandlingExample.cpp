

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Student{

    public:
        string name;
        int year;
        string branch;

        friend ofstream & operator << (ofstream &ofs, Student &s);

        friend ifstream & operator >> (ofstream &ofs, Student &s); 

        void display(){
            cout << "name: " << name << endl;
            cout << "year: " << year << endl;
            cout << "branch: " << branch << endl; 

        }
};

ofstream & operator << (ofstream & ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.year << endl; 
    ofs << s.branch << endl; 

    return ofs;
}

ifstream & operator >> (ifstream & ifs, Student &s)
{
    ifs >> s.name;
    ifs >> s.year;
    ifs >> s.branch; 

    return ifs;
}


int main(){
    Student s1;

    s1.name = "Kaya"; s1.year = 3; s1.branch = "CS"; // we can store the object itself instead of individual data members: serialization
    ofstream ofs("Student.txt", ios::trunc);
    
    /*before overriding*/ 
    // ofs << s1.name << endl; 
    // ofs << s1.year << endl; 
    // ofs << s1.branch << endl; 

    /*after overriding*/
    ofs << s1; 
    ofs.close();

    Student s2;

    ifstream ifs("Student.txt");

    ifs >> s2;

    ifs.close();

    s2.display();

    return 0;
}