// main.c
#include <stdio.h>
#include "/usr/local/include/pbc/pbc.h"
int main(int argc, char const *argv[]) {
  // 初始化pairing
  pairing_t pairing;  
  // pairing_t定义： pairings where elements belong本例子用a.param去初始化pairing; a pairing is a map 例如:e:G1×G2->Gt
  // a.param是pbc库中标准的参数集，其提供对称的pairing ，在所有的param中有最高的速度。
  char param[1024];
  size_t count = fread(param, 1, 1024, stdin); // 读大小为1的个数最大为1024到param，返回真实读入的个数
  if (!count) pbc_die("input error");
  pairing_init_set_buf(pairing, param, count);

  // 生成x
  element_t x;
  element_init_Zr(x, pairing); //用pairing初始化x
  element_random(x); //随机生成x
  element_printf("%B\n", x); //打印x

  return 0;
}

