#include <cstdio>
#include <cmath>

int trapez(int a,int b,int h) {
	int pole = (a + b) * h / 2;
	return pole;
}
struct figura{
	char nazwa_figura[12];
	int pole_figury;
}


int main(){
	//zrob aplikacje liczaca Pola Figur (trapez, kolo, trojkat, kwadrat, prostokat, rownoleglobok)
	//wyniki zapisuj w array
	//program ma sie nie konczyc
	//wszystkie zmienne dotyczace Pol zapisuj w struct
	//do kazdego funckja
	char choice;
	int figura_wybor,a,b,h,i=1;
	while (1) {
		printf("czy chcesz obliczyc pole figury? (t/n): ");
		scanf_s("%c\n", &choice);
		if (choice == 'n') {
			break;
		}
		else {
			printf("pole jakiej figury chcesz obliczyć:\n 1.Trapez\n 2.Kolo\n 3.trojkat\n 4.kwadrat\n 5.prostokat\n 6.rownoleglobok");
			scanf_s("%d\n", &figura_wybor);
			switch (figura_wybor) {
			case 1:
				printf("podaj bok a");
				scanf_s("%d", &a);

				printf("podaj bok b");
				scanf_s("%d", &b);

				printf("podaj bok h");
				scanf_s("%d", &h);

			
				figura1.nazwa_figury = "Trapez";
				figura1.polefigury = trapez(a, b, h);
				break;
				
			}

			
		}


	}
}