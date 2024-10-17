/*
简易公式:
伤害=攻击力*伤害倍率*(1+伤害加成)*(1+暴击伤害)*增幅反应总倍率*防御减免*抗性减免
伤害=攻击区*倍率区*增伤区*暴击区*反应区*防御区*抗性区

Damage=A区 * M区 * B区 * C区 * E区 * D区 * R区

攻击区= A = Attack

倍率区= M = Damage Multipiler

增伤区= B = Damage Bonus

暴击区= C = Critical Bracket

反应区= E = Elemental Reaction

防御区= D = Defense

抗性区= R = Resistance

*/
double if_special(char a[],int find[],int do_it[][100])
{
	int i = 0, list = 0, line = 0, line_temp = 0;
	for (;;) {
		if (a[i] == '=') {
			line = line_temp;
			for (;;) {

			}
		}
		if (a[i] == '&') {
			for (;;) {
				if (a[i] != '&') {
					do_it[line][0]++;
					line_temp++;
					break;
				}
				i++;
			}
		}
		i++;
	}
}
double damage_calculator(double value0[], double value1[], char vilue2[])
{
	int find_for[100] = { 0 };
	int if_do[][100] = { 0 };
	double matk = 1, batk = 1, patk = 1, eatk = 1, mhp = 1, bhp = 1, php = 1, ehp = 1, mdef = 1, bdef = 1, pdef = 1, edef = 1, em = 0, ec = 0, edp = 0, edpr = 0, ep = 1, er = 1, rr = 0.05, rd = 0.5, dr = 1, dp = 1, db = 1, dr = 0, mylv = 90, elv = 90, def_without = 0;


	double a = 0, m = 0, b = 0, c = 0, e = 0, ep = 0, d = 0, r = 0, value_out = 0;

	if_special(vilue2,find_for,if_do);
	if (batk == 0)a = matk;
	else a = batk + batk * patk + eatk;
	m = dr * dp;
	b = 1 + db;
	if (rr >= 1)rr = 1;
	else if (rr <= 0)rr = 0;
	c = 1 + rr * rd;
	if (dr > 75)r = 1.0 / (1.0 + 4 * dr);
	else if (0 <= dr <= 75)r = 1.0 - dr;
	else if (dr < 0)r = 1.0 - dr / 2;
	//ec=0 without,  1 zengfu  2 jubianfanying
	//ec: zhong lei ; em jing tong ; eplus jingtongjiacheng ; edplus jubianfanyingshanghai; edp fanyingxishu ; edpr fanyingxishutigao
	double eplus = 0, edplus = 0;
	eplus = 25.0 / 9.0 * em / (em + 1400.0);
	if (ec == 0)e = 1;
	else if (ec == 1)e = edp * (1 + edpr + eplus);
	else if (ec == 2) {
		e = 1;
		eplus = 16.0 * em / (em + 2000);
		edplus = 1446.85 * edp * (1 + edpr + eplus) * r;
	}
	d = (mylv + 100.0) / ((mylv + 100) + (1 - def_without) * (elv + 100));
	value_out = a * m * b * c * e * d * r + edplus;
	return value_out;
}
