#include <stdio.h>
int main(){
    for(; ;){
    	printf("\n===== 简易数学工具 =====\n");
        printf("1. 累加计算\n");
        printf("2. 阶乘计算\n");
        printf("3. 幂运算\n");
        printf("4. 奇偶判断\n");
        printf("5.  退出\n");
        printf("****************\n");
        printf("请输入选项：");
    	int type;
    	scanf("%d",&type);
		switch(type){
			case 1:{
				printf("这里是累加计算\n请输入你的数字\n");
				int n;
				scanf("%d",&n);
				int i=1;
				int sum=0;
				while(i<=n){
					sum+=i;
					i++;
				} printf("结果是 %d",sum);
				break;
			}
		    case 2:	{
		    	printf("这里是阶乘计算\n请输入你的数字\n");
		    	int a;
		    	scanf("%d",&a);
		    	int b=1;
		    	int sum2=1;
		    	if(a<0){
		    		printf("负数没有阶乘！\n");
				}
				else if(a>0){
		    	while(a>0&&b<=a){
		    		sum2*=b;
		    		b++;
				}
				printf("結果是 %d",sum2);
			}
			}
				break;
			case 3:{
				printf("这里是幂运算\n由于个人技术不行，计算结果过大会导致精度有限\n请输入你的数字\n");
				double m=0;
				double n=0;
				double p=1;
				scanf("%lf %lf",&m,&n);
				p=1;
				if(m>0&&n>0){
					for(int o=0;o<n;o++){
						p*=m;
					}
				}
				else if(n==0){
					p=1;
				}
				else{
					printf("錯誤！\n");
					break;
				}
				printf("结果是 %.01f",p);
				break;
			}
			
	        case 4:{
	    	printf("此爲奇偶判斷\n请输入你的数字\n");
	    	int j;
	    	scanf("%d",&j);
	    	if(j%2==0){
	    		printf("偶數\n");
			
			}else{
			printf("奇數\n");
			}break;
        }
            case 5:{
             printf("再见\n");
              return 0;
        }
            default:{
			printf("无效选项，请重新输入\n");
				break;
			}
			
			}
			  	
			}
		} 
	

