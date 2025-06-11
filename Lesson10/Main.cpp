






template <class T>
void Print(T val)
{
	cout << "Value is " << val << endl;
	T i;
	i = val;
	i = i + val;
	char x = 'M';
	int s = 8;
}


template <class T>
void DoSomething()
{
	T t1;
	cin >> t1;
	T t2;
	cin >> t2;
	T t3 = t1 + t2;
	cout << t3;
}

class MyClass
{
public:
	MyClass(int i) {};
};


void main()
{
	int sum = 7;
	char initial = 'A';

	Print(sum); //<==> Print<int>(sum);


	DoSomething<int>();

	Print<int>(sum);
	Print<char>(initial);
	Print<float>(2.5);

	Print<int>(7);

	MyClass mc;
	Print<MyClass>(mc);
}
