#include <iostream>

using namespace std;

//Ŭ������ �����ϴ� ���
class SampleClass //Ŭ�����̸�

{
//�ܺο��� ������ �Ұ����� ����, "ĸ��ȭ"�� ���ؼ� �ʿ���.
//Ŭ������ ĸ��ȭ�� �����͸� ��ȣ�ϰų� �߸� ����ϴ� ���� ���� �� �ִ�. (�ʹ� ���� ������ �����Ͽ� ȥ���� ����� ���� ����)
private: 
	int privateValue = 0;

//�ܺο��� ������ ������ ����
public:
	int publicValue = 0;
	//������ : ��ü�� ������ �� �ߵ��ϴ� �Լ�
	//��ü�� �����ɶ� �μ��� ���� �� �����Ƿ� �����ڵ� �μ��� ���� �� �ִ�.
	//���� �����ڸ� ���� �������� ������ �⺻ �����ڰ� ���Ǹ�, �⺻�����ڴ� �Ű������� ������ ��������� 0, NULL �� �ʱ�ȭ �ȴ�.
	SampleClass() {
		cout << "��ü�� �����Ǿ����ϴ�." << endl;
	};
	//�μ��� ������ �ֱ� ������ Overloading�� �����ϴ�. (�������� �����ڰ� ���簡��)
	SampleClass(int _input) {
		cout << _input << "��ü�� �����Ǿ����ϴ�." << endl;
	};

	//�Ҹ��� : ��ü�� �Ҹ��� �� �ߵ��ϴ� �Լ�
	//�����ڿʹ� �ٸ��� �μ��� ���� �� ������ �׷��� ������ �Ҹ��ڴ� �� �ϳ��� ���� �����ϴ�.
	~SampleClass() {
		cout << "��ü�� �Ҹ��Ͽ����ϴ�." << endl;
	};

};


//2. Ŭ������ ��ü�� �����ϴ� ���
int main() {
	//Ŭ������ ����ü�� ���� �ڷ��� ó�� ����� �� �ִ�.
	//"Ŭ�����̸� �ν��Ͻ��̸�"
	SampleClass SampleInstance_1;
	//�ʿ信 ���ؼ� �μ��� �߰� �� �� �� �ִ�.
	SampleClass SampleInstance_2(20);

	//�Ҹ��ڴ� Ŭ������ ���� �ν��Ͻ��� �Ҹ��� �� ȣ��Ǳ� ������ �̹� ��쿡��
	//main�Լ��� ������ �ν��Ͻ��� ����� ������ �Ҹ��ڰ� ȣ��ȴ�.
	return 0;
}