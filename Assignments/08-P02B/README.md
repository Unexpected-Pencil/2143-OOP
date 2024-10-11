## Program 2B - Class design

### Jacob Lawler

### The purpose of this assignment is to design a set of classes for a digital version of the game Knucklebones. The goal of this assignment is to organize your ideas and determine the relationships between different components of the game, such as players, dice, and the game itself. I also determine when to use composition and inheritance.

# Dice Class:

* Data: sides, current_value
* Actions: roll(), get_value()
* Relationships: Dice will be used by the Player to roll during the game.

# Player Class:

* Data: name, score, dice_set, player_stats
* Actions: roll_dice(), get_score(), update_score()
* Relationships: Each player has a set of dice and participates in the game.

# Game Class:

* Data: players, rules, current_round
* Actions: start_game(), end_game(), get_winner()
* Relationships: The Game class controls the players and their actions.

# Knucklebones Class:

* Data: board, knucklebones_specific_rules
* Actions: start_round(), end_round(), calculate_winner()
* Relationships: Inherits from Game, as Knucklebones is a game with specific rules and conditions.
