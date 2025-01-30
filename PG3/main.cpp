#include <stdio.h>

//�e�N���X�u�F�v
class Colors
{
public:
	Colors(const char* a, const char* b) :name(a), mood(b) {}
	virtual void Mood() {}
	/*���z�f�X�g���N�^*/
protected:
	const char* name;
	const char* mood;
};

//�e�̐F�N���X���p�������u�v�N���X
class Blue : public Colors
{
public:
	Blue() :Colors("Blue", "�����[���̓�") { printf("This color is %s\n", name); }
	void Mood() { printf("%s is %s\n", name, mood); }
};

//�e�̐F�N���X���p�������u�ԁv�N���X
class Red : public Colors
{
public:
	Red() :Colors("Red", "�܊�̂܂Ȃ���") { printf("This color is %s\n", name); }
	void Mood() { printf("%s is %s\n", name, mood); }
};

//�e�̐F�N���X���p�������u���v�N���X
class White : public Colors
{
public:
	White() : Colors("White", "���Ȃ锒��") { printf("This color is %s\n", name); }
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
