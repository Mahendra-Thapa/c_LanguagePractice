//calculate thea area  and perimeter of circle (call by reference). 

float area(float);
float main()
{
	float area,r;
    printf("enter the value of radious:-");
	scanf("%f",&r);
	area = area(r);
	printf("area of circle%f",area);

}
float area ( float r)
{
	float area = 3.14*(r*r);
	return area;

}
