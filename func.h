#ifndef _FUNC_
#define _FUNC_

struct Kord
{
	int x, y;
};

bool readQueens(const char* fileName, Kord* q);

bool isThreaten(Kord q1, Kord q2);

#endif // !_FUNC_
