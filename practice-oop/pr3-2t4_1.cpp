#include <stdio.h>

   class Test {
   public:
   	
	Test();
	~Test();
	};
    Test::Test() {
    	printf("А я прямо как в книжке Шилдта!\n");
      }
    Test::~Test() {
        printf("И я ухожу красиво!\n");
      }

int main()
{
  Test object0;

return 0;
}
