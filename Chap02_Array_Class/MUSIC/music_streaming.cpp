#include <Music.h>



int main() {


	MusicStreamingService myService("MyMusic");
	myService.addMusic("OMG", "New_Jeans", "Album", 2023);


	cout << "eNTER THE MUSIC TITLE :";
	cin >> music_title;
	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {Found << result ->getTitle() << "by" << result -> getArtist() }

}



class��ĭ ��� �뵥�̼�   recursive notation   abstraction      