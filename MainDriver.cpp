#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <vector>
#include "Course.h"
#include "Person.h"
#include "Faculty.h"
#include "RegFaculty.h"
#include "VisFaculty.h"
#include "Student.h"

using namespace std;

// Reg. Faculty: 1000 - 1999
bool isRegID(int id){
	return (id >= 1000 && id <= 1999) ? true : false;
}

// Vis. Faculty: 2000 - 2999
bool isVisID(int id){
	return (id >= 2000 && id <= 2999) ? true : false;
}

// Students: 3000 - 9999
bool isStuID(int id){
	return (id >= 3000 && id <= 9999) ? true : false;
}

int main(){
	vector<Person*> AllPersons;
	unsigned int *S;
	RegFaculty* rf;
	VisFaculty* vf;
	Student* st;
	string name;
	persontype p;
	char Q;
	int id, cid, vid, hid, sid, fid, numC, numA, jo, co, adv, gp, cg;

	cin >> id;
	while(id != -1){
		if(isRegID(id)){ // id within range of RegFaculty IDs
			p = rfa;
			cin >> name;
			
			cin >> numC;
			vector<Course> Taught;
			for(int i=0; i<numC; i++){
				cin >> cid;
				Taught.push_back(Course(cid, 0));
			}

			cin >> jo;
			cin >> co;
			cin >> numA;
			S = nullptr;
			if(numA > 0){
				S = new unsigned int[numA];
				for(int i=0; i<numA; i++){
					cin >> adv;
					S[i] = adv;
				}
			}

			AllPersons.push_back((RegFaculty*) new RegFaculty(id, name, p, Taught, jo, co, S, numA));
		}
		else if(isVisID(id)){ // id within range of VisFaculty IDs
			p = vfa;
			cin >> name;

			vector<Course> Taught;
			cin >> numC;
			for(int i=0; i<numC; i++){
				cin >> cid;
				Taught.push_back(Course(cid, 0));
			}

			cin >> jo;
			cin >> co;
			cin >> hid;

			AllPersons.push_back((VisFaculty*) new VisFaculty(id, name, p, Taught, jo, co, hid));
		}
		else if(isStuID(id)){ // id within range of Student IDs
			p = cst;
			cin >> name;

			vector<Course> Taken;
			cin >> numC;
			for(int i=0; i<numC; i++){
				cin >> cid;
				cin >> gp;
				Taken.push_back(Course(cid, gp));
			}

			cin >> fid;

			AllPersons.push_back((Student *) new Student(id, name, p, Taken, fid));
		}

		cin >> id;
	}

	// cout << "-----------------------" << endl;
	// for(auto obj:AllPersons){
	// 	p = obj->GetPType();

	// 	if(p == rfa){
	// 		rf = (RegFaculty*) obj;
	// 		rf->Print();
	// 	}
	// 	else if(p == vfa){
	// 		vf = (VisFaculty*) obj;
	// 		vf->Print();
	// 	}
	// 	else if(p == cst){
	// 		st = (Student*) obj;
	// 		st->Print();
	// 	}
	// }
	// cout << "-----------------------" << endl;

	cin >> Q;
	while(Q != 'X'){
		switch(Q){
			case 'H':{
				cin >> vid;

				if(isVisID(vid)){ // vid within range of VisFaculty IDs
					vf = nullptr;
					for(auto obj:AllPersons){
						if(obj->GetId() == vid){ // Entry with matching vid present in the database
							vf = (VisFaculty*) obj;
							break;
						}
					}

					if(vf != nullptr){
						hid = vf->GetHost();

						rf = nullptr;
						for(auto obj:AllPersons){
							if(obj->GetId() == hid){ // Entry with matching hid present in the database
								rf = (RegFaculty*) obj;
								break;
							}
						}

						if(rf != nullptr){
							cout << rf->GetId() << " " << rf->GetName() << endl;
						}
					}
				}
				break;
			}
			case 'J':{
				int maxCG = -1;
				int maxSid = -1;

				for(auto obj:AllPersons){
					p = obj->GetPType();
					if(p == cst){ // Person of Student type
						st = (Student*) obj;
						sid = st->GetId();
						cg = st->GetCG();
						if(cg > maxCG){
							maxCG = cg;
							maxSid = sid;
						}
					}
				}

				cout << maxSid << endl;
				break;
			}
			case 'U':{
				cin >> sid;

				if(isStuID(sid)){ // sid within range of Student IDs
					st = nullptr;
					for(auto obj:AllPersons){
						if(obj->GetId() == sid){ // Entry with matching sid present in the database
							st = (Student*) obj;
							break;
						}
					}

					if(st != nullptr){
						fid = st->GetFacad();

						bool ans = false;
						rf = nullptr;
						for(auto obj:AllPersons){
							if(obj->GetId() == fid){ // Entry with matching fid present in the database
								rf = (RegFaculty*) obj;
								break;
							}
						}

						if(rf != nullptr && rf->isAdvisor(sid)){
							ans = true;
						}

						cout << ans << endl;
					}
				}
				break;
			}
		}

		cin >> Q;
	}

	return 0;
}