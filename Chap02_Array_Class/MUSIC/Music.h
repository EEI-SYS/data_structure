#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Music {
private:
	string title;
	string artist;
	string album;
	int year;

public:
	Music(string title, string artist, string album, int year) {
		this -> title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;
		
	}
	string getTitle() {
		return title;
	}
	string getArtist() {
		return artist;
	}
	string getAlbum() {
		return album;
	}
	int getYear() {
		return year;
	}
};

class MusicStreamingService {
private:
	string serviceName;
	vector<Music>music_List;  //배열을 만드는데 이름은 뮤직리스트이고 원소들은 데이터 형은 뮤직 데이터형이다

public:


	void addMusic(string title, string artist, string album, int year) {
		Music newMusic(title, artist, album, year);
		music_List.push_back(newMusic);
		cout << title << "by" << artist << "added to" << serviceName << endl;
	}
	//title로 뮤직리스트에 검색하여 반환
	Music* searchByTitle(string title) {
		for (int i = 0; i < music_List.size(); i++) {
			if (music_List[i].getTitle() == title) {
				return &music_List[i];   //주소값을 반환해야하는데 그 주소값을 나타내주는 연산자가 "&"
			}
		}
		return NULL; // 주소값 아무것도 없을때 반환
	}

	//ARTIST로 뮤직리스트에서 검색하여 반환
	vector<Music*> searchByArtist(string artist) {
		vector<Music*> result;
		for (int i = 0; i < music_List.size(); i++) {
			if (music_List[i].getArtist() == artist) {
				result.push_back(&music_List[i]);
			}
		}
		return result;
	}

};

