#include <iostream>
#include <array>

using namespace std;

// 다양한 크기의 std::array 객체에 대해 동작하는 범용적인 배열 출력 함수를 만들기 위해
// print()를 함수 템플릿으로 선언하고, 배열 크기를 템플릿 매개변수로 전달
template <size_t N>
void print(const array<int, N>& arr)	// 얕은 복사를 위해 const사용 
{
	//for (auto element : arr)
	//	cout << element << ' ';
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		auto element = (*it);
		cout << element << ' ';
	}

}


int main()
{
	std::array<int, 10> arr1;

	arr1[0] = 1;
	cout << "The first element of arr1: " << arr1[0] << endl;

	array<int, 4> arr2 = { 1,2,3,4 };
	cout << "all elements of arr2: ";

	for (int i = 0; i < arr2.size(); i++)
		cout << arr2[i] << " ";
	cout << endl;

	array<int, 4> arr3 = { 1,2,3,4 };

	cout << endl;
	
	// index값이 유효하지 않을 경우를 위한 예외발생
	try 
	{
		cout << arr3.at(3) << endl;
		cout << arr3.at(4) << endl;
	}
	catch (const out_of_range& ex)
	{
		cerr << ex.what() << endl;
	}


	cout << endl;
	// 다차원 배열을 전달.
	// C처럼 배열을 함수에 전달할 때 포인터 연산을 사용한다거나 참조 또는 역참조 연산을 하지 않아도 됨

	array<int, 5> arr = { 1,2,3,4,5 };
	print(arr);

	cout << endl;
	cout << endl;

	
}