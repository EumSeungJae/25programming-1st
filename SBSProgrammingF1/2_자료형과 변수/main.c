/*
* ��¥     : 2025-10-16
* �н���ǥ : �ڷ����� ����
* �ǽ���ǥ : ���� ������ �м��ؼ� �ڷ����� �����Ѵ�.
*/

// �ڷ��� Data Type
// Data : ����, �׸�, ��ȣ ���ǵǾ� ���� ���� ����
// ��ǻ�Ϳ��� ����� ������ �ʹ�.
// ����ų(����), ���ھ� Ÿ��(����), ���� ����(�Ҽ�)
// �̹��� 1920 x 1080, �Ҹ�(����)

// �ڷ���� Ư¡�� ���� ���¸� �з��� �ߴ�. Type
// �ڷ��� : ����, ����, �Ǽ�(����)

// �ڷ����� �̿��ϴ� ���
// (�Ÿ��) "�̸�" variable ����
// int ���� float �Ǽ�(�Ҽ�)
// �Լ��� ����ϴ� ���
// int ������ǥ���ϴ� Ÿ��
// float �Ǽ�(�Ҽ�)
// char  ���� "H e l l o"
// string ���ڿ�


#include <stdio.h>

int main()
{
	// ����ų ���� ȭ�鿡 ����ϰ� �ʹ�.
	printf("����ų \n");
	// �������� ������� ���ھ ����ϰ� �ʹ�.
	printf("10 vs 25 \n");
	// è�Ǿ��� ������ �ִ� ������ ����ϰ� �ʹ�.
	printf("AD : 10 \n");
	////////////////////////////////////
	// ���� d , �Ǽ�(�Ҽ�) f = Float = x����f
	int Level = 2;
	int TeemofirstLevelHP = 598;
	int TeemoGrowthHP = 104;

	int TeemofirstLevelMana = 267;
	int TeemoGrowthMana = 25;

	int TeemoBaseATK = 54;
	int TeemoGrowthATK = 2;

	float TeemoBaseASPD = 0.687f;
	float TeemoGrowthASPD = 3.38f;

	int TeemoBaseSRH = 5; //�ʴ� ü��ȸ����
	int TeemoGrowthSRH = 0;

	int TeemoBaseSRM = 5; //�ʴ� ����ȸ����
	int TeemoGrowthSRM = 0;

	printf("Ƽ���� ����\n");
	printf("ü�� : %d (+%d)\n", TeemofirstLevelHP , TeemoGrowthHP);       // 598 + 104(�������� -1)
	printf("���� ü�� : %d\n", TeemofirstLevelHP + (Level - 1) * TeemoGrowthHP);
	printf("���� : %d (+%d)\n", TeemofirstLevelMana , TeemoGrowthMana);
	printf("���� ���� : %d\n", TeemofirstLevelMana + (Level - 1) * TeemoGrowthMana);
	printf("���ݷ� : %d (+%d)\n", TeemoBaseATK , TeemoGrowthATK);
	printf("���� ���ݷ� : %d\n", TeemoBaseATK + (Level - 1) * TeemoGrowthATK);
	printf("���� �ӵ� : %f (+%f)\n", TeemoBaseASPD , TeemoGrowthASPD);
	printf("���� ���� �ӵ� : %f\n", TeemoBaseASPD + (Level - 1) * TeemoGrowthASPD);
	printf("5�ʴ� ü��ȸ�� : %d(+%d)\n", TeemoBaseSRH , TeemoGrowthSRH);
	printf("5�ʴ� ����ȸ�� : 5(+0)\n");
	printf("���� : 24(+4)\n");

	// �� ������ ��ǻ�Ͱ� ���� ���ϴ� ��������� ������ �߳���?
	// ��.
	// (����) vs (���� �� �ؾ��Ѵ�.)
	
	// 5�����϶��� ĳ������ �ɷ�ġ������ ��� �ǳ���?

	// �ٸ� è�Ǿ����ε� ���� ����� ����ؼ� ǥ���غ�����.

	// �м��غ��� ���� ������ ������ �ϳ� �����ɴϴ�.
	// ����ǥ��
}

