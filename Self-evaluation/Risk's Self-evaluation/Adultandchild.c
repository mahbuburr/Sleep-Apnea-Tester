#include<stdio.h>

int main() {
	int age;
	float point=0, height, weight, bmi;
	char answer, sex[7];
	printf("Please enter your age.\n");
	scanf("%d", &age);
	printf("Please enter your sex.(female/male)\n");
	scanf("%s", sex);
	if (sex=="female"){
	    printf("Are you pregnent?.(y/n)\n");
	    scanf("%c\n", &answer);
	    if (answer=='y'){point++;}
	}
	if (sex=="male"){point++;}
	if (age>=40){point++;}
	if (age <= 20) {
	    printf("1.Are you wet your bed at night?(y/n)\n");
	    scanf("%c\n", &answer);
	    if (answer=='y'){point+=0.5;}
	    
	    printf("2.Have you much night sweats?(y/n)\n");
	    scanf("%c\n", &answer);
	    if (answer=='y'){point++;}	    

	    printf("3.Are you breathing by mouth during the day?(y/n)\n");
        scanf("%c\n", &answer);
        if (answer=='y'){point+=2;}
        
	    printf("4.Do you often have a nightmare?(y/n)\n");
        scanf("%c\n", &answer);
        if (answer=='y'){point++;}        
        
	    printf("5.Are you naughty or fidget?(y/n)\n");
        scanf("%c\n", &answer);
        if (answer=='y'){point+=0.2;}  
        
	    printf("6.Are you not good or behide at study?(y/n)\n");
        scanf("%c\n", &answer);
        if (answer=='y'){point+=0.5;}  
        
        printf("---------------------RESULT----------------------\n");
        printf(" Risk to have a sleep apnea disease : %.2f %%\n", (point/20)*100);
		printf("   and you are not in criterion for check BMI.   \n");
		printf("-------------------------------------------------\n");
		return 0;
// 		system("pause");
	}
    
    else {
	    printf("1.�͹��ѺʹԷ�Ӻҡ�������?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point++;}  
        
	    printf("2.������к���㹵͹��ҧ�׹?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point+=0.5;}  
        
        printf("3.�д�駼�� ����֡����͹�Ҵ�ҡ��������?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point+=2;}   
        
        printf("4.�ҡ��� �纤͢�е�蹹͹�����?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point+=2;}   
        
        printf("5.�Ǵ�����㹵͹������������?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point+=1.5;}        
    
        printf("6.�͹�������������§��?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point++;} 
        
        printf("7.���ҡ�������Ѻ ��й����º�?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point+=0.75;} 
        
        printf("8.���������û�ǹ?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point+=0.5;}
        
        printf("9.�ջѭ������ͧ������ �����Ҹ����?(y/n)\n");
        scanf(" %c", &answer);
        if (answer=='y'){point+=0.5;} 
        
	    printf("Please enter your height(cm.)\n");
	    scanf("%f", &height);
	    printf("Please enter your weight(kg.)\n");
	    scanf(" %f", &weight);
	    height = height / 100;
	    bmi = weight / (height * height);
	    printf("---------------------RESULT----------------------\n");
	    printf("  Age    = %d years old.\n", age);
	    printf("  Height = %.2f cm.\n", height * 100);
	    printf("  Weight = %.2f kg.\n", weight);
	    printf("  BMI    = %.2f \n", bmi);
	    if (bmi <= 18.5) {
		    printf("  Comment :	You are underweight, you need to do more exercise and eat all 5 groups.\n");
		    printf("  Risk 	  :	Malnutrition.\n");
	    }
	    else if (bmi > 18.5 && bmi <= 22.9) {
		    printf("  Comment : 	You are normalweight.\n");
		    printf("  Risk    : 	None\n");
	    }
	    else if (bmi > 22.9 && bmi <= 24.9) {
		    printf("  Comment : You are overweight, please do exercise and bate greasy foods.\n");
		    printf("  Risk    :	None\n");
		    point++;
	    }  
    	else if (bmi > 24.9 && bmi <= 29.9) {
		    printf("  Comment : You are pre-obese, please do exercise and avoid greasy foods.\n");
		    printf("  Risk    : High Blood Pressure and Gestational Diabetes\n");
		    point+=1.5;
	    }
	    else if (bmi > 29.9) {
		    printf("  Comment : You are obese, please beware for obesity and do exercise with avoid greasy foods.\n");
		    printf("  Risk    : High Blood Pressure, Gestational Diabetes and Obesity\n");
		    point+=2;
	    }
	    printf("-------------------------------------------------\n");
	    printf("------------------BMI CRITERION------------------\n");
	    printf("      BMI < 18.50       :	Underweight\n");
	    printf("      BMI 16.0 - 22.9   :	Normal\n");
	    printf("      BMI 23.0 - 24.9   :	Overweight\n");
	    printf("      BMI 25.0 - 29.9   :	Pre-obese\n");
	    printf("      BMI 30.0 - 40.0   :	Obese\n");
	    printf("      BMI 40.1 - 50.0   :	Morbid-obese\n");
	    printf("      BMI > 50.0        :	Super-obese\n");
	    printf("-------------------------------------------------\n");
	    printf(" Risk to have a sleep apnea disease : %f%%\n", (point/18)*100);
	    printf("-------------------------------------------------\n");
	    return 0;
	}
}