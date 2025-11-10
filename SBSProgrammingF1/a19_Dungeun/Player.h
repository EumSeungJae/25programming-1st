#pragma once
// 무기의 종류
typedef enum { // Main_Waepon_Type 
	One_Hand_Sword,
	Two_Hand_Sword,
	MW_Undefined = 100
}Main_Waepon;

// 보조무기의 종류
typedef enum { // Sub_Waepon_Type
	Shield,
	Hand,
	SW_Undefined = 100
}Sub_Waepon;

// 방어구 변화
typedef enum Armor {
	Light, Medium, Heavy
}Armor;

// 아이템

// 플레이어의 설정
typedef struct { // PlayerSetting
	Main_Waepon main_waepon;
	Sub_Waepon sub_waepon;
	Armor armor;
}Player_Setting;


