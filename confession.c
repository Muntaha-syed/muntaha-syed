#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int Reading_time, Writing_time, Total_time;
	printf("Enter the time spent reading confession (in minutes):");
	scanf("%d", &Reading_time);
	printf("Enter the time spent writing confession (in minutes):");
	scanf("%d", &Writing_time);
	Total_time = Reading_time + Writing_time;
	if(Total_time > 120){
		printf("Oye! 2 ghante se zyada confessions mein laga diye? Itna waqt barbaad! Socho agar yeh 2 ghante parhai ya skill seekhne mein lagate to kidhar pohanch gaye Zindagi mein kuch bara karna hai toh yeh confession waghera chor do, aur apne goals par focus karo!");
	}
	else if(Total_time >=60 && Total_time <=120){
		printf("Abey yar, 1 se 2 ghante confessions par lagana thoda zyada ho gaya na? Dekho, thora socho kya yeh waqt waqayi mein tumhe agay leke ja raha hai? Zindagi mein aise activities ka balance rakhna seekho, warna regret ho ga baad mein!");
	}
	else{
		printf("Wah bhai, kamal kar rahe ho! Sirf thori der mein confessions check kar liya, aur phir apne kaam par wapas lag gaye. Isi tarah focus rakho, tum bahut agay jao ge.Parhai aur apne goals pe dhyan rakho, shabash!");
	}
	getch();
	return 0;
}
