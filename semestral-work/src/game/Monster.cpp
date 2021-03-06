#include "Monster.hpp"

Monster::Monster (int health, float speed, int armor) : health(health), speed(speed), armor(armor) {}

int Monster::getHealth () {
  return health;
}

float Monster::getSpeed () {
  return speed;
}

int Monster::getArmor () {
  return armor;
}

bool Monster::operator== (const Monster& monster) const {
  return health == monster.health &&
         speed == monster.speed &&
         armor == monster.speed;
}

void Monster::attack (int power) {
  // First will be attacked the armor, then the health.
  if (armor >= 0) {
    armor -= power;

    if (armor < 0) {
      health += armor;
    }
  } else {
    health -= power;
  }
}
