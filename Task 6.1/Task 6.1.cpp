#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void create_students(struct student*, const int);
void print(struct student*, const int);
float determ_average_age(struct student*, const int, int);

struct student{
public:
	string surname;
	string first_name;
	string patronymic;
	string gender;
	int course;
	int age;
	float average_score;

};

int main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 3;
	student group[SIZE];

	create_students(group, SIZE);

	int coursce; cin >> coursce;

	cout << determ_average_age(group, SIZE, coursce);
}

void create_students(struct student* group, const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		cin >> group[i].surname;
		cin >> group[i].first_name;
		cin >> group[i].patronymic;
		cin >> group[i].gender;
		cin >> group[i].course;
		cin >> group[i].age;
		cin >> group[i].average_score;
	}
}

void print(struct student* group, const int SIZE)
{
	for (int i = 0; i < SIZE; ++i)
	{
		cout << group[i].surname << ' ';
		cout << group[i].first_name << ' ';
		cout << group[i].patronymic << ' ';
		cout << group[i].gender << ' ';
		cout << group[i].course << ' ';
		cout << group[i].age << ' ';
		cout << group[i].average_score << ' ';
		cout << endl;
	}
}

float determ_average_age(struct student* group, const int SIZE, int course)
{
	float aver_age = 0;
	int amount_stud = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		if (group[i].course == course)
		{
			aver_age += group[i].age;
			++amount_stud;
		}
	}

	aver_age /= amount_stud;
	
	return aver_age;
}


/*
Лазарук 
Сергей 
Евгеньевич 
мужской 
1 
20 
7.0
Артем 
Павлович 
Дмитревич 
мужской 
2 
19 
5.0
Александр 
Карней 
Александрович 
мужской
1 
17 
7.5 
*/