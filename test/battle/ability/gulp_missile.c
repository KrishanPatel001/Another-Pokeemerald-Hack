#include "global.h"
#include "test/battle.h"

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: If base Cramorant hits target with Surf it transforms into Gulping form if max HP is over 1/2")
=======
ASSUMPTIONS
{
    // ASSUME(GetMoveCategory(MOVE_AERIAL_ACE) == DAMAGE_CATEGORY_PHYSICAL);
}

SINGLE_BATTLE_TEST("(Gulp Missile) If base Cramorant hits target with Surf it transforms into Gulping form if max HP is over 1/2")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, player);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        HP_BAR(opponent);
=======
        HP_BAR(opponent);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
>>>>>>> 11d8f44022 (Updated to upcoming)
    } THEN {
        EXPECT_EQ(player->species, SPECIES_CRAMORANT_GULPING);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: If base Cramorant hits target with Surf it transforms into Gorging form if max HP is under 1/2")
=======
SINGLE_BATTLE_TEST("(Gulp Missile) If base Cramorant hits target with Surf it transforms into Gorging form if max HP is under 1/2")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { HP(120); MaxHP(250); Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, player);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        HP_BAR(opponent);
=======
        HP_BAR(opponent);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
>>>>>>> 11d8f44022 (Updated to upcoming)
    } THEN {
        EXPECT_EQ(player->species, SPECIES_CRAMORANT_GORGING);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: If base Cramorant is under water it transforms into one of its forms")
=======
SINGLE_BATTLE_TEST("(Gulp Missile) If base Cramorant is under water it transforms into one of its forms")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DIVE); }
<<<<<<< HEAD
        TURN { SKIP_TURN(player); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DIVE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DIVE, player);
=======
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DIVE, player);
        NOT HP_BAR(opponent);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
>>>>>>> 11d8f44022 (Updated to upcoming)
    } THEN {
        EXPECT_EQ(player->species, SPECIES_CRAMORANT_GULPING);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: Power Herb does not prevent Cramaront from transforming")
=======
SINGLE_BATTLE_TEST("(Gulp Missile) Power Herb does not prevent Cramaront from transforming")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); Item(ITEM_POWER_HERB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DIVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DIVE, player);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        MESSAGE("Cramorant became fully charged due to its Power Herb!");
=======
        MESSAGE("Cramorant became fully charged due to its Power Herb!");
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
>>>>>>> 11d8f44022 (Updated to upcoming)
        HP_BAR(opponent);
    } THEN {
        EXPECT_EQ(player->species, SPECIES_CRAMORANT_GULPING);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: Transformed Cramorant deal 1/4 of damage opposing mon if hit by a damaging move, Gulping also lowers defense")
=======
SINGLE_BATTLE_TEST("(Gulp Missile) Transformed Cramorant deal 1/4 of damage opposing mon if hit by a damaging move, Gulping also lowers defense")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    s16 gulpMissileDamage;

    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, player);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
=======
        HP_BAR(opponent);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
>>>>>>> 11d8f44022 (Updated to upcoming)
        HP_BAR(opponent, captureDamage: &gulpMissileDamage);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("The opposing Wobbuffet's Defense fell!");
    } THEN {
        EXPECT_EQ(gulpMissileDamage, opponent->maxHP / 4);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE - 1);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: Cramorant in Gorging paralyzes the target if hit by a damaging move")
=======
SINGLE_BATTLE_TEST("(Gulp Missile) Cramorant in Gorging paralyzes the target if hit by a damaging move")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { HP(120); MaxHP(250); Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, player);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
=======
        HP_BAR(opponent);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
>>>>>>> 11d8f44022 (Updated to upcoming)
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
        STATUS_ICON(opponent, paralysis: TRUE);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: triggers even if the user is fainted by opposing mon")
=======
SINGLE_BATTLE_TEST("(Gulp Missile) triggers even if the user is fainted by opposing mon")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { HP(1); MaxHP(250); Ability(ABILITY_GULP_MISSILE); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); MOVE(opponent, MOVE_SCRATCH); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, player);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
=======
        HP_BAR(opponent);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
>>>>>>> 11d8f44022 (Updated to upcoming)
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
        STATUS_ICON(opponent, paralysis: TRUE);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: Transformed Cramorant Gulping lowers defense but is prevented by stat reduction preventing abilities")
=======
SINGLE_BATTLE_TEST("(Gulp Missile) Transformed Cramorant Gulping lowers defense but is prevented by stat reduction preventing abilities")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    u32 species;
    enum Ability ability;
    PARAMETRIZE { species = SPECIES_METAGROSS; ability = ABILITY_CLEAR_BODY; }
    PARAMETRIZE { species = SPECIES_CORVIKNIGHT; ability = ABILITY_MIRROR_ARMOR; }
    PARAMETRIZE { species = SPECIES_CHATOT; ability = ABILITY_BIG_PECKS; }
    GIVEN {
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(species) { Ability(ability); HP(9999); MaxHP(9999); } // In Gen 5 data, Surf would be enough to knock out Chatot
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, player);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
=======
        HP_BAR(opponent);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
>>>>>>> 11d8f44022 (Updated to upcoming)
        ABILITY_POPUP(opponent, ability);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

<<<<<<< HEAD
SINGLE_BATTLE_TEST("Gulp Missile: Transformed Cramorant Gulping lowers defense and still triggers other effects after")
=======
SINGLE_BATTLE_TEST("(Gulp Missile) Transformed Cramorant Gulping lowers defense and still triggers other effects after")
>>>>>>> 11d8f44022 (Updated to upcoming)
{
    // Make sure attacker and target are correct after triggering the ability
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_INFILTRATOR; }
    PARAMETRIZE { ability = ABILITY_CLEAR_BODY; }
    GIVEN {
        ASSUME(MoveMakesContact(MOVE_SCRATCH));
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); Item(ITEM_ROCKY_HELMET); }
        OPPONENT(SPECIES_DRAGAPULT) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, player);
<<<<<<< HEAD
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
=======
        HP_BAR(opponent);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        ABILITY_POPUP(player, ABILITY_GULP_MISSILE);
>>>>>>> 11d8f44022 (Updated to upcoming)
        HP_BAR(opponent);
        if (ability == ABILITY_INFILTRATOR) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("The opposing Dragapult's Defense fell!");
        } else {
            ABILITY_POPUP(opponent, ABILITY_CLEAR_BODY);
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Gulp Missile triggered by explosion doesn't freeze the game")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_CRAMORANT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SURF); MOVE(player, MOVE_EXPLOSION); }
    }
}
<<<<<<< HEAD

SINGLE_BATTLE_TEST("Gulp Missile only changes forms for Cramorant")
{
    GIVEN {
        ASSUME(!gAbilitiesInfo[ABILITY_GULP_MISSILE].cantBeSwapped);
        ASSUME(!gAbilitiesInfo[ABILITY_LIGHTNING_ROD].cantBeSwapped);
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(SPECIES_PIKACHU) { Ability(ABILITY_LIGHTNING_ROD); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SKILL_SWAP); }
        TURN { MOVE(opponent, MOVE_SURF); MOVE(player, MOVE_SURF); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, opponent);
        }
    } THEN {
        EXPECT_EQ(player->species, SPECIES_CRAMORANT);
        EXPECT_EQ(opponent->species, SPECIES_PIKACHU);
    }
}

SINGLE_BATTLE_TEST("Gulp Missile: If Cramorant loses Gulp Missile, it cannot spit out its prey")
{
    GIVEN {
        ASSUME(!gAbilitiesInfo[ABILITY_GULP_MISSILE].cantBeSwapped);
        ASSUME(!gAbilitiesInfo[ABILITY_LIGHTNING_ROD].cantBeSwapped);
        PLAYER(SPECIES_CRAMORANT) { Ability(ABILITY_GULP_MISSILE); }
        OPPONENT(SPECIES_PIKACHU) { Ability(ABILITY_LIGHTNING_ROD); }
    } WHEN {
        TURN { MOVE(player, MOVE_SURF); MOVE(opponent, MOVE_SKILL_SWAP); }
        TURN { MOVE(opponent, MOVE_SCRATCH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE_INSTANT, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKILL_SWAP, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCRATCH, opponent);
        HP_BAR(player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FORM_CHANGE, player);
            HP_BAR(opponent);
        }
    } THEN {
        EXPECT_EQ(player->species, SPECIES_CRAMORANT_GULPING);
        EXPECT_EQ(opponent->species, SPECIES_PIKACHU);
    }
}
=======
>>>>>>> 11d8f44022 (Updated to upcoming)
