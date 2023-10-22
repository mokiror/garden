#include <iostream>
#include <string>
#include <vector>

//большие растения
class BigPlants {
public:
	std::string name1 = "Дуб";
	std::string color1 = "Зелёный";
	int count1 = 50;

	std::string name2 = "Яблоня";
	std::string color2 = "Зелёный";
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
		std::cout << "Название: " << name1 << "\n";
		std::cout << "Цвет: " << color1 << "\n";
		std::cout << "Кол-во плодов: " << count1 << "\n";
	}
};

class AppleTree :public BigPlants {
public:
	virtual void AppleTreeInfo()const override {
		std::cout << "Название: " << name2 << "\n";
		std::cout << "Цвет: " << color2 << "\n";
		std::cout << "Кол-во плодов: " << count2 << "\n";
	}
};

//средние растения
class NormalPlants {
public:
	std::string name1 = "Малина";
	std::string color1 = "Малиновый";
	int count1 = 15;

	std::string name2 = "Черешня";
	std::string color2 = "Красный";
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
		std::cout << "Название: " << name1 << "\n";
		std::cout << "Цвет: " << color1 << "\n";
		std::cout << "Кол-во плодов: " << count1 << "\n";
	}
};

class SecondBerry :public NormalPlants {
public:
	virtual void SecondBerryInfo()const override {
		std::cout << "Название: " << name2 << "\n";
		std::cout << "Цвет: " << color2 << "\n";
		std::cout << "Кол-во плодов: " << count2 << "\n";
	}
};

//маленькие растения
class SmallPlants {
public:
	std::string name1 = "Ромашка";
	std::string color1 = "Белый";
	int count1 = 6;

	std::string name2 = "Ландыш";
	std::string color2 = "Белый";
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
		std::cout << "Название: " << name1 << "\n";
		std::cout << "Цвет: " << color1 << "\n";
		std::cout << "Кол-во плодов: " << count1 << "\n";
	}
};

class SecondFlower :public SmallPlants {
public:
	virtual void SecondInfo()const override {
		std::cout << "Название: " << name2 << "\n";
		std::cout << "Цвет: " << color2 << "\n";
		std::cout << "Кол-во плодов: " << count2 << "\n";
	}
};




int main() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int choose = 0;

	std::cout << "Выберите сад: 1 - большие растения, 2 - средние, 3 - маленькие\n";
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
		std::cout << "Вы ввели что-то не то :( \n";
		break;
	}
	}


	return 0;
}

