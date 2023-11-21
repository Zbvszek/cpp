#include <cstdio>
#include <cmath>

int trapez(int a,int b,int h) {
	int pole = (a + b) * h / 2;
	return pole;
}


int main(){
	//zrob aplikacje liczaca Pola Figur (trapez, kolo, trojkat, kwadrat, prostokat, rownoleglobok)
	//wyniki zapisuj w array
	//program ma sie nie konczyc
	//wszystkie zmienne dotyczace Pol zapisuj w struct
	//do kazdego funckja
	char choice;
	int figura,a,b,h;
	while (1) {
		printf("czy chcesz obliczyc pole figury? (t/n): ");
		scanf("%c\n", &choice);
		if (choice == 'n') {
			break;
		}
		else {
			printf("pole jakiej figury chcesz obliczyć:\n 1.Trapez\n 2.Kolo\n 3.trojkat\n 4.kwadrat\n 5.prostokat\n 6.rownoleglobok");
			scanf("%d\n", &figura);
			switch (figura) {
			case 1:
				printf("podaj bok a");
				scanf("%d", &a);

				printf("podaj bok b");
				scanf("%d", &b);

				printf("podaj bok h");
				scanf("%d", &h);

				trapez(a, b, h);
			}
			
		}


	}
}