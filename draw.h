#pragma once

#ifndef DRAW_H
#define DRAW_H

#include "Game.h"

class Draw {
public:
  void game_name();
  void lose_game();
  void grid(int GRID_SIZE, std::string tower_names[], int active_tower, int selection_tower, int active_grid_x, int active_grid_y, bool is_place_mode_active, TowerPositionData TowerPosition, std::vector<Enemy>& enemies, int door_x, int door_y, int color_code, std::vector<Bullet>& bullets);
  static std::string m_enemy_color;
  static int m_enemy_type;
  static bool is_tower_placed(int x, int y, TowerPositionData& TowerPosition);
  bool isCompleted = false;

private:
  std::string place_tower(int index, int level);
  int get_tower_index(int x, int y, TowerPositionData& TowerPosition);
  int get_tower_level(int x, int y, TowerPositionData& TowerPosition);
  void top_grid(int i, int GRID_SIZE, bool is_place_mode_active, int active_grid_x, int active_grid_y, TowerPositionData TowerPosition, std::vector<Enemy>& enemies, int door_x, int door_y, int color_code);
  void render_tower_names(int& name_index, int selection_tower, int active_tower, bool is_place_mode_active, std::string tower_names[]);
  void bottom_grid(int i, int GRID_SIZE, bool is_place_mode_active, int active_grid_x, int active_grid_y, TowerPositionData TowerPosition, std::vector<Enemy>& enemies);
  void render_bullets(const std::vector<Bullet>& bullets);
};

#endif
