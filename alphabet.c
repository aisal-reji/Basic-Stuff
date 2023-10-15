
#include <stdio.h>

void main()
{  
    
   int n,i,j;
   int x=0;
   printf("Enter the size of the square matrix \n");
   scanf("%d",&n);
   n=7;
   char ch;
   while(x==0)
   {
  
   printf("Enter the character \n");
   printf("\n\n\n");
   scanf(" %c", &ch);
   
   n=7;
   int middleRow = n/2;
    if (ch == 'A')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == middleRow) {
                printf("*");
            } 
            else if ( (i == 0) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
    else if (ch == 'B')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == middleRow) {
                printf("*");
            } 
            else if ( (i == 0) || (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == 'C')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0  ) {
                printf("*");
            } 
            else if ( (i == 0) || (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == 'D')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 ) {
                printf("*");
            } 
            else if ( (i == 0) || (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
     else if (ch == 'E')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || i == middleRow) {
                printf("*");
            } 
            else if ( (i == 0) || (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
    else if (ch == 'F')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || i == middleRow) {
                printf("*");
            } 
            else if ( (i == 0) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == 'G')
   {
       
   
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j >= 0 && j <= n - 1)) || (i == n - 1 && (j >= 1 && j <= n - 1)) ||
                (i == middleRow && (j >= 1 && j <= n - 1)) || (j == 0 && i >= 0 && i <= n - 1) ||
                (j == n - 1 && (i >= middleRow || i == 0)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
    else if (ch == 'H')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == middleRow) {
                printf("*");
            } 
            else if ( (i == 0) || (i == (n-1)) )
            {
                printf(" ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
   }
    else if (ch == 'I')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 ) {
                printf(" ");
            } 
            else if ( (i == 0) || (i == (n-1)) || j == middleRow )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == 'S')
   {
       
   
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j >= 0 && j <= n - 1)) || (i == n - 1 && (j >= 1 && j <= n - 1)) ||
                (i == middleRow && (j >= 1 && j <= n - 1)) || (j == 0 && i >= 0 && i <= middleRow) ||
                (j == n - 1 && (i >= middleRow || i == 0)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == 'L')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 ) {
                printf("*");
            } 
            else if (  (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
    else if (ch == 'n')
    {
        //A 
        for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == middleRow) {
                printf("*");
            } 
            else if ( (i == 0) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        }
        printf("\n\n\n\n\n");
    //I 
       for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 ) {
                printf(" ");
            } 
            else if ( (i == 0) || (i == (n-1)) || j == middleRow )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
       printf("\n\n\n\n\n");
   //S 
         for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j >= 0 && j <= n - 1)) || (i == n - 1 && (j >= 0 && j <= n - 1)) ||
                (i == middleRow && (j >= 1 && j <= n - 1)) || (j == 0 && i >= 0 && i <= middleRow) ||
                (j == n - 1 && (i >= middleRow || i == 0)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
         printf("\n\n\n\n\n");
    //A 
        for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == middleRow) {
                printf("*");
            } 
            else if ( (i == 0) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
         }
         printf("\n\n\n\n\n");
    //L 
       
       for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 ) {
                printf("*");
            } 
            else if (  (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
      printf("\n\n\n\n\n");  
    }
     else if (ch == 'X')
   {
       for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
       else if (ch == 'Y')
   {
       for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n/2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == 'V')
   {
      n=n*2;
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == 'T')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == n/2 ) {
                printf("*");
            } 
            else if (  (i == (0)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
    else if (ch == 'U')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 ) {
                printf("*");
            } 
            else if (  (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
    else if (ch == '1')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 ) {
                printf(" ");
            } 
            else if (  (i == (n-1)) || j == middleRow )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == '2')
   {
       
   
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j >= 0 && j <= n - 1)) || (i == n - 1 && (j >= 0 && j <= n - 1)) ||
                (i == middleRow && (j >= 1 && j <= n - 1)) || (j == n-1 && i >= 0 && i <= middleRow) ||
                (j == 0 && (i >= middleRow || i == 0)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == '3')
   {
       
   
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j >= 0 && j <= n - 1)) || (i == n - 1 && (j >= 0 && j <= n - 1)) ||
                (i == middleRow && (j >= 1 && j <= n - 1)) || (j == n-1 && i >= 0 && i <= middleRow) ||
                (j == n-1 && (i >= middleRow || i == 0)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == '4')
   {
      
   
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == middleRow && (j >= 1 && j <= n - 1)) 
            || (j == 0 && i >= 0 && i <= middleRow) ||
                (j == n/2 && (i >= 0 || i == 0)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == '5')
   {
       
   
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j >= 0 && j <= n - 1)) || (i == n - 1 && (j >= 1 && j <= n - 1)) ||
                (i == middleRow && (j >= 1 && j <= n - 1)) || (j == 0 && i >= 0 && i <= middleRow) ||
                (j == n - 1 && (i >= middleRow || i == 0)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == '6')
   {
       
   
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j >= 0 && j <= n - 1)) || (i == n - 1 && (j >= 1 && j <= n - 1)) ||
                (i == middleRow && (j >= 1 && j <= n - 1)) || (j == 0 && i >= 0 && i <= middleRow) ||
                (j == n - 1 && (i >= middleRow || i == 0))||(j == 0 && (i >= middleRow || i == 0)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == '7')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == n-1 ) {
                printf("*");
            } 
            else if (  (i == (0)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
       else if (ch == '8')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == middleRow) {
                printf("*");
            } 
            else if ( (i == 0) || (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
    else if (ch == '9')
   {
       
   
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j >= 0 && j <= n - 1)) || (i == n - 1 && (j >= 0 && j <= n - 1)) ||
                (i == middleRow && (j >= 0 && j <= n - 1)) || 
                (j == n - 1 && (i >= 0 || i == middleRow ))||(j == 0 && (i >=0 && i <= middleRow)))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   else if (ch == '0')
   {
       
   
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 ) {
                printf("*");
            } 
            else if ( (i == 0) || (i == (n-1)) )
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
   }
   }
}




