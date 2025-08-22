
struct My
{
	union
	{
		float Vec[3];
		struct
		{
			float x,y,z;
		};
	};

	My &operator = (My Obj)
	{
		x = Obj.x;
		y = Obj.y;
		z = Obj.z;
	}
};

int main(void)
{
	My Vals[4] = {
		4.0f, 4.0f, 4.0f,
		4.0f, 4.0f, 4.0f,
		4.0f, 4.0f, 4.0f,
		4.0f, 4.0f, 4.0f };

	return 0;
}