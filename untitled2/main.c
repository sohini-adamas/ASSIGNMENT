#include <stdio.h>

int main() {
    int mrp, discount total;
    printf("enter the MRP :\n");
    scanf("%d",&mrp);
    printf("Enter the discount percent :\n");
    scanf("%d", &discount);

    if (discount>10 && discount<50) {
        printf("GST would be 18%");
        total = mrp * discount / 100 + mrp * 18 / 100;
        printf("total would be %d", total);
    }
    else
        return 0;
    }
}
