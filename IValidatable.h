

/*
* 选多的
* 选别的组非法的
* 选中的 -1
*/

/*
* return
*  1 it is useable
* -1 it is unable
*/
int IValidatable(int pool[], int value[]) {
	int pool_used[4] = { -1,-1,-1,-1 };
	int chouse_number = 0;
	int if_big_over = 0, if_unused_over = 0, if_local_chouse_over = 0;
	int if_unable = 0;
	for (int il0 = 0;;) {
		//il0 pool number
		//chouse big
		if (if_big_over == 0 && if_local_chouse_over == 0) {
			for (int il2 = 0;;) {
				if (pool[il0] == il2)il2++;
				//big
				if (value[il2] > (4 - il0)) {
					//if_used
					if (il2 != pool_used[0] && il2 != pool_used[1] && il2 != pool_used[2] && il2 != pool_used[3]) {
						//use
						pool_used[chouse_number] = il2;
						chouse_number++;
						value[il2]--;
						if_local_chouse_over = 1;
						//printf("\n find a used ------------ 01 il0=%d il2=%d\n", il0, il2);
						break;
					}
				}
				il2++;
				if (il2 >= 10) {
					if_big_over = 1;
					break;
				}
			}
		}
		//chouse other error
		if (if_unused_over == 0 && if_local_chouse_over == 0) {
			for (int il2 = 0, il3 = il0 + 1, il4 = 3 - il0;;) {
				if (pool[il0] == il2)il2++;
				//other error
				if (il3 >= 4) {
					if_unused_over = 1;
					break;
				}
				else {
					if (pool[il3] == il2) {
						if (value[il3] > il4) {
							//if_used
							if (il2 != pool_used[0] && il2 != pool_used[1] && il2 != pool_used[2] && il2 != pool_used[3]) {
								//use
								pool_used[chouse_number] = il2;
								chouse_number++;
								value[il2]--;
								if_local_chouse_over = 1;
								//printf("\n find a used ------------ 02 il0=%d il2=%d\n", il0, il2);
								break;
							}
						}
					}
				}
				il2++;
				if (il2 > 10)il4--;
				if (il4 < 0) {
					il4 = 3 - il0;
					il3++;
				}
			}
		}
		//chouse not null
		if (if_local_chouse_over == 0) {
			for (int il2 = 0, il3 = 3 - il0;;) {
				if (pool[il0] == il2)il2++;
				//not null
				if (value[il2] > il3) {
					//if_used
					if (il2 != pool_used[0] && il2 != pool_used[1] && il2 != pool_used[2] && il2 != pool_used[3]) {
						//use
						pool_used[chouse_number] = il2;
						chouse_number++;
						value[il2]--;
						if_local_chouse_over = 1;
						//printf("\n find a used ------------ 04 il0=%d il2=%d\n", il0, il2);
						break;
					}
					//printf("\n error 04 il0=%d il2=%d\n", il0, il2);
				}
				il2++;
				if (il2 >= 10)il3--;
				if (il3 < 0) {
					if_unable = 1;
					//printf("\n error 04 il0=%d il2=%d\n", il0, il2);
					break;
				}
			}
		}

		//one times chouse over
		if_local_chouse_over = 0;
		//if ont pool over
		if (chouse_number >= 4) {
			//chouse next pool
			//printf("\n value is %d %d %d %d %d\n", value[0], value[1], value[2], value[3], value[9]);
			il0++;
			pool_used[0] = -1, pool_used[1] = -1, pool_used[2] = -1, pool_used[3] = -1;
			chouse_number = 0;
			if_big_over = 0;
			if_unused_over = 0;
		}
		//if_all_overed
		if (if_unable) {
			return -1;
		}
		//if_all_overed and it is useable
		if (il0 >= 5)return 1;
	}
	return 0;
}
