#include <iostream> 
#include <cstdarg>
using namespace std;

// Функция 
/*
* Как было в питоне
* def add(a,b):
*	return a+b
* Вывод: 4 || 4.5354 || dogcat
* f = lambda f: f**2
*/
void printNumbers(int count, ...) { // вызов от неопределенного числа элементов
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++) {
		cout << va_arg(args, int) << " ";
	}
	va_end(args);
}
inline int square(int x) { // оптимизация + вызываются непосредственно в месте вызова
	return x * x;
}
int add(int a, int b) {
	return a + b;
}
double add(double a, double b) {
	return a + b;
} // перегрузка
void func1(int& value) { // аргумент - ссылка
	value++;
}
void print() {
	cout << "бу! Испугался!";
} // функция без возвращаемого элемента
void print_message(const string& message = "1") {
	cout << message << endl;
}
int main() {
	auto add = [](int a, int b) {return a + b; };
	int lambda_res = add(4, 5); // анонимная (лямбда-функция)
	double c = 5.34;
	int d = 11;
	//string res = add(7, 3);
	int res = add(7, 3);
	double res1 = add(7.45, 5.64);
	print();
	print_message("56");
}




















// Перегруженные функции
void print(int value) {
	std::cout << "Integer: " << value << std::endl;
}

void print(double value) {
	std::cout << "Double: " << value << std::endl;
}

void print(const std::string& value) {
	std::cout << "String: " << value << std::endl;
}

int main() {
	print(10);            // Вызовет print(int)
	print(3.14);         // Вызовет print(double)
	print("Hello");      // Вызовет print(const std::string&)

	return 0;
}
