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
	vector<Music>music_List;  //�迭�� ����µ� �̸��� ��������Ʈ�̰� ���ҵ��� ������ ���� ���� ���������̴�

public:


	void addMusic(string title, string artist, string album, int year) {
		Music newMusic(title, artist, album, year);
		music_List.push_back(newMusic);
		cout << title << "by" << artist << "added to" << serviceName << endl;
	}
	//title�� ��������Ʈ�� �˻��Ͽ� ��ȯ
	Music* searchByTitle(string title) {
		for (int i = 0; i < music_List.size(); i++) {
			if (music_List[i].getTitle() == title) {
				return &music_List[i];   //�ּҰ��� ��ȯ�ؾ��ϴµ� �� �ּҰ��� ��Ÿ���ִ� �����ڰ� "&"
			}
		}
		return NULL; // �ּҰ� �ƹ��͵� ������ ��ȯ
	}

	//ARTIST�� ��������Ʈ���� �˻��Ͽ� ��ȯ
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

