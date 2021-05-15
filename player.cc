#include "player.h"
#include <vector>
#include "cpputils/graphics/image.h"

void PlayerProjectile::Draw(graphics::Image &screen) {
  // orange-red
  screen.DrawRectangle(GetX() + 19, GetY() + 21, 12, 6, 232, 94, 14);
  screen.DrawRectangle(GetX() + 23, GetY() + 27, 10, 3, 232, 94, 14);
  screen.DrawRectangle(GetX() + 25, GetY() + 30, 6, 3, 232, 94, 14);
  screen.DrawRectangle(GetX() + 21, GetY() + 19, 8, 2, 232, 94, 14);
  screen.DrawRectangle(GetX() + 31, GetY() + 23, 2, 4, 232, 94, 14);
  screen.DrawRectangle(GetX() + 17, GetY() + 25, 2, 4, 232, 94, 14);
  screen.DrawRectangle(GetX() + 17, GetY() + 31, 2, 2, 232, 94, 14);
  screen.DrawRectangle(GetX() + 21, GetY() + 33, 2, 2, 232, 94, 14);

  // orange
  screen.DrawRectangle(GetX() + 25, GetY() + 23, 4, 6, 255, 184, 51);
  screen.DrawRectangle(GetX() + 29, GetY() + 25, 2, 5, 255, 184, 51);
  screen.DrawRectangle(GetX() + 27, GetY() + 29, 2, 2, 255, 184, 51);
  screen.DrawRectangle(GetX() + 21, GetY() + 23, 4, 2, 255, 184, 51);
  screen.DrawRectangle(GetX() + 23, GetY() + 21, 4, 2, 255, 184, 51);
}
  

                
void Player::Draw(graphics::Image &screen) {
  screen.DrawRectangle(GetX() + 10, GetY() + 44, 10, 6, 151, 51, 2);
  screen.DrawRectangle(GetX() + 7, GetY() + 47, 3, 3, 151, 51, 2);
  screen.DrawRectangle(GetX() + 32, GetY() + 44, 10, 6, 151, 51, 2);
  screen.DrawRectangle(GetX() + 42, GetY() + 47, 3, 3, 151, 51, 2);
  screen.DrawRectangle(GetX() + 10, GetY() + 11, 3, 8, 151, 51, 2);
  screen.DrawRectangle(GetX() + 13, GetY() + 17, 3, 3, 151, 51, 2);
  screen.SetRed(GetX() + 12, GetY() + 19, 151);
  screen.SetGreen(GetX() + 12, GetY() + 19, 51);
  screen.SetBlue(GetX() + 12, GetY() + 19, 2);
  screen.DrawRectangle(GetX() + 13, GetY() + 8, 9, 3, 151, 51, 2);
  screen.DrawRectangle(GetX() + 16, GetY() + 11, 3, 6, 151, 51, 2);
  screen.DrawRectangle(GetX() + 19, GetY() + 14, 3, 3, 151, 51, 2);

  // black
  screen.DrawRectangle(GetX() + 12, GetY() + 1, 20, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 12, GetY() + 2, 1, 9, 0, 0, 0);
  screen.DrawRectangle(GetX() + 9, GetY() + 10, 3, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 9, GetY() + 11, 1, 9, 0, 0, 0);
  screen.DrawRectangle(GetX() + 10, GetY() + 19, 2, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 11, GetY() + 20, 5, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 15, GetY() + 21, 1, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 12, GetY() + 22, 3, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 12, GetY() + 22, 1, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 9, GetY() + 25, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 9, GetY() + 25, 1, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 6, GetY() + 28, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 6, GetY() + 28, 1, 5, 0, 0, 0);
  screen.DrawRectangle(GetX() + 5, GetY() + 32, 1, 10, 0, 0, 0);
  screen.DrawRectangle(GetX() + 5, GetY() + 41, 8, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 12, GetY() + 41, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 9, GetY() + 43, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 9, GetY() + 43, 1, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 6, GetY() + 46, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 6, GetY() + 46, 1, 5, 0, 0, 0);
  screen.DrawRectangle(GetX() + 6, GetY() + 49, 15, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 20, GetY() + 44, 1, 7, 0, 0, 0);
  screen.DrawRectangle(GetX() + 20, GetY() + 44, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 23, GetY() + 41, 1, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 23, GetY() + 41, 6, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 28, GetY() + 41, 1, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 28, GetY() + 44, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 31, GetY() + 44, 1, 7, 0, 0, 0);
  screen.DrawRectangle(GetX() + 31, GetY() + 49, 15, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 45, GetY() + 46, 1, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 42, GetY() + 46, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 42, GetY() + 43, 1, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 39, GetY() + 43, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 39, GetY() + 41, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 39, GetY() + 41, 7, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 45, GetY() + 28, 1, 14, 0, 0, 0);
  screen.DrawRectangle(GetX() + 42, GetY() + 28, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 42, GetY() + 26, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 41, GetY() + 25, 1, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 33, GetY() + 25, 9, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 33, GetY() + 23, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 33, GetY() + 23, 7, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 39, GetY() + 20, 1, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 39, GetY() + 20, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 30, GetY() + 17, 13, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 43, GetY() + 17, 3, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 33, GetY() + 14, 3, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 30, GetY() + 8, 3, 6, 0, 0, 0);
  screen.DrawRectangle(GetX() + 45, GetY() + 12, 1, 6, 0, 0, 0);
  screen.DrawRectangle(GetX() + 42, GetY() + 12, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 42, GetY() + 10, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 36, GetY() + 10, 7, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 36, GetY() + 8, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 36, GetY() + 8, 5, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 40, GetY() + 4, 1, 5, 0, 0, 0);
  screen.DrawRectangle(GetX() + 31, GetY() + 4, 10, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 31, GetY() + 1, 1, 4, 0, 0, 0);

  // skin color
  screen.DrawRectangle(GetX() + 22, GetY() + 8, 8, 15, 238, 207, 180);
  screen.DrawRectangle(GetX() + 13, GetY() + 11, 3, 6, 238, 207, 180);
  screen.DrawRectangle(GetX() + 19, GetY() + 11, 3, 3, 238, 207, 180);
  screen.DrawRectangle(GetX() + 16, GetY() + 17, 6, 6, 238, 207, 180);
  screen.DrawRectangle(GetX() + 30, GetY() + 14, 3, 3, 238, 207, 180);
  screen.DrawRectangle(GetX() + 33, GetY() + 8, 3, 6, 238, 207, 180);
  screen.DrawRectangle(GetX() + 36, GetY() + 11, 6, 6, 238, 207, 180);
  screen.DrawRectangle(GetX() + 42, GetY() + 13, 3, 4, 238, 207, 180);
  screen.DrawRectangle(GetX() + 30, GetY() + 20, 9, 3, 238, 207, 180);
  screen.DrawRectangle(GetX() + 6, GetY() + 33, 7, 8, 238, 207, 180);
  screen.DrawRectangle(GetX() + 13, GetY() + 35, 3, 3, 238, 207, 180);
  screen.DrawRectangle(GetX() + 39, GetY() + 32, 6, 9, 238, 207, 180);
  screen.DrawRectangle(GetX() + 36, GetY() + 35, 3, 5, 238, 207, 180);

  // white
  screen.DrawRectangle(GetX() + 13, GetY() + 2, 18, 6, 255, 255, 255);
  screen.DrawRectangle(GetX() + 31, GetY() + 5, 9, 3, 255, 255, 255);
  screen.DrawRectangle(GetX() + 22, GetY() + 23, 8, 6, 255, 255, 255);
  screen.DrawRectangle(GetX() + 13, GetY() + 23, 6, 9, 255, 255, 255);
  screen.DrawRectangle(GetX() + 13, GetY() + 32, 3, 3, 255, 255, 255);
  screen.DrawRectangle(GetX() + 10, GetY() + 26, 3, 7, 255, 255, 255);
  screen.DrawRectangle(GetX() + 33, GetY() + 26, 8, 6, 255, 255, 255);
  screen.DrawRectangle(GetX() + 41, GetY() + 27, 1, 5, 255, 255, 255);
  screen.DrawRectangle(GetX() + 42, GetY() + 29, 3, 3, 255, 255, 255);
  screen.DrawRectangle(GetX() + 36, GetY() + 32, 3, 3, 255, 255, 255);

  // red
  screen.DrawRectangle(GetX() + 19, GetY() + 29, 14, 12, 235, 53, 40);
  screen.DrawRectangle(GetX() + 29, GetY() + 38, 10, 6, 235, 53, 40);
  screen.DrawRectangle(GetX() + 13, GetY() + 38, 10, 6, 235, 53, 40);
  screen.DrawRectangle(GetX() + 16, GetY() + 32, 20, 9, 235, 53, 40);
  screen.DrawRectangle(GetX() + 19, GetY() + 23, 3, 9, 235, 53, 40);
  screen.DrawRectangle(GetX() + 30, GetY() + 23, 3, 9, 235, 53, 40);

  // yellow
  screen.DrawRectangle(GetX() + 19, GetY() + 32, 3, 3, 247, 247, 25);
  screen.DrawRectangle(GetX() + 30, GetY() + 32, 3, 3, 247, 247, 25);
}
void PlayerProjectile::Move(const graphics::Image& screen) {
  SetY(GetY() - 3);
  if (IsOutOfBounds(screen)) {
    SetIsActive(false);
  }
}

