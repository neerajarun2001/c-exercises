#include "io.h"

int main()
{
  int userOne{ readNumber() };
	int userTwo{ readNumber() };

	writeAnswer(userOne + userTwo);

  return 0;
}
