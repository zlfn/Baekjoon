#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
//개 뻘짓한 프로그램입니다. 쓰레기 코드 겁나 많음.

struct person
{
	bool is_person;
	int location;
	int number_of_Ham;
};

int findHam(vector<char>, int, int);
bool compare_Ham(person, person);
bool can_eat(vector<char>&,person, int);

int main()
{
	int length_of_table;
	int distance_of_choice;
	scanf("%d %d ",&length_of_table, &distance_of_choice);

	vector<char> table(length_of_table);
	vector<person> people(length_of_table);
	
	for(int i=0; i<length_of_table; i++)
	{
		char input;
		scanf("%c",&input);
		table[i] = input;
		people[i].is_person = (input=='P');
		people[i].location = i;
	}

	for(int i = 0; i<length_of_table; i++)
	{
		people[i].number_of_Ham = findHam(table, i, distance_of_choice);
		//각 자리에서 먹을 수 있는 햄버거의 수를 셉니다. (자기자신포함이지만 별로 중요하지 않음)
	}


	//sort(people.begin(), people.end(), compare_Ham);
	//people을 먹을 수 있는 햄버거 수가 적은 순서대로 정렬합니다. (햄버거수 같으면 앞자리 우선)

	int count = 0;
	for(person i: people)
	{
		if(can_eat(table, i, distance_of_choice)) count++;
		//정렬한대로 햄버거를 하나씩 먹입니다.
	}

	printf("%d",count);
}

int findHam(vector<char> table, int person, int distance_of_choice)
{
	//각 자리에서 먹을 수 있는 햄버거 개수를 셉니다.
	int count=0;
	int size_of_table = table.size();
	for(int i= person - distance_of_choice; i<=person+distance_of_choice; i++)
	{
		if(0<=i && i<size_of_table) if(table[i] == 'H') count++;
	}
	return count;
}
	
bool compare_Ham(person i, person j) 
{
	//sort에 사용하기 위한 compare함수입니다.
	if(i.number_of_Ham>j.number_of_Ham) return false;
	if(i.number_of_Ham==j.number_of_Ham)
	{
		if(i.location>j.location) return false;
		else return true;
	}
	return true;
}

bool can_eat(vector<char> &table, person wow, int distance_of_choice)
{
	if(wow.is_person == false) return false; //자리가 사람이 아니면 false
	for(int i= wow.location - distance_of_choice; i<=wow.location + distance_of_choice; i++)
	{
		if(table[i]=='H')
		{
			table[i] = 'E';
			return true;
			//햄버거를 먹으면 그 자리를 'H'에서 'E'로 바꾸고 true
		}
	}
	return false; //먹을 햄버거가 없으면 false
}
