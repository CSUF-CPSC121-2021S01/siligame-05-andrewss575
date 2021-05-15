#include "opponent.h"
#include <vector>
#include "cpputils/graphics/image.h"

void OpponentProjectile::Draw(graphics::Image &screen) {
  screen.DrawRectangle(GetX() + 18, GetY() + 26, 16, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 22, GetY() + 20, 8, 14, 0, 0, 0);
  screen.DrawRectangle(GetX() + 23, GetY() + 19, 5, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 19, GetY() + 31, 14, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 21, GetY() + 32, 10, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 19, GetY() + 24, 14, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 24, GetY() + 34, 4, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 20, GetY() + 22, 12, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 21, GetY() + 21, 10, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 18, GetY() + 30, 15, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 20, GetY() + 29, 12, 1, 0, 0, 0);

  // green
  screen.DrawRectangle(GetX() + 23, GetY() + 29, 6, 5, 11, 163, 37);
  screen.DrawRectangle(GetX() + 24, GetY() + 22, 4, 6, 11, 163, 37);
  screen.DrawRectangle(GetX() + 22, GetY() + 24, 8, 3, 11, 163, 37);
  screen.DrawRectangle(GetX() + 23, GetY() + 23, 6, 5, 11, 163, 37);
  screen.DrawRectangle(GetX() + 21, GetY() + 25, 10, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 22, GetY() + 21, 2, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 21, GetY() + 22, 2, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 21, GetY() + 22, 1, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 20, GetY() + 24, 1, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 24, GetY() + 20, 4, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 28, GetY() + 21, 2, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 29, GetY() + 22, 2, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 30, GetY() + 23, 1, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 31, GetY() + 24, 1, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 19, GetY() + 27, 3, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 20, GetY() + 26, 1, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 21, GetY() + 28, 2, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 29, GetY() + 28, 2, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 30, GetY() + 27, 3, 1, 11, 163, 37);
  screen.DrawRectangle(GetX() + 31, GetY() + 26, 1, 1, 11, 163, 37);

  // white
  screen.DrawRectangle(GetX() + 18, GetY() + 29, 2, 1, 255, 255, 255);
  screen.DrawRectangle(GetX() + 19, GetY() + 30, 3, 1, 255, 255, 255);
  screen.DrawRectangle(GetX() + 21, GetY() + 31, 2, 1, 255, 255, 255);
  screen.DrawRectangle(GetX() + 22, GetY() + 32, 8, 1, 255, 255, 255);
  screen.DrawRectangle(GetX() + 24, GetY() + 33, 4, 1, 255, 255, 255);
  screen.DrawRectangle(GetX() + 29, GetY() + 31, 2, 1, 255, 255, 255);
  screen.DrawRectangle(GetX() + 30, GetY() + 30, 3, 1, 255, 255, 255);
  screen.DrawRectangle(GetX() + 32, GetY() + 29, 2, 1, 255, 255, 255);
}
  


  void Opponent::Draw(graphics::Image &screen) {

  // dark browns
  screen.DrawRectangle(GetX() + 10, GetY() + 38, 12, 6, 107, 53, 6);
  screen.DrawRectangle(GetX() + 12, GetY() + 36, 8, 2, 107, 53, 6);
  screen.DrawRectangle(GetX() + 16, GetY() + 34, 4, 2, 107, 53, 6);
  screen.DrawRectangle(GetX() + 30, GetY() + 38, 12, 6, 107, 53, 6);
  screen.DrawRectangle(GetX() + 32, GetY() + 34, 4, 4, 107, 53, 6);
  screen.DrawRectangle(GetX() + 32, GetY() + 36, 8, 2, 107, 53, 6);

  // lighter brown
  screen.DrawRectangle(GetX() + 20, GetY() + 32, 12, 6, 235, 166, 106);
  screen.DrawRectangle(GetX() + 22, GetY() + 38, 8, 2, 235, 166, 106);

  // light browns
  screen.DrawRectangle(GetX() + 12, GetY() + 22, 28, 6, 189, 103, 28);
  screen.DrawRectangle(GetX() + 14, GetY() + 28, 24, 2, 189, 103, 28);
  screen.DrawRectangle(GetX() + 16, GetY() + 20, 20, 2, 189, 103, 28);
  screen.DrawRectangle(GetX() + 18, GetY() + 18, 6, 2, 189, 103, 28);
  screen.DrawRectangle(GetX() + 22, GetY() + 12, 8, 18, 189, 103, 28);
  screen.DrawRectangle(GetX() + 32, GetY() + 18, 2, 2, 189, 103, 28);

  // whites
  screen.DrawRectangle(GetX() + 16, GetY() + 26, 2, 4, 255, 255, 255);
  screen.DrawRectangle(GetX() + 34, GetY() + 26, 2, 4, 255, 255, 255);
  screen.DrawRectangle(GetX() + 20, GetY() + 16, 4, 8, 255, 255, 255);
  screen.DrawRectangle(GetX() + 28, GetY() + 16, 4, 8, 255, 255, 255);

  // black
  screen.DrawRectangle(GetX() + 9, GetY() + 37, 1, 8, 0, 0, 0);
  screen.DrawRectangle(GetX() + 9, GetY() + 44, 14, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 22, GetY() + 40, 1, 5, 0, 0, 0);
  screen.DrawRectangle(GetX() + 22, GetY() + 40, 8, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 29, GetY() + 40, 1, 5, 0, 0, 0);
  screen.DrawRectangle(GetX() + 29, GetY() + 44, 14, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 42, GetY() + 37, 1, 8, 0, 0, 0);
  screen.DrawRectangle(GetX() + 40, GetY() + 37, 3, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 40, GetY() + 35, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 36, GetY() + 35, 5, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 36, GetY() + 33, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 32, GetY() + 33, 5, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 14, GetY() + 30, 24, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 32, GetY() + 32, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 38, GetY() + 28, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 40, GetY() + 22, 2, 6, 0, 0, 0);
  screen.DrawRectangle(GetX() + 36, GetY() + 20, 4, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 34, GetY() + 18, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 30, GetY() + 12, 4, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 28, GetY() + 14, 8, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 32, GetY() + 16, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 28, GetY() + 16, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 22, GetY() + 10, 8, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 28, GetY() + 20, 2, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 22, GetY() + 20, 2, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 22, GetY() + 16, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 18, GetY() + 16, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 16, GetY() + 14, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 18, GetY() + 12, 4, 4, 0, 0, 0);
  screen.DrawRectangle(GetX() + 16, GetY() + 18, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 12, GetY() + 20, 4, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 10, GetY() + 22, 2, 6, 0, 0, 0);
  screen.DrawRectangle(GetX() + 12, GetY() + 28, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 18, GetY() + 32, 2, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 15, GetY() + 33, 3, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 15, GetY() + 34, 1, 2, 0, 0, 0);
  screen.DrawRectangle(GetX() + 11, GetY() + 35, 5, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 11, GetY() + 35, 1, 3, 0, 0, 0);
  screen.DrawRectangle(GetX() + 9, GetY() + 37, 3, 1, 0, 0, 0);
  screen.DrawRectangle(GetX() + 18, GetY() + 26, 16, 2, 0, 0, 0);
}

void Opponent::Move(const graphics::Image& screen) {
  if (going_right_ && GetX() + GetWidth() >= screen.GetWidth()) {
    going_right_ = false;
  } else if (!going_right_ && GetX() <= 0) {
    going_right_ = true;
  }
  int offset = going_right_ ? 1 : -1;

  SetX(GetX() + offset * 5);
  SetY(GetY() + 2);

  if (IsOutOfBounds(screen)) {
    SetIsActive(false);
  }
}

void OpponentProjectile::Move(const graphics::Image& screen) {
  SetY(GetY() + 3);
  if (IsOutOfBounds(screen)) {
    SetIsActive(false);
  }
}

void LaunchProjectile::Move(const graphics::Image& screen) {
  return nullptr;
}
