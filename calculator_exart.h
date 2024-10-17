/*
* 攻击力、生命值、防御力
*/
double cal_am(double b_a, double p_a, double e_a) {
	double return_a = 0;
	return_a = b_a * p_a + e_a;
	return return_a;
}
double cal_b(double b_b, double m_b, double l_b) {
	double return_b = 0;
	return_b = b_b + m_b - l_b;
	return return_b;
}
/*
* 暴击
*/
double cal_c(double v_c, double d_c) {
	double return_c = 0;
	if (v_c <= 0)return return_c;
	else if (v_c > 1) {
		v_c = 1.0;
	}
	return_c = v_c * d_c;
	return return_c;
}
/*
* 防御减伤
* v_c 人物等级
* v_e 敌人等级
* p_d 无视防御
* m_d 防御增加
* l_d 防御减免
*/
double cal_d(double v_c,double v_e,double p_d,double m_d,double l_d) {
	double return_d = 0;
	v_c = v_c + 100;
	v_e = v_e + 100;
	if (p_d > 1)p_d = 1;
	return_d = 1 + m_d - l_d;
	if (return_d < 0)return_d = 0;
	return_d = v_c + (1 - p_d) * return_d * v_e;
	return_d = v_c / return_d;
	return return_d;
}
/*
* 抗性减伤
*/
double cal_r(double b_r, double m_r, double l_r) {
	double return_r = 0;
	return_r = b_r + m_r - l_r;
	if (return_r > 0.75)return_r = 1 / (1 + 4 * return_r);
	else if (return_r < 0)return_r = 1 - return_r / 2;
	else return_r = 1 - return_r;
	return return_r;
}
/*
* 元素反应加伤
* t_e 反应类型
*     角色等级系数/攻击力
* m_e 反应倍率（顺为1,x2,蔓激化，逆为2,x1.5，超激化）
* s_e 元素精通
* v_e 反应系数提高
* t_e:
* 0 增幅反应（水-火、冰-火）
* 1 激化反应
* 剧变反应：
* 2 超导
* 3 扩散
* 4 碎冰
* 5 超载
* 6 感电
* 7 绽放
* 8 烈绽放
* 9 超绽放
* 10 燃烧
*/

double cal_e(int t_e, double m_e, double s_e, double v_e) {
	double return_e;
	switch (t_e)
	{
	case 0: {
		if (m_e == 1)m_e = 2;
		else m_e = 1.5;
		break;
	}
	case 1: {
		if (m_e == 1)m_e = 1.25;//还缺少 原激化反应倍率
		else m_e = 1.15;
		break;
	}
	case 2: {
		m_e = 0.5;
		break;
	}
	case 3: {
		m_e = 0.6;
		break;
	}
	case 4: {
		m_e = 1.5;
		break;
	}
	case 5: {
		m_e = 2.0;
		break;
	}
	case 6: {
		m_e = 1.2;
		break;
	}
	case 7: {
		m_e = 2.0;
		break;
	}
	case 8: {
		m_e = 3.0;
		break;
	}
	case 9: {
		m_e = 3.0;
		break;
	}
	case 10: {
		m_e = 0.25;
		break;
	}
	default:
		break;
	}
	if (t_e == 0)s_e = 2.78 * s_e / (s_e + 1400);
	else if (t_e == 1)s_e = 5 * s_e / (s_e + 1200);
	else s_e = 16 * s_e / (s_e + 2000);
	return_e = m_e * (1 + s_e + v_e);
	return return_e;
}
double cal_t(double value[]) {
	double return_t = 0;
	for (int il0 = 0;;) {
		if (value[il0] == 0)break;
		return_t = value[il0] * value[il0 + 1] + return_t;
		il0++, il0++;
	}
	return return_t;
}

double cal_mix(double part_a,double part_m,double part_b,double part_c,double part_e,double part_d,double part_r,double part_t) {
	double damage_return = 0;
	damage_return = part_a * part_m * part_b * part_c * part_e * part_d * part_r * part_t;
	return damage_return;
}