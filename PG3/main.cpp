#include <stdio.h>

//親クラス「色」
class Colors
{
public:
	Colors(const char* a, const char* b) :name(a), mood(b) {}
	virtual void Mood() {}
	/*仮想デストラクタ*/
protected:
	const char* name;
	const char* mood;
};

//親の色クラスを継承した「青」クラス
class Blue : public Colors
{
public:
	Blue() :Colors("Blue", "蒼き深淵の瞳") { printf("This color is %s\n", name); }
	void Mood() { printf("%s is %s\n", name, mood); }
};

//親の色クラスを継承した「赤」クラス
class Red : public Colors
{
public:
	Red() :Colors("Red", "灼眼のまなざし") { printf("This color is %s\n", name); }
	void Mood() { printf("%s is %s\n", name, mood); }
};

//親の色クラスを継承した「白」クラス
class White : public Colors
{
public:
	White() : Colors("White", "聖なる白銀") { printf("This color is %s\n", name); }
	void Mood() { printf("%s is %s\n", name, mood); }
};

int main() {

	Colors* colors[3] = {new Red(), new Blue,new White};

	puts("");

	for (int i = 0; i < 3; i++) {
		colors[i]->Mood();
	}
		

	for (int i = 0; i < 3; i++) {
		delete colors[i];
		}
			

			return 0;
}
