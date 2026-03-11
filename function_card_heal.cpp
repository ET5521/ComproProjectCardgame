//function card heal การ์ดฮีล
//function card


//1. การ์ดฮีลเล็ก (Small Heal)

//ฟื้น 10% ของ HP สูงสุดทันที

void healSmall(Player& me) {
    me.heal(me.maxHp * 0.10f);
}



//2.การ์ดฮีลใหญ่ (Big Heal)

//ฟื้น 20% ของ HP สูงสุดทันที

void healBig(Player& me) {
    me.heal(me.maxHp * 0.20f);
}



//3.ฟื้นฟูต่อเนื่อง (Regen)

ฟื้น 5% ต่อเทิร์น เป็นเวลา 3 เทิร์น

void applyRegen(Player& me) {
    me.regenTurn = 3;
}


//4. รีเซ็ตสถานะศัตรู (Reset)

//ล้างสถานะทั้งหมดของศัตรู 

guard

regenTurn

godShield

void resetEnemyStatus(Player& enemy) {
    enemy.guard = 0;
    enemy.regenTurn = 0;
    enemy.godShield = false;
}


//โค้ดรวม 4 function 5,6,7,12

case CardType::HealSmall:
    healSmall(me);
    break;

case CardType::HealBig:
    healBig(me);
    break;

case CardType::Regen:
    applyRegen(me);
    break;

case CardType::Reset:
    resetEnemyStatus(en);
    break;
