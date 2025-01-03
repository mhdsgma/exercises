/*
Programmieraufgabe am Rechner
In einer Textdatei sind die Informationen zu Noten von Studierenden enthalten.
Jede Zeile der Datei enthält Namen, Vorlesung und Note, z.B.
Alice PROG1 1.0
Bob PROG1 2.3
Alice PROG2 1.7
Bob TOP 1.0
Cecile STAT 3.3
Bob STAT 1.7
...
Erstellen Sie ein C++-Programm das
• als Argument den Dateinamen erhält
• diese Datei einliest
• und pro Vorlesung und pro Namen
◦ die Durchschnittsnote und
◦ die Anzahl der darin eingegangenen Werte ausgibt:
Vorlesungen
PROG1 1.65 2
PROG2 1.70 1
TOP 1.00 1

Studierende
Alice 1.35 2
Bob 1.65 2
• für die Daten einer Zeile ist eine eigene Klasse zu erstellen
• die Attribute der Klasse sind privat zu halten
• der überladene Input-Operator dieser Klasse ist für das Einlesen zu verwenden
• Vorlesung und Namen der Studierenden sind bei der Ausgabe alphabetisch zu
sortieren
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Daten
{
    string name;
    string course;
    double grade;

public:
    Daten() : name(""), course(""), grade(0.0) {}

    friend istream &operator>>(istream &is, Daten &oData)
    {
        is >> oData.name >> oData.course >> oData.grade;
        return is;
    }

    string getName() const
    {
        return name;
    }

    string getCourse() const
    {
        return course;
    }

    double getGrade() const // Methode korrekt benannt
    {
        return grade;
    }
};

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cerr << "Dem Programm muss genau eine Datei uebergeben werden." << endl;
        return 0;
    }

    string filename = argv[1];
    ifstream inputFile(filename);

    if (!inputFile)
    {
        cerr << "Datei konnte nicht geöffnet werden." << endl;
        return 0;
    }

    vector<Daten> dataset;
    Daten datatemp;
while (inputFile >> datatemp)
    {
        dataset.push_back(datatemp);
    }

    inputFile.close(); // Datei schließen

    if (dataset.empty())
    {
        cerr << "Die Datei enthält keine gültigen Daten." << endl;
        return 0;
    }

    map<string, pair<double, int>> students; // Name, Notensumme, Kursanzahl
    map<string, pair<double, int>> lectures; // Kurs, Notensumme, Studentenanzahl

    for (const auto &d : dataset)
    {
        students[d.getName()].first += d.getGrade();
        students[d.getName()].second++;

        lectures[d.getCourse()].first += d.getGrade();
        lectures[d.getCourse()].second++;
    }

    cout << "\nStudenten\n----------" << endl;
    vector<string> sortedStudents;
    for (const auto &pair : students)
    {
        sortedStudents.push_back(pair.first);
    }
    sort(sortedStudents.begin(), sortedStudents.end());

    for (const auto &student : sortedStudents)
    {
        auto [totalGrade, count] = students[student];
        cout << student << " " << (totalGrade / count) << " " << count << endl;
    }

    cout << "\nVorlesungen\n------------" << endl;
    vector<string> sortedLectures;
    for (const auto &pair : lectures)
    {
        sortedLectures.push_back(pair.first);
    }
    sort(sortedLectures.begin(), sortedLectures.end());

    for (const auto &lecture : sortedLectures)
    {
        auto [totalGrade, count] = lectures[lecture];
        cout << lecture << " " << (totalGrade / count) << " " << count << endl;
    }

    return 0;
}