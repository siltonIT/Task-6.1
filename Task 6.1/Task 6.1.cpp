#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void fill_group(struct student*, const int);
void output_group(struct student*, const int);
float determ_average_age(struct student*, const int, int);

struct student{
public:
	//использую стринги просто потому что они ни на что не влияют
	string surname;
	string name;
	string patronymic;
	string gender;
	int course;
	int age;
	float average_score;
};

int main()
{
	setlocale(LC_ALL, "");

	const int AMOUNT_STUD = 3;
	student group[AMOUNT_STUD];

	fill_group(group, AMOUNT_STUD);

	cout << "choice cource: " << endl;
	int coursce; cin >> coursce;

	cout << determ_average_age(group, AMOUNT_STUD, coursce);
}

//Функция ввода массива
void fill_group(struct student* group, const int AMOUNT_STUD)
{
	for (int i = 0; i < AMOUNT_STUD; ++i)
	{
		cout << "create student: " << endl;

		cout << "surname: " << endl;
		cin >> group[i].surname;

		cout << "name: " << endl;
		cin >> group[i].name;

		cout << "patronymic: " << endl;
		cin >> group[i].patronymic;

		cout << "gender: " << endl;
		cin >> group[i].gender;

		cout << "course: " << endl;
		cin >> group[i].course;

		cout << "age: " << endl;
		cin >> group[i].age;

		cout << "average_score: " << endl;
		cin >> group[i].average_score;
	}
}

//Функция вывод массива 
void output_group(struct student* group, const int AMOUNT_STUD)
{
	for (int i = 0; i < AMOUNT_STUD; ++i)
	{
		cout << group[i].surname << ' ';
		cout << group[i].name << ' ';
		cout << group[i].patronymic << ' ';
		cout << group[i].gender << ' ';
		cout << group[i].course << ' ';
		cout << group[i].age << ' ';
		cout << group[i].average_score << ' ';
		cout << endl;
	}
}

//Функция определяет средний возраст студентов n-ого курса 
float determ_average_age(struct student* group, const int AMOUNT_STUD, int course)
{
	float aver_age = 0;
	int amount_stud = 0;

	for (int i = 0; i < AMOUNT_STUD; ++i)
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