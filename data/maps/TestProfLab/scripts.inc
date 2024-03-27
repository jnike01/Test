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


TestProfLab_ObjectScript_PokeballOne::
# 56 "data/maps/TestProfLab/scripts.pory"
	lock
# 57 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 58 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballOne_2
# 76 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballOne_1:
# 78 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 79 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballOne_2:
# 59 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_5
# 64 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_6
# 69 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_7
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_5:
# 60 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 61 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 62 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_6:
# 65 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 66 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 67 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_7:
# 70 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 71 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 72 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1


TestProfLab_ObjectScript_PokeballTwo::
# 84 "data/maps/TestProfLab/scripts.pory"
	lock
# 85 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 86 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballTwo_2
# 104 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballTwo_1:
# 106 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 107 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballTwo_2:
# 87 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_5
# 92 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_6
# 97 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_7
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_5:
# 88 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 89 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 90 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_6:
# 93 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 94 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 95 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_7:
# 98 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 99 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 100 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1


TestProfLab_ObjectScript_PokeballThree::
# 112 "data/maps/TestProfLab/scripts.pory"
	lock
# 113 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 114 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballThree_2
# 132 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballThree_1:
# 134 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 135 "data/maps/TestProfLab/scripts.pory"
	release
	end

TestProfLab_ObjectScript_PokeballThree_2:
# 115 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_5
# 120 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_6
# 125 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_7
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_5:
# 116 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 117 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 118 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_6:
# 121 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 122 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 123 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_7:
# 126 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 127 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 128 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1


TestProfLab_TrainerScript_MayBattle::
# 140 "data/maps/TestProfLab/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 141 "data/maps/TestProfLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 142 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 143 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 144 "data/maps/TestProfLab/scripts.pory"
	applymovement 5, TestProfLab_MovementScript_RivalMoveUp
# 145 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 146 "data/maps/TestProfLab/scripts.pory"
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, TestProfLab_TextScript_RivalIntro, Route103_Text_MayDefeated, TestProfLab_ActionScript_RivalAftermath, FALSE
	end


TestProfLab_TrainerScript_BrendanBattle::
# 151 "data/maps/TestProfLab/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 152 "data/maps/TestProfLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 153 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 154 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 155 "data/maps/TestProfLab/scripts.pory"
	applymovement 5, TestProfLab_MovementScript_RivalMoveUp
# 156 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 157 "data/maps/TestProfLab/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, TestProfLab_TextScript_RivalIntro, Route103_Text_BrendanDefeated, TestProfLab_ActionScript_RivalAftermath, FALSE
	end


TestProfLab_ActionScript_GiveStarter::
# 162 "data/maps/TestProfLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 163 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_0, MSGBOX_YESNO
# 164 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveStarter_1
# 190 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 191 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveStarter_1:
# 165 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 166 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 2
# 167 "data/maps/TestProfLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 10, ITEM_ORAN_BERRY
# 168 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_BallToRemove
# 169 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveStarter_5
# 175 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveStarter_6
# 183 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 184 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_3
TestProfLab_ActionScript_GiveStarter_4:
# 186 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 187 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_InitiateDexAndRivalSequence
	return

TestProfLab_ActionScript_GiveStarter_5:
# 170 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 171 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_1
# 172 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_SetBallFlag
# 173 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	goto TestProfLab_ActionScript_GiveStarter_4

TestProfLab_ActionScript_GiveStarter_6:
# 176 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_1
# 178 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_SetBallFlag
# 179 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
# 180 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_2
	goto TestProfLab_ActionScript_GiveStarter_4


TestProfLab_ActionScript_BallToRemove::
# 196 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_BallToRemove_2
# 200 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_BallToRemove_5
# 204 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_BallToRemove_7
	return

TestProfLab_ActionScript_BallToRemove_2:
# 197 "data/maps/TestProfLab/scripts.pory"
	removeobject 2
	return

TestProfLab_ActionScript_BallToRemove_5:
# 201 "data/maps/TestProfLab/scripts.pory"
	removeobject 3
	return

TestProfLab_ActionScript_BallToRemove_7:
# 205 "data/maps/TestProfLab/scripts.pory"
	removeobject 4
	return


TestProfLab_ActionScript_SetBallFlag::
# 211 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_2
# 215 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_5
# 219 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_7
	return

TestProfLab_ActionScript_SetBallFlag_2:
# 212 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
	return

TestProfLab_ActionScript_SetBallFlag_5:
# 216 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_2
	return

TestProfLab_ActionScript_SetBallFlag_7:
# 220 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_3
	return


TestProfLab_ActionScript_InitiateDexAndRivalSequence::
# 226 "data/maps/TestProfLab/scripts.pory"
	lock
# 227 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 228 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_TurnToProf
# 229 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_InitiateDexAndRivalSequence_2
TestProfLab_ActionScript_InitiateDexAndRivalSequence_1:
# 233 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_InitiateDexAndRivalSequence_5
TestProfLab_ActionScript_InitiateDexAndRivalSequence_4:
# 237 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_InitiateDexAndRivalSequence_8
TestProfLab_ActionScript_InitiateDexAndRivalSequence_7:
# 241 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 242 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 243 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GivePokedex
# 244 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_InitRivalSequence
# 245 "data/maps/TestProfLab/scripts.pory"
	release
	return

TestProfLab_ActionScript_InitiateDexAndRivalSequence_2:
# 230 "data/maps/TestProfLab/scripts.pory"
	setobjectxy 5, 5, 11
# 231 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallOne
	goto TestProfLab_ActionScript_InitiateDexAndRivalSequence_1

TestProfLab_ActionScript_InitiateDexAndRivalSequence_5:
# 234 "data/maps/TestProfLab/scripts.pory"
	setobjectxy 5, 6, 11
# 235 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallTwo
	goto TestProfLab_ActionScript_InitiateDexAndRivalSequence_4

TestProfLab_ActionScript_InitiateDexAndRivalSequence_8:
# 238 "data/maps/TestProfLab/scripts.pory"
	setobjectxy 5, 7, 11
# 239 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_MoveBallThree
	goto TestProfLab_ActionScript_InitiateDexAndRivalSequence_7


TestProfLab_ActionScript_GivePokedex::
# 250 "data/maps/TestProfLab/scripts.pory"
	lock
# 251 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_TakePokedex, MSGBOX_DEFAULT
# 252 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 253 "data/maps/TestProfLab/scripts.pory"
	message TestProfLab_ActionScript_GivePokedex_Text_0
# 254 "data/maps/TestProfLab/scripts.pory"
	waitfanfare
# 255 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 256 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 257 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 258 "data/maps/TestProfLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 259 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 260 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 261 "data/maps/TestProfLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 262 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GivePokedex_Text_1, MSGBOX_DEFAULT
# 263 "data/maps/TestProfLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 264 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GivePokedex_Text_2, MSGBOX_DEFAULT
# 265 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 266 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_ActionScript_InitRivalSequence::
# 271 "data/maps/TestProfLab/scripts.pory"
	checkplayergender
# 272 "data/maps/TestProfLab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, TestProfLab_TrainerScript_MayBattle
# 273 "data/maps/TestProfLab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, TestProfLab_TrainerScript_BrendanBattle
	return


TestProfLab_ActionScript_RivalAftermath::
# 277 "data/maps/TestProfLab/scripts.pory"
	lockall
# 278 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_RivalAftermath_Text_0
# 279 "data/maps/TestProfLab/scripts.pory"
	applymovement 5, TestProfLab_MovementScript_RivalLeave
# 280 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 281 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_TEST_BRENDAN
# 282 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 3
# 283 "data/maps/TestProfLab/scripts.pory"
	removeobject 5
# 284 "data/maps/TestProfLab/scripts.pory"
	fadedefaultbgm
# 285 "data/maps/TestProfLab/scripts.pory"
	releaseall
	return


TestProfLab_ActionScript_UpgradeToNatDex::
# 289 "data/maps/TestProfLab/scripts.pory"
	lock
# 290 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 291 "data/maps/TestProfLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
# 292 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 293 "data/maps/TestProfLab/scripts.pory"
	waitfanfare
# 294 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 295 "data/maps/TestProfLab/scripts.pory"
	special EnableNationalPokedex
# 296 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 297 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_ActionScript_StarterFade::
# 302 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 303 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 304 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


TestProfLab_ActionScript_NicknamePartyMon::
# 309 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 310 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 311 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknamePartyMon_1
	return

TestProfLab_ActionScript_NicknamePartyMon_1:
# 312 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 313 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


TestProfLab_ActionScript_NicknameBoxMon::
# 318 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 319 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 320 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknameBoxMon_2
TestProfLab_ActionScript_NicknameBoxMon_1:
# 323 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

TestProfLab_ActionScript_NicknameBoxMon_2:
# 321 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto TestProfLab_ActionScript_NicknameBoxMon_1


TestProfLab_TriggerScript_StartStarterSequence::
# 327 "data/maps/TestProfLab/scripts.pory"
	lock
# 328 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_MeetTestProf
# 329 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 330 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_BeginAdventureText
# 331 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 332 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 333 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_ProfMoves
# 334 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 335 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 1
# 336 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_TriggerScript_StartStarterSequence2::
# 340 "data/maps/TestProfLab/scripts.pory"
	lock
# 341 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_MeetTestProf2
# 342 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 343 "data/maps/TestProfLab/scripts.pory"
	goto TestProfLab_TriggerScript_StartStarterSequence
	return


TestProfLab_TriggerScript_StopLeaving::
# 347 "data/maps/TestProfLab/scripts.pory"
	lockall
# 348 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TriggerScript_StopLeaving_Text_0
# 349 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_DoNotLeave
# 350 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 351 "data/maps/TestProfLab/scripts.pory"
	releaseall
	return


# 354 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MeetTestProf:
# 355 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 355 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 355 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 355 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

# 358 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MeetTestProf2:
# 359 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 362 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_ProfMoves:
# 363 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 364 "data/maps/TestProfLab/scripts.pory"
	walk_right
# 364 "data/maps/TestProfLab/scripts.pory"
	walk_right
# 365 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 366 "data/maps/TestProfLab/scripts.pory"
	face_down
	step_end

# 369 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallOne:
# 370 "data/maps/TestProfLab/scripts.pory"
	walk_left
# 370 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 373 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallTwo:
# 374 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 377 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MoveBallThree:
# 378 "data/maps/TestProfLab/scripts.pory"
	face_left
	step_end

# 381 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_RivalMoveUp:
# 382 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 382 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 382 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 382 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 382 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 382 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

# 385 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_RivalLeave:
# 386 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 386 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 386 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 386 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 386 "data/maps/TestProfLab/scripts.pory"
	walk_down
# 386 "data/maps/TestProfLab/scripts.pory"
	walk_down
	step_end

# 389 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_TurnToProf:
# 390 "data/maps/TestProfLab/scripts.pory"
	face_right
	step_end

# 393 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_DoNotLeave:
# 394 "data/maps/TestProfLab/scripts.pory"
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

TestProfLab_ObjectScript_PokeballOne_Text_0:
# 76 "data/maps/TestProfLab/scripts.pory"
	.string "Don't Take Another.$"

TestProfLab_ActionScript_GiveStarter_Text_0:
# 163 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

TestProfLab_ActionScript_GiveStarter_Text_1:
# 171 "data/maps/TestProfLab/scripts.pory"
	.string "Received {STR_VAR_1}!$"

TestProfLab_ActionScript_GiveStarter_Text_2:
# 180 "data/maps/TestProfLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

TestProfLab_ActionScript_GiveStarter_Text_3:
# 184 "data/maps/TestProfLab/scripts.pory"
	.string "No more room for Pokemon!$"

TestProfLab_ActionScript_GivePokedex_Text_0:
# 253 "data/maps/TestProfLab/scripts.pory"
	.string "{PLAYER} received the Pokedex!$"

TestProfLab_ActionScript_GivePokedex_Text_1:
# 262 "data/maps/TestProfLab/scripts.pory"
	.string "Also take these with you...$"

TestProfLab_ActionScript_GivePokedex_Text_2:
# 264 "data/maps/TestProfLab/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex.$"

TestProfLab_ActionScript_RivalAftermath_Text_0:
# 278 "data/maps/TestProfLab/scripts.pory"
	.string "Well, that wasn't fun. I'll beat you next\n"
	.string "time!$"

TestProfLab_ActionScript_NicknamePartyMon_Text_0:
# 309 "data/maps/TestProfLab/scripts.pory"
	.string "Give it a nickname?$"

TestProfLab_TriggerScript_StopLeaving_Text_0:
# 348 "data/maps/TestProfLab/scripts.pory"
	.string "You need to choose a Pokemon!$"

TestProfLab_TextScript_BeginAdventureText::
# 397 "data/maps/TestProfLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}TestProf:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is\n"
	.string "TestProf. This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now choose wisely.\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to see more options\l"
	.string "come and talk to me.$"

TestProfLab_TextScript_TakePokedex::
# 407 "data/maps/TestProfLab/scripts.pory"
	.string "Here, {PLAYER}, I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this Pokedex.$"

TestProfLab_TextScript_NotChosen::
# 413 "data/maps/TestProfLab/scripts.pory"
	.string "You did not choose {STR_VAR_1}.$"

TestProfLab_TextScript_RivalIntro::
# 417 "data/maps/TestProfLab/scripts.pory"
	.string "We'll see if you have what it takes!$"
