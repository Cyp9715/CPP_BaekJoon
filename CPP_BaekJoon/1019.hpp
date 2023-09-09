#include <iostream>
#include <vector>
#include <math.h>
#include <string>

// ������
void counting(int N);

// �������� ���� �� ���ں� �󵵼��� �����ϴ� Ŭ����.
class NumberFrequency
{
public:
	std::vector<std::vector<int>> GetFrequency(const std::vector<int>& numbers);

private:
	// F �� ��ü�� GetAboveF() + 1 
	long long GetAbove(int F, int B);

	// except for zero
	long long GetUnder(int F, int B);

	long long GetZero(int F, int B);
};


// �� ���ں� �󵵼��� �����ϱ� ���� Ŭ����.
class NumberCorrect
{
public:
	std::vector<int> GetCorrectFrequency(const std::vector<int>& numbers, const std::vector<std::vector<int>>& frequencies);

public:
	std::vector<int> GetCorrect(const std::vector<int>& numbers, const std::vector<std::vector<int>>& frequencies);

	// 9
	// 108
	// 1107
	// 11106
	// 111105
	long long GetCorrectZero(int F, int B);
};

void Execute();