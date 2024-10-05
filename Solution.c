#include <stdio.h>
#include <stdlib.h>
int main()
{ int i, j, r;
scanf("%d",&r);
for(i = 1; i < r; i++)
{ for(j = 1; j <= i; j++)
{ printf("* ");
} printf("\n");
}
for(i = r; i >= 1 ; i--)
{ for(j = 1; j <= i; j++)
{ printf("* ");
} printf("\n");
}

return 0;
}

