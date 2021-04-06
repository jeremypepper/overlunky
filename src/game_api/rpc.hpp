#include "state.hpp"
#include <cstdint>
#include <vector>

int32_t spawn_entity(uint32_t id, float x, float y, bool s, float vx, float vy, bool snap);
int32_t spawn_door(float x, float y, uint8_t w, uint8_t l, uint8_t t);
void spawn_backdoor(float x, float y);
int32_t spawn_entity_abs(uint32_t id, float x, float y, int layer, float vx, float vy);
int32_t spawn_door_abs(float x, float y, int layer, uint8_t w, uint8_t l, uint8_t t);
void spawn_backdoor_abs(float x, float y);
void teleport(float x, float y, bool s, float vx, float vy, bool snap);
void godmode(bool g);
void darkmode(bool g);
void zoom(float level);
void list_items();
int32_t get_entity_at(float x, float y, bool s, float r, uint32_t mask);
void move_entity(uint32_t id, float x, float y, bool s, float vx, float vy, bool snap);
void move_entity_abs(uint32_t id, float x, float y, float vx, float vy);
uint32_t get_entity_flags(uint32_t id);
void set_entity_flags(uint32_t id, uint32_t flags);
uint32_t get_entity_flags2(uint32_t id);
void set_entity_flags2(uint32_t id, uint32_t flags);
void set_hud_flags(uint32_t flags);
uint32_t get_hud_flags();
void set_pause(uint8_t pause);
void player_status();
Entity *get_entity_ptr(uint32_t id);
int32_t get_entity_type(uint32_t id);
int get_entity_ai_state(uint32_t id);
StateMemory *get_state_ptr();
std::vector<Player *> get_players();
std::pair<float, float> click_position(float x, float y);
std::pair<float, float> screen_position(float x, float y);
float screen_distance(float x);
float get_zoom_level();
std::vector<uint32_t> get_entities();
std::vector<uint32_t> get_entities_by(uint32_t type, uint32_t mask, int layer);
template <typename... Args>
std::vector<uint32_t> get_entities_by_type(Args... args);
std::vector<uint32_t> get_entities_by_type(std::vector<uint32_t> types);
std::vector<uint32_t> get_entities_by_mask(uint32_t mask);
std::vector<uint32_t> get_entities_by_layer(int layer);
std::vector<uint32_t> get_entities_at(uint32_t type, uint32_t mask, float x, float y, int layer, float r);
void set_door_target(uint32_t id, uint8_t w, uint8_t l, uint8_t t);
std::tuple<uint8_t, uint8_t, uint8_t> get_door_target(uint32_t id);
void set_contents(uint32_t id, uint32_t item);
void entity_remove_item(uint32_t id, uint32_t item);
int32_t spawn_entity_over(uint32_t id, uint32_t over, float x, float y);
bool entity_has_item_uid(uint32_t id, uint32_t item);
bool entity_has_item_type(uint32_t id, uint32_t type);
void lock_door_at(float x, float y);
void unlock_door_at(float x, float y);
uint32_t get_frame_count();
void carry(uint32_t mount, uint32_t rider);
void kill_entity(uint32_t id);
void apply_entity_db(uint32_t id);
void flip_entity(uint32_t id);
std::pair<float, float> get_camera_position();
void set_camera_position(float cx, float cy);
void warp(uint8_t w, uint8_t l, uint8_t t);
void set_seed(uint32_t seed);
void set_arrowtrap_projectile(uint32_t regular_item_id, uint32_t poison_item_id);
void modify_sparktraps(float angle_increment = 0.015, float distance = 3.0);
void set_kapala_blood_threshold(uint8_t threshold);
void set_kapala_hud_icon(int8_t icon_index);
SaveData* savedata();
std::vector<int64_t> read_prng();
