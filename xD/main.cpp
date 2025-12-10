#include "includes.h"

#include "field.h"
#include "animations.h"


Field field;
Animation anim;

int main() {
	setlocale(LC_ALL, "RU");
	int numberAnim;

	field.resetField();
	field.RenderField();


	cout << endl << "¬ведите номер анимации (0-5): ";
	cin >> numberAnim;

	switch (numberAnim) {
	case 0:
		anim.anim0(field);
		break;
	case 1:
		anim.anim1(field);
		break;
	case 2:
		anim.anim2(field);
		break; 
	case 3:
		anim.anim3(field);
		break; 
	case 4:
		anim.anim4(field);
		break; 
	case 5:
		anim.anim5(field);
		break;
	default:
		cout << "\n\tDEZZ\\ERROR\\UNKNOWN\\ANSWER\\";
		break;
	}


	return -0;
}