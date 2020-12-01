#include "stdio.h"

int main() {
    // 公鸡一只5元
    // 母鸡一只3元
    // 3只小鸡1元
    // 问：100元买了100只鸡，那公鸡，母鸡，小鸡各多少只？

    // 分析：公鸡最多买100/5=20只，母鸡最多买100/3=33只，小鸡买(100-公鸡-母鸡)*3只
    int g, m, x;
    int gPrice, mPrice, xPrice;
    for (g = 1; g <= 20; ++g) {
        for (m = 1; m <= 33; ++m) {
            gPrice = g * 5;
            mPrice = m * 3;
            xPrice = (100 - gPrice - mPrice);
            x = xPrice * 3; // 买小鸡的只数
            if (gPrice + mPrice + xPrice == 100 && g + m + x == 100) {
                printf("公鸡：%d 母鸡：%d 小鸡：%d\n", g, m, x);
                break;
            }
        }
    }
    return 0;
}