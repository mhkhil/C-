#include <iostream>
#include "../Program/Paint.h"
#include "../Program/Pencil.h"
#include "../Program/Brush.h"

int main()
{

#pragma region 추상 클래스
	// 특정한 구현되어 있지 않고, 선언되어 있는 클래스입니다.

	Paint* paint = nullptr;

	paint = new Pencil();

	paint->Draw();

	paint = new Brush();

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
	// 인스턴스로 생성할 수 없습니다.

#pragma endregion





	return 0;
}

