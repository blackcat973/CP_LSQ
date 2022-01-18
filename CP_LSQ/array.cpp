#include <iostream>
#include <array>

using namespace std;

// �پ��� ũ���� std::array ��ü�� ���� �����ϴ� �������� �迭 ��� �Լ��� ����� ����
// print()�� �Լ� ���ø����� �����ϰ�, �迭 ũ�⸦ ���ø� �Ű������� ����
template <size_t N>
void print(const array<int, N>& arr)	// ���� ���縦 ���� const��� 
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
	
	// index���� ��ȿ���� ���� ��츦 ���� ���ܹ߻�
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
	// ������ �迭�� ����.
	// Có�� �迭�� �Լ��� ������ �� ������ ������ ����Ѵٰų� ���� �Ǵ� ������ ������ ���� �ʾƵ� ��

	array<int, 5> arr = { 1,2,3,4,5 };
	print(arr);

	cout << endl;
	cout << endl;

	
}