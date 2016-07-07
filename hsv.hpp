typedef struct line
{
	CvPoint start;	//начало линии
	CvPoint end;	
	//int length;	//длина линии
	line *next;
}
line;


class lines
{
	line *next;
public:
	lines()
	{
		next = NULL;
	};
	int addl(line *p)
	{
		line *tmp = next;
		next = new line;
		next->start.x = p->start.x;
		next->start.y = p->start.y;
		next->end.x = p->end.x;
		next->end.y = p->end.y;
		next->next = tmp;
		return 0;
				
	};
	void show()
	{
		line *root = next;
		while(root != NULL)
		{
			printf("start:x = %d, y = %d;end:x = %d, y = %d\n", root->start.x, root->start.y, root->end.x, root->end.y);
			root = root->next;
		}
	};
};
