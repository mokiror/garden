#include <iostream>
#include <string>
#include <vector>

//������� ��������
class BigPlants {
public:
	std::string name1 = "���";
	std::string color1 = "������";
	int count1 = 50;

	std::string name2 = "������";
	std::string color2 = "������";
	int count2 = 35;

	virtual void OakInfo() const{
		std::cout << "";
	}
	virtual void AppleTreeInfo()const {
		std::cout << "";
	}
};

class Oak :public BigPlants {
public:
	virtual void OakInfo() const override {
		std::cout << "��������: " << name1 << "\n";
		std::cout << "����: " << color1 << "\n";
		std::cout << "���-�� ������: " << count1 << "\n";
	}
};

class AppleTree :public BigPlants {
public:
	virtual void AppleTreeInfo()const override {
		std::cout << "��������: " << name2 << "\n";
		std::cout << "����: " << color2 << "\n";
		std::cout << "���-�� ������: " << count2 << "\n";
	}
};

//������� ��������
class NormalPlants {
public:
	std::string name1 = "������";
	std::string color1 = "���������";
	int count1 = 15;

	std::string name2 = "�������";
	std::string color2 = "�������";
	int count2 = 50;

	virtual void FirstBerryInfo() const {
		std::cout << "";
	}
	virtual void SecondBerryInfo() const {
		std::cout << "";
	}
};

class FirstBerry :public NormalPlants {
public:
	virtual void FirstBerryInfo() const override {
		std::cout << "��������: " << name1 << "\n";
		std::cout << "����: " << color1 << "\n";
		std::cout << "���-�� ������: " << count1 << "\n";
	}
};

class SecondBerry :public NormalPlants {
public:
	virtual void SecondBerryInfo()const override {
		std::cout << "��������: " << name2 << "\n";
		std::cout << "����: " << color2 << "\n";
		std::cout << "���-�� ������: " << count2 << "\n";
	}
};

//��������� ��������
class SmallPlants {
public:
	std::string name1 = "�������";
	std::string color1 = "�����";
	int count1 = 6;

	std::string name2 = "������";
	std::string color2 = "�����";
	int count2 = 9;

	virtual void FirstInfo() const {
		std::cout << "";
	}
	virtual void SecondInfo() const {
		std::cout << "";
	}
};

class FirstFlower :public SmallPlants {
public:
	virtual void FirstInfo() const override {
		std::cout << "��������: " << name1 << "\n";
		std::cout << "����: " << color1 << "\n";
		std::cout << "���-�� ������: " << count1 << "\n";
	}
};

class SecondFlower :public SmallPlants {
public:
	virtual void SecondInfo()const override {
		std::cout << "��������: " << name2 << "\n";
		std::cout << "����: " << color2 << "\n";
		std::cout << "���-�� ������: " << count2 << "\n";
	}
};




int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int choose = 0;

	std::cout << "�������� ���: 1 - ������� ��������, 2 - �������, 3 - ���������\n";
	std::cin >> choose;
	std::cout << std::endl;

	switch (choose)
	{
	case 1:
	{
		std::vector <BigPlants*> biggarden;
		biggarden.push_back(new Oak);
		biggarden.push_back(new AppleTree);

		for (auto& el : biggarden) {
			el->OakInfo();
			el->AppleTreeInfo();

		}
		for (auto& el : biggarden) {
			delete el;
		}

		std::cout << std::endl;

		break;
	}
	case 2:
	{
		std::vector <NormalPlants*> normalgarden;
		normalgarden.push_back(new FirstBerry);
		normalgarden.push_back(new SecondBerry);

		for (auto& el : normalgarden) {
			el->FirstBerryInfo();
			el->SecondBerryInfo();

		}
		for (auto& el : normalgarden) {
			delete el;
		}

		std::cout << std::endl;

		break;
	}
	case 3:
	{
		std::vector <SmallPlants*> smallgarden;
		smallgarden.push_back(new FirstFlower);
		smallgarden.push_back(new SecondFlower);

		for (auto& el : smallgarden) {
			el->FirstInfo();
			el->SecondInfo();

		}
		for (auto& el : smallgarden) {
			delete el;
		}

		std::cout << std::endl;

		break;
	}
	default:
	{
		std::cout << "�� ����� ���-�� �� �� :( \n";
		break;
	}
	}


	return 0;
}

