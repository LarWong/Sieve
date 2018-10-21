#include "sieve.h"

int sieve(int nth){
    
    if (nth <= 0){
        return -1;
    }else if (nth == 1){
        return 2;
    }
    char *nums = (char *)calloc((log(nth) * nth * 1.15) , sizeof(char));
    int start_pos = 3;
    for(int i = nth - 1; i > 0; i--){
        while (nums[start_pos]) start_pos += 2;
	    int n = start_pos;
		while (n < (log(nth) * nth * 1.15)) {
			if (!nums[n]) nums[n] = 1;
			n += 2 * start_pos;
		}
    }
    free(nums);
    return start_pos;

}
