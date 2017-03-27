#include<iostream>
#include<string>

enum class MonsterType{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster{
	MonsterType monstertype;
	std::string name;
	int health;
};

std::string getMonsterTypeString(Monster monster){
	if(monster.monstertype == MonsterType::OGRE)
		return "Ogre";
	if(monster.monstertype == MonsterType::DRAGON)
		return "Dragon";
	if(monster.monstertype == MonsterType::ORC)
		return "Orc";
	if(monster.monstertype == MonsterType::GIANT_SPIDER)
		return "Gaint Spider";
	if(monster.monstertype == MonsterType::SLIME)
		return "Slime";
}

void printMonster(Monster m){
	std::cout<< "This "<< getMonsterTypeString(m)<< " is named "<< m.name<<" and has "<< m.health<<" health"<< '\n';
}

int main(){
	Monster orge= {MonsterType::OGRE, "Torg", 245};
	Monster slime {MonsterType::SLIME, "Blurp", 23};
	
	printMonster(orge);
	printMonster(slime);
	
	return 0;
}
