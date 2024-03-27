TestProfLab_MapScripts::
# 2 "data/maps/TestProfLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestProfLab_ControlScript_ControlState
	.byte 0


TestProfLab_ControlScript_ControlState::
# 7 "data/maps/TestProfLab/scripts.pory"
	removeobject 5
# 8 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 0
# 9 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


TestProfLab_PersonScript_TestProf::
# 13 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_PersonScript_TestProf_2
# 36 "data/maps/TestProfLab/scripts.pory"
	lock
# 37 "data/maps/TestProfLab/scripts.pory"
	faceplayer
# 38 "data/maps/TestProfLab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, TestProfLab_PersonScript_TestProf_15
TestProfLab_PersonScript_TestProf_14:
# 48 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_3, MSGBOX_NPC
TestProfLab_PersonScript_TestProf_12:
# 50 "data/maps/TestProfLab/scripts.pory"
	release
TestProfLab_PersonScript_TestProf_1:
	end

TestProfLab_PersonScript_TestProf_2:
# 14 "data/maps/TestProfLab/scripts.pory"
	lock
# 15 "data/maps/TestProfLab/scripts.pory"
	faceplayer
# 16 "data/maps/TestProfLab/scripts.pory"
	message TestProfLab_PersonScript_TestProf_Text_0
# 17 "data/maps/TestProfLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 18 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 19 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestProfLab_PersonScript_TestProf_6
# 23 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestProfLab_PersonScript_TestProf_7
# 27 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestProfLab_PersonScript_TestProf_8
TestProfLab_PersonScript_TestProf_5:
# 31 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_1
# 32 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 33 "data/maps/TestProfLab/scripts.pory"
	release
	goto TestProfLab_PersonScript_TestProf_1

TestProfLab_PersonScript_TestProf_6:
# 20 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 21 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto TestProfLab_PersonScript_TestProf_5

TestProfLab_PersonScript_TestProf_7:
# 24 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 25 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto TestProfLab_PersonScript_TestProf_5

TestProfLab_PersonScript_TestProf_8:
# 28 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 29 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto TestProfLab_PersonScript_TestProf_5

TestProfLab_PersonScript_TestProf_13:
# 39 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_2, MSGBOX_YESNO
# 40 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_PersonScript_TestProf_18
# 44 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_3, MSGBOX_NPC
	goto TestProfLab_PersonScript_TestProf_12

TestProfLab_PersonScript_TestProf_15:
# 38 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, TestProfLab_PersonScript_TestProf_13
	goto TestProfLab_PersonScript_TestProf_14

TestProfLab_PersonScript_TestProf_18:
# 41 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_UpgradeToNatDex
	goto TestProfLab_PersonScript_TestProf_12


TestProfLab_PersonScript_BallChangeAide::
# 56 "data/maps/TestProfLab/scripts.pory"
	lock
# 57 "data/maps/TestProfLab/scripts.pory"
	faceplayer
# 58 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_BallChangeAide_Text_0, MSGBOX_YESNO
# 59 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_PersonScript_BallChangeAide_2
# 77 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TestProfLab_PersonScript_BallChangeAide_3
TestProfLab_PersonScript_BallChangeAide_1:
# 80 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_PersonScript_BallChangeAide_2:
# 60 "data/maps/TestProfLab/scripts.pory"
	message TestProfLab_PersonScript_BallChangeAide_Text_1
# 61 "data/maps/TestProfLab/scripts.pory"
	multichoice 25, 4, MULTI_BALL_CHANGE, 0
# 62 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 63 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestProfLab_PersonScript_BallChangeAide_7
# 66 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestProfLab_PersonScript_BallChangeAide_8
# 69 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestProfLab_PersonScript_BallChangeAide_9
# 72 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq TestProfLab_PersonScript_BallChangeAide_10
TestProfLab_PersonScript_BallChangeAide_6:
# 75 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_BallChangeAide_Text_2, MSGBOX_DEFAULT
	goto TestProfLab_PersonScript_BallChangeAide_1

TestProfLab_PersonScript_BallChangeAide_3:
# 78 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_BallChangeAide_Text_3, MSGBOX_DEFAULT
	goto TestProfLab_PersonScript_BallChangeAide_1

TestProfLab_PersonScript_BallChangeAide_7:
# 64 "data/maps/TestProfLab/scripts.pory"
	setmonball ITEM_DUSK_BALL
	goto TestProfLab_PersonScript_BallChangeAide_6

TestProfLab_PersonScript_BallChangeAide_8:
# 67 "data/maps/TestProfLab/scripts.pory"
	setmonball ITEM_QUICK_BALL
	goto TestProfLab_PersonScript_BallChangeAide_6

TestProfLab_PersonScript_BallChangeAide_9:
# 70 "data/maps/TestProfLab/scripts.pory"
	setmonball ITEM_ULTRA_BALL
	goto TestProfLab_PersonScript_BallChangeAide_6

TestProfLab_PersonScript_BallChangeAide_10:
# 73 "data/maps/TestProfLab/scripts.pory"
	setmonball ITEM_DIVE_BALL
	goto TestProfLab_PersonScript_BallChangeAide_6


TestProfLab_ObjectScript_PokeballOne::
# 85 "data/maps/TestProfLab/scripts.pory"
	lock
# 86 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 87 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballOne_2
# 105 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballOne_1:
# 107 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 108 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballOne_2:
# 88 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_5
# 93 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_6
# 98 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_7
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_5:
# 89 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 90 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 91 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_6:
# 94 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 95 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 96 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_7:
# 99 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 100 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 101 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1


TestProfLab_ObjectScript_PokeballTwo::
# 113 "data/maps/TestProfLab/scripts.pory"
	lock
# 114 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 115 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballTwo_2
# 133 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballTwo_1:
# 135 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 136 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballTwo_2:
# 116 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_5
# 121 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_6
# 126 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_7
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_5:
# 117 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 118 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 119 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_6:
# 122 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 123 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 124 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_7:
# 127 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 128 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 129 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1


TestProfLab_ObjectScript_PokeballThree::
# 141 "data/maps/TestProfLab/scripts.pory"
	lock
# 142 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 143 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballThree_2
# 161 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballThree_1:
# 163 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 164 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballThree_2:
# 144 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_5
# 149 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_6
# 154 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_7
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_5:
# 145 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 146 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 147 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_6:
# 150 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 151 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 152 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_7:
# 155 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 156 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 157 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1


TestProfLab_TrainerScript_MayBattle::
# 169 "data/maps/TestProfLab/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 170 "data/maps/TestProfLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 171 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 172 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 173 "data/maps/TestProfLab/scripts.pory"
	applymovement 5, TestProfLab_MovementScript_RivalMoveUp
# 174 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 175 "data/maps/TestProfLab/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, TestProfLab_TextScript_RivalIntro, Route103_Text_MayDefeated, TestProfLab_ActionScript_RivalAftermath, FALSE
	end


TestProfLab_TrainerScript_BrendanBattle::
# 180 "data/maps/TestProfLab/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 181 "data/maps/TestProfLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 182 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 183 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 184 "data/maps/TestProfLab/scripts.pory"
	applymovement 5, TestProfLab_MovementScript_RivalMoveUp
# 185 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 186 "data/maps/TestProfLab/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, TestProfLab_TextScript_RivalIntro, Route103_Text_BrendanDefeated, TestProfLab_ActionScript_RivalAftermath, FALSE
	end


TestProfLab_ActionScript_GiveStarter::
# 191 "data/maps/TestProfLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 192 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_0, MSGBOX_YESNO
# 193 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveStarter_1
# 219 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 220 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveStarter_1:
# 194 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 195 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 2
# 196 "data/maps/TestProfLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 10, ITEM_ORAN_BERRY
# 197 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_BallToRemove
# 198 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveStarter_5
# 204 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveStarter_6
# 212 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 213 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_3
TestProfLab_ActionScript_GiveStarter_4:
# 215 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 216 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_InitiateDexAndRivalSequence
	return

TestProfLab_ActionScript_GiveStarter_5:
# 199 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 200 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_1
# 201 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_SetBallFlag
# 202 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveStarter_4

TestProfLab_ActionScript_GiveStarter_6:
# 205 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_1
# 207 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_SetBallFlag
# 208 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
# 209 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_2
	goto TestProfLab_ActionScript_GiveStarter_4


TestProfLab_ActionScript_BallToRemove::
# 225 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_BallToRemove_2
# 229 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_BallToRemove_5
# 233 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_BallToRemove_7
	return

TestProfLab_ActionScript_BallToRemove_2:
# 226 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
	return

TestProfLab_ActionScript_BallToRemove_5:
# 230 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
	return

TestProfLab_ActionScript_BallToRemove_7:
# 234 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
	return


TestProfLab_ActionScript_SetBallFlag::
# 240 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_2
# 244 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_5
# 248 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_7
	return

TestProfLab_ActionScript_SetBallFlag_2:
# 241 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
	return

TestProfLab_ActionScript_SetBallFlag_5:
# 245 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_2
	return

TestProfLab_ActionScript_SetBallFlag_7:
# 249 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_3
	return


TestProfLab_ActionScript_InitiateDexAndRivalSequence::
# 255 "data/maps/TestProfLab/scripts.pory"
	lock
# 256 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 257 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_TurnToProf
# 258 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_InitiateDexAndRivalSequence_2
TestProfLab_ActionScript_InitiateDexAndRivalSequence_1:
# 262 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_InitiateDexAndRivalSequence_5
TestProfLab_ActionScript_InitiateDexAndRivalSequence_4:
# 266 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_InitiateDexAndRivalSequence_8
TestProfLab_ActionScript_InitiateDexAndRivalSequence_7:
# 270 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 271 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 272 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GivePokedex
# 273 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_InitRivalSequence
# 274 "data/maps/TestProfLab/scripts.pory"
	release
	return

TestProfLab_ActionScript_InitiateDexAndRivalSequence_2:
# 259 "data/maps/TestProfLab/scripts.pory"
	setobjectxy 5, 5, 11
# 260 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallOne
	goto TestProfLab_ActionScript_InitiateDexAndRivalSequence_1

TestProfLab_ActionScript_InitiateDexAndRivalSequence_5:
# 263 "data/maps/TestProfLab/scripts.pory"
	setobjectxy 5, 6, 11
# 264 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallTwo
	goto TestProfLab_ActionScript_InitiateDexAndRivalSequence_4

TestProfLab_ActionScript_InitiateDexAndRivalSequence_8:
# 267 "data/maps/TestProfLab/scripts.pory"
	setobjectxy 5, 7, 11
# 268 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallThree
	goto TestProfLab_ActionScript_InitiateDexAndRivalSequence_7


TestProfLab_ActionScript_GivePokedex::
# 279 "data/maps/TestProfLab/scripts.pory"
	lock
# 280 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_TakePokedex, MSGBOX_DEFAULT
# 281 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/TestProfLab/scripts.pory"
	message TestProfLab_ActionScript_GivePokedex_Text_0
# 283 "data/maps/TestProfLab/scripts.pory"
	waitfanfare
# 284 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 285 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 286 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 287 "data/maps/TestProfLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 288 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 289 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 290 "data/maps/TestProfLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 291 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GivePokedex_Text_1, MSGBOX_DEFAULT
# 292 "data/maps/TestProfLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 293 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GivePokedex_Text_2, MSGBOX_DEFAULT
# 294 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 295 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_ActionScript_InitRivalSequence::
# 300 "data/maps/TestProfLab/scripts.pory"
	checkplayergender
# 301 "data/maps/TestProfLab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, TestProfLab_TrainerScript_MayBattle
# 302 "data/maps/TestProfLab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, TestProfLab_TrainerScript_BrendanBattle
	return


TestProfLab_ActionScript_RivalAftermath::
# 306 "data/maps/TestProfLab/scripts.pory"
	lockall
# 307 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_RivalAftermath_Text_0
# 308 "data/maps/TestProfLab/scripts.pory"
	applymovement 5, TestProfLab_MovementScript_RivalLeave
# 309 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 310 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_TEST_BRENDAN
# 311 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 3
# 312 "data/maps/TestProfLab/scripts.pory"
	removeobject 5
# 313 "data/maps/TestProfLab/scripts.pory"
	fadedefaultbgm
# 314 "data/maps/TestProfLab/scripts.pory"
	releaseall
	return


TestProfLab_ActionScript_UpgradeToNatDex::
# 318 "data/maps/TestProfLab/scripts.pory"
	lock
# 319 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 320 "data/maps/TestProfLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 321 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 322 "data/maps/TestProfLab/scripts.pory"
	waitfanfare
# 323 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 324 "data/maps/TestProfLab/scripts.pory"
	special EnableNationalPokedex
# 325 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 326 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_ActionScript_StarterFade::
# 331 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 332 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 333 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


TestProfLab_ActionScript_NicknamePartyMon::
# 338 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 339 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 340 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknamePartyMon_1
	return

TestProfLab_ActionScript_NicknamePartyMon_1:
# 341 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 342 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


TestProfLab_ActionScript_NicknameBoxMon::
# 347 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 348 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 349 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknameBoxMon_2
TestProfLab_ActionScript_NicknameBoxMon_1:
# 352 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

TestProfLab_ActionScript_NicknameBoxMon_2:
# 350 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto TestProfLab_ActionScript_NicknameBoxMon_1


TestProfLab_TriggerScript_StartStarterSequence::
# 356 "data/maps/TestProfLab/scripts.pory"
	lock
# 357 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_MeetTestProf
# 358 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 359 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_BeginAdventureText
# 360 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 361 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 362 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_ProfMoves
# 363 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 364 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 1
# 365 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_TriggerScript_StartStarterSequence2::
# 369 "data/maps/TestProfLab/scripts.pory"
	lock
# 370 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_MeetTestProf2
# 371 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 372 "data/maps/TestProfLab/scripts.pory"
	goto TestProfLab_TriggerScript_StartStarterSequence
	return


TestProfLab_TriggerScript_StopLeaving::
# 376 "data/maps/TestProfLab/scripts.pory"
	lockall
# 377 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TriggerScript_StopLeaving_Text_0
# 378 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_DoNotLeave
# 379 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 380 "data/maps/TestProfLab/scripts.pory"
	releaseall
	return


# 383 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MeetTestProf:
# 384 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 384 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 384 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 384 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

# 387 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MeetTestProf2:
# 388 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 391 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_ProfMoves:
# 392 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 393 "data/maps/TestProfLab/scripts.pory"
	walk_right
# 393 "data/maps/TestProfLab/scripts.pory"
	walk_right
# 394 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 395 "data/maps/TestProfLab/scripts.pory"
	face_down
	step_end

# 398 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallOne:
# 399 "data/maps/TestProfLab/scripts.pory"
	walk_left
# 399 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 402 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallTwo:
# 403 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 406 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallThree:
# 407 "data/maps/TestProfLab/scripts.pory"
	face_left
	step_end

# 410 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_RivalMoveUp:
# 411 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 411 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 411 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 411 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 411 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 411 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

# 414 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_RivalLeave:
# 415 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 415 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 415 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 415 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 415 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 415 "data/maps/TestProfLab/scripts.pory"
	walk_down
	step_end

# 418 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_TurnToProf:
# 419 "data/maps/TestProfLab/scripts.pory"
	face_right
	step_end

# 422 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_DoNotLeave:
# 423 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

TestProfLab_PersonScript_TestProf_Text_0:
# 16 "data/maps/TestProfLab/scripts.pory"
	.string "Hello, would you like to see more?$"

TestProfLab_PersonScript_TestProf_Text_1:
# 31 "data/maps/TestProfLab/scripts.pory"
	.string "Choose wisely...$"

TestProfLab_PersonScript_TestProf_Text_2:
# 39 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to upgrade to the National\n"
	.string "Dex?$"

TestProfLab_PersonScript_TestProf_Text_3:
# 44 "data/maps/TestProfLab/scripts.pory"
	.string "Please take care of your Pokemon.$"

TestProfLab_PersonScript_BallChangeAide_Text_0:
# 58 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want me to change the Ball Type\n"
	.string "your Pokemon is in?$"

TestProfLab_PersonScript_BallChangeAide_Text_1:
# 60 "data/maps/TestProfLab/scripts.pory"
	.string "Ok, great! What would you like it\n"
	.string "changed to?$"

TestProfLab_PersonScript_BallChangeAide_Text_2:
# 75 "data/maps/TestProfLab/scripts.pory"
	.string "All set! Come again...$"

TestProfLab_PersonScript_BallChangeAide_Text_3:
# 78 "data/maps/TestProfLab/scripts.pory"
	.string "If you change your mind, I'm here.$"

TestProfLab_ObjectScript_PokeballOne_Text_0:
# 105 "data/maps/TestProfLab/scripts.pory"
	.string "Don't Take Another.$"

TestProfLab_ActionScript_GiveStarter_Text_0:
# 192 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

TestProfLab_ActionScript_GiveStarter_Text_1:
# 200 "data/maps/TestProfLab/scripts.pory"
	.string "Received {STR_VAR_1}!$"

TestProfLab_ActionScript_GiveStarter_Text_2:
# 209 "data/maps/TestProfLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

TestProfLab_ActionScript_GiveStarter_Text_3:
# 213 "data/maps/TestProfLab/scripts.pory"
	.string "No more room for Pokemon!$"

TestProfLab_ActionScript_GivePokedex_Text_0:
# 282 "data/maps/TestProfLab/scripts.pory"
	.string "{PLAYER} received the Pokedex!$"

TestProfLab_ActionScript_GivePokedex_Text_1:
# 291 "data/maps/TestProfLab/scripts.pory"
	.string "Also take these with you...$"

TestProfLab_ActionScript_GivePokedex_Text_2:
# 293 "data/maps/TestProfLab/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex.$"

TestProfLab_ActionScript_RivalAftermath_Text_0:
# 307 "data/maps/TestProfLab/scripts.pory"
	.string "Well, that wasn't fun. I'll beat you next\n"
	.string "time!$"

TestProfLab_ActionScript_NicknamePartyMon_Text_0:
# 338 "data/maps/TestProfLab/scripts.pory"
	.string "Give it a nickname?$"

TestProfLab_TriggerScript_StopLeaving_Text_0:
# 377 "data/maps/TestProfLab/scripts.pory"
	.string "You need to choose a Pokemon!$"

TestProfLab_TextScript_BeginAdventureText::
# 426 "data/maps/TestProfLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}TestProf:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is\n"
	.string "TestProf. This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now choose wisely.\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.$"

TestProfLab_TextScript_TakePokedex::
# 436 "data/maps/TestProfLab/scripts.pory"
	.string "Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this Pokedex.$"

TestProfLab_TextScript_NotChosen::
# 442 "data/maps/TestProfLab/scripts.pory"
	.string "You did not choose {STR_VAR_1}.$"

TestProfLab_TextScript_RivalIntro::
# 446 "data/maps/TestProfLab/scripts.pory"
	.string "We'll see if you have what it takes!$"
