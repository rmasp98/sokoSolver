#include "Main.hpp"



int main() {

   std::cout << "hello world" << std::endl;

   buildLevel();
   playerPos = 0;

   return 0;

}






void buildLevel() {

   bPos.resize(12, glm::tvec2<GLint>(0));
   bPos[0] = glm::tvec2<GLint>(0, 0);
   bPos[1] = glm::tvec2<GLint>(0, 1);
   bPos[2] = glm::tvec2<GLint>(0, 2);
   bPos[3] = glm::tvec2<GLint>(1, 0);
   bPos[4] = glm::tvec2<GLint>(1, 1);
   bPos[5] = glm::tvec2<GLint>(1, 2);
   bPos[6] = glm::tvec2<GLint>(2, 0);
   bPos[7] = glm::tvec2<GLint>(2, 1);
   bPos[8] = glm::tvec2<GLint>(2, 2);
   bPos[9] = glm::tvec2<GLint>(3, 0);
   bPos[10] = glm::tvec2<GLint>(3, 1);
   bPos[11] = glm::tvec2<GLint>(3, 2);

   boxPos.resize(1, 4);
   boxGoal.resize(1, 11);

   // bPos.resize(30, glm::tvec2<GLint>(0));
   // bPos[0] = glm::tvec2<GLint>(0, 0);
   // bPos[1] = glm::tvec2<GLint>(-2, 0);
   // bPos[2] = glm::tvec2<GLint>(-3, 0);
   // bPos[3] = glm::tvec2<GLint>(-4, 0);
   // bPos[4] = glm::tvec2<GLint>(-5, 0);
   //
   // bPos[5] = glm::tvec2<GLint>(0, 1);
   // bPos[6] = glm::tvec2<GLint>(-4, 1);
   // bPos[7] = glm::tvec2<GLint>(-5, 1);
   //
   // bPos[8] = glm::tvec2<GLint>(1, 2);
   // bPos[9] = glm::tvec2<GLint>(0, 2);
   // bPos[10] = glm::tvec2<GLint>(-1, 2);
   // bPos[11] = glm::tvec2<GLint>(-3, 2);
   // bPos[12] = glm::tvec2<GLint>(-4, 2);
   // bPos[13] = glm::tvec2<GLint>(-5, 2);
   //
   // bPos[14] = glm::tvec2<GLint>(1, 3);
   // bPos[15] = glm::tvec2<GLint>(0, 3);
   // bPos[16] = glm::tvec2<GLint>(-1, 3);
   // bPos[17] = glm::tvec2<GLint>(-2, 3);
   // bPos[18] = glm::tvec2<GLint>(-3, 3);
   // bPos[19] = glm::tvec2<GLint>(-4, 3);
   // bPos[20] = glm::tvec2<GLint>(-5, 3);
   //
   // bPos[21] = glm::tvec2<GLint>(1, 4);
   // bPos[22] = glm::tvec2<GLint>(0, 4);
   // bPos[23] = glm::tvec2<GLint>(-1, 4);
   // bPos[24] = glm::tvec2<GLint>(-2, 4);
   // bPos[25] = glm::tvec2<GLint>(-3, 4);
   // bPos[26] = glm::tvec2<GLint>(-4, 4);
   // bPos[27] = glm::tvec2<GLint>(-5, 4);
   //
   // bPos[28] = glm::tvec2<GLint>(-4, 5);
   // bPos[29] = glm::tvec2<GLint>(-5, 5);
   //
   // boxPos.resize(7, 0);
   // boxPos[0] = 9;
   // boxPos[1] = 16;
   // boxPos[2] = 17;
   // boxPos[3] = 19;
   // boxPos[4] = 12;
   // boxPos[5] = 26;
   // boxPos[6] = 3;
   //
   //
   // boxGoal.resize(7, 0);
   // boxGoal[0] = 0;
   // boxGoal[1] = 23;
   // boxGoal[2] = 18;
   // boxGoal[3] = 28;
   // boxGoal[4] = 12;
   // boxGoal[5] = 20;
   // boxGoal[6] = 1;

}
