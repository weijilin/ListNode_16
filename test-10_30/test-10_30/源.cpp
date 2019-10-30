#define _CRT_SECURE_NO_WARNINGS 1
include <iostream>
using namespace std;

// new/delete ������ͷŵ���Ԫ�صĿռ�
// new[]/delete[] ������ͷ�һ�������Ŀռ�


#if 0
int main()
{
	int array[10];
	// C++���ṩ��new��delete����������ռ�
	int* p1 = new int;
	int* p2 = new int(10);
	int* p3 = new int[10];
	int* p4 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	delete p1;
	delete p2;
	delete[] p3;
	delete[] p4;

	return 0;
}
#endif

#if 0
// malloc/free  new/delete new[]/delete[]
// һ��Ҫƥ�䣺������ܻ�����ڴ�й©���ߴ������
// ���������Ͳ������

#if 0
void TestNew()
{
	int* p1 = (int*)malloc(sizeof(int));
	delete p1;

	int* p2 = (int*)malloc(sizeof(int));
	delete[] p2;

	int* p3 = new int;
	free(p3);

	int* p4 = new int;
	delete[] p4;

	int* p5 = new int[10];
	free(p5);

	int* p6 = new int[10];
	delete p6;
}


int main()
{
	TestNew();
	_CrtDumpMemoryLeaks();
	return 0;
}
#endif

class Test
{
public:
	Test(int data = 0)
		: _data(data)
	{
		cout << "Test(int):" << this << endl;
	}

	~Test()
	{
		cout << "~Test():" << this << endl;
	}

private:
	int _data;
};

void TestNew()
{
	Test* p1 = (Test*)malloc(sizeof(Test));
	delete p1;

	Test* p2 = (Test*)malloc(sizeof(Test));
	delete[] p2;

	Test* p3 = new Test;
	free(p3);

	Test* p4 = new Test;
	delete[] p4;

	Test* p5 = new Test[10];
	free(p5);

	Test* p6 = new Test[10];
	delete p6;
}

int main()
{
	TestNew();
	return 0;
}
#endif