void main()
{
	int a,b,c;
	
	printf("enter the 3 side of tringle:");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a == b && b == c) {
		printf("the tringle is equilateral.\n ");
	} else if (a==b||b==c||a==c){
		printf("the tringle is isosceles\n");
	}else{
		printf("the tringle is scalen");
	}
	
}