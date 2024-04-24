#include <entry.h>
#include "game.h"

// TODO: Remove this
#include <platform/platform.h>

b8 create_game(game* out_game) {

    out_game->app_config.start_pos_x = 100;
    out_game->app_config.start_pos_y = 100;
    out_game->app_config.start_width = 1280;
    out_game->app_config.start_height = 720;
    out_game->app_config.name = "Linwi Engine Testbed";

    out_game->update = game_update;
    out_game->render = game_render;
    out_game->initialize = game_initialize;
    out_game->on_resize = game_on_resize;

    // Create the game state.
    out_game->state = lallocate(sizeof(game_state), MEMORY_TAG_GAME);

    return TRUE;
}
