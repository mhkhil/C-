#include <iostream>
#include "../Program/Zergling.h"
#include "../Program/Hydralisk.h"

using namespace std;

void Beacon(Zerg& zerg)
{
	zerg.Recovery();
}

template<typename T>
class List
{
private:
	int size;

	T* pointer;

	int i = 0;

public:
	List(int size)
	{
		this->size = size;
		pointer = new T[this->size];
	}

	void Add(T data)
	{
		pointer[i] = data;

		i++;

		if (i > size)
		{
			cout << "데이터공간이 없습니다." << endl;
		}
	}

	~List()
	{
		delete pointer;
	}
};

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
	// 타입들을 가질 수 있는 기술에 중점을 두어 재사용을 높일 수
	// 있는 기능입니다.

	List<int> list(5);

#pragma endregion
#pragma region 업 캐스팅
	// Zergling zergling;
	// Hydralisk hydralisk;
	// 
	// zergling.OnDamage(10);
	// hydralisk.OnDamage(15);
	// 
	// cout << zergling.Health() << endl;
	// cout << hydralisk.Health() << endl;
	// 
	// Beacon(zergling);
	// Beacon(hydralisk);
	// 
	// cout << zergling.Health() << endl;
	// cout << hydralisk.Health() << endl;

#pragma endregion


	return 0;
}

