#include <iostream>
#include<string.h>
using namespace std;

class Directory
{
protected:
    string personName,dateOfBirth;
public:
    string setPersonInfo(string pn, string db)
    {
        personName=pn;
        return personName;
        dateOfBirth=db;
        return dateOfBirth;
    }
    void displayInfo()
    {
        cout<<"Name: "<<personName<<endl;
        cout<<"Birth Date: "<<dateOfBirth<<endl;
    }

};

class NationalDirectory
{
protected:
    int personAge;
    string personCity;
public:
    int setPersonAge(int age)
    {
        personAge=age;
        return personAge;
    }
    string setPersonCity(string city)
    {
        personCity=city;
        return personCity;
    }
    void displayNationalInfo()
    {
        cout<<"Age: "<<personAge<<endl;
        cout<<"City: "<<personCity<<endl;
    }
};

class LocalDirectory
{
protected:
    string personAddress;
    string personTelNo;
    string personLocalArea;
    double zipCode;
public:
    string setPersonAddress(string address)
    {
        personAddress=address;
        return personAddress;
    }
    string setPersonTelNo(string telNo)
    {
        personTelNo=telNo;
        return personTelNo;
    }
    string setPersonLocalArea(string Larea)
    {
        personLocalArea=Larea;
        return personLocalArea;
    }
    double setPersonZipcode(double zc)
    {
        zipCode=zc;
        return zipCode;
    }
    void displayLocalInfo()
    {
        cout<<"Address: "<<personAddress<<endl;
        cout<<"Telephone: "<<personTelNo<<endl;
        cout<<"Local Area: "<<personLocalArea<<endl;
        cout<<"Zip Code: "<<zipCode<<endl;
    }

};

class Profession:public LocalDirectory,public NationalDirectory,public Directory
{
protected:
    string personProfession;
    string personInstitution;
    string personGrade;
    double personSalary;
public:
    string setPersonProfession(string prof)
    {
        personProfession=prof;
        return personProfession;
    }
    string setPersonInstitution(string inst)
    {
        personInstitution=inst;
        return personInstitution;
    }
    string setPersonGrade(string Pgrade)
    {
        personGrade=Pgrade;
        return personGrade;
    }
    double setPersonSalary(double s)
    {
        personSalary=s;
        return personSalary;
    }
    void DisplayProfession()
    {
        cout<<"Profession: "<<personProfession<<endl;
        cout<<"Institution: "<<personInstitution<<endl;
        cout<<"Grade: "<<personGrade<<endl;
        cout<<"Salary: "<<personSalary<<endl;
    }
};

int main ()
{
    Profession person;
    person.setPersonInfo("S Ahmed", "24/07/1968");
    person.displayInfo();
    person.setPersonAge(45);
    person.setPersonCity("Dhaka");
    person.displayNationalInfo();
    person.setPersonAddress("House-3,Road 118");
    person.setPersonTelNo("017542140");
    person.setPersonLocalArea("Gulshan 2");
    person.setPersonZipcode(1211);
    person.displayLocalInfo();
    person.setPersonProfession("Lecturer");
    person.setPersonInstitution("AIUB");
    person.setPersonGrade("Band-6");
    person.setPersonSalary(5000.00);
    person.DisplayProfession();
}
