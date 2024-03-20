TestProfLab_MapScripts::
# 2 "data/maps/TestProfLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestProfLab_ControlScript_ControlState
	.byte 0


TestProfLab_ControlScript_ControlState::
# 7 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 0
	return


TestProfLab_PersonScript_TestProf::
# 11 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_PersonScript_TestProf_2
# 34 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_2, MSGBOX_NPC
TestProfLab_PersonScript_TestProf_1:
	end

TestProfLab_PersonScript_TestProf_2:
# 12 "data/maps/TestProfLab/scripts.pory"
	lock
# 13 "data/maps/TestProfLab/scripts.pory"
	faceplayer
# 14 "data/maps/TestProfLab/scripts.pory"
	message TestProfLab_PersonScript_TestProf_Text_0
# 15 "data/maps/TestProfLab/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_CHOICE, 0
# 16 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 17 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestProfLab_PersonScript_TestProf_6
# 21 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TestProfLab_PersonScript_TestProf_7
# 25 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq TestProfLab_PersonScript_TestProf_8
TestProfLab_PersonScript_TestProf_5:
# 29 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_PersonScript_TestProf_Text_1
# 30 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 31 "data/maps/TestProfLab/scripts.pory"
	release
	goto TestProfLab_PersonScript_TestProf_1

TestProfLab_PersonScript_TestProf_6:
# 18 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 19 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto TestProfLab_PersonScript_TestProf_5

TestProfLab_PersonScript_TestProf_7:
# 22 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 23 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto TestProfLab_PersonScript_TestProf_5

TestProfLab_PersonScript_TestProf_8:
# 26 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_StarterFade
# 27 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto TestProfLab_PersonScript_TestProf_5


TestProfLab_ObjectScript_PokeballOne::
# 40 "data/maps/TestProfLab/scripts.pory"
	lockall
# 41 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 42 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballOne_2
# 60 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballOne_1:
# 62 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 63 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballOne_2:
# 43 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_5
# 48 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_6
# 53 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballOne_7
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_5:
# 44 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 45 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_MUDKIP
# 46 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_6:
# 49 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 50 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TOTODILE
# 51 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1

TestProfLab_ObjectScript_PokeballOne_7:
# 54 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SQUIRTLE
# 55 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_SQUIRTLE
# 56 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballOne_1


TestProfLab_ObjectScript_PokeballTwo::
# 68 "data/maps/TestProfLab/scripts.pory"
	lockall
# 69 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballTwo_2
# 87 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballTwo_1:
# 89 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 90 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballTwo_2:
# 70 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_5
# 75 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_6
# 80 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballTwo_7
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_5:
# 71 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
# 72 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TREECKO
# 73 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_6:
# 76 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 77 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHIKORITA
# 78 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1

TestProfLab_ObjectScript_PokeballTwo_7:
# 81 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 82 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_BULBASAUR
# 83 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballTwo_1


TestProfLab_ObjectScript_PokeballThree::
# 95 "data/maps/TestProfLab/scripts.pory"
	lockall
# 96 "data/maps/TestProfLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, TestProfLab_ObjectScript_PokeballThree_2
# 114 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ObjectScript_PokeballOne_Text_0
TestProfLab_ObjectScript_PokeballThree_1:
# 116 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 117 "data/maps/TestProfLab/scripts.pory"
	releaseall
	end

TestProfLab_ObjectScript_PokeballThree_2:
# 97 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 0
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_5
# 102 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 1
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_6
# 107 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TESTPROFLAB_CONTROLSTATE, 2
	goto_if_eq TestProfLab_ObjectScript_PokeballThree_7
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_5:
# 98 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 99 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_TORCHIC
# 100 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_6:
# 103 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 104 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CYNDAQUIL
# 105 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1

TestProfLab_ObjectScript_PokeballThree_7:
# 108 "data/maps/TestProfLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHARMANDER
# 109 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_STARTER_CHOICE, SPECIES_CHARMANDER
# 110 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_GiveStarter
	goto TestProfLab_ObjectScript_PokeballThree_1


TestProfLab_ActionScript_GiveStarter::
# 122 "data/maps/TestProfLab/scripts.pory"
	showmonpic VAR_STARTER_CHOICE, 10, 3
# 123 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_0, MSGBOX_YESNO
# 124 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_GiveStarter_1
# 149 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 150 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_NotChosen
	return

TestProfLab_ActionScript_GiveStarter_1:
# 125 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 126 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 2
# 127 "data/maps/TestProfLab/scripts.pory"
	givemon VAR_STARTER_CHOICE, 5, ITEM_ORAN_BERRY
# 128 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TestProfLab_ActionScript_GiveStarter_4
# 135 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TestProfLab_ActionScript_GiveStarter_5
# 144 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 145 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_3
	return

TestProfLab_ActionScript_GiveStarter_4:
# 129 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 130 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_1
# 131 "data/maps/TestProfLab/scripts.pory"
	removeobject VAR_TEMP_0
# 132 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_SetBallFlag
# 133 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknamePartyMon
	return

TestProfLab_ActionScript_GiveStarter_5:
# 136 "data/maps/TestProfLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 137 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_1
# 138 "data/maps/TestProfLab/scripts.pory"
	removeobject VAR_TEMP_0
# 139 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_SetBallFlag
# 140 "data/maps/TestProfLab/scripts.pory"
	call TestProfLab_ActionScript_NicknameBoxMon
# 141 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_GiveStarter_Text_2
	return


TestProfLab_ActionScript_SetBallFlag::
# 155 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_2
# 159 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_5
# 163 "data/maps/TestProfLab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq TestProfLab_ActionScript_SetBallFlag_7
	return

TestProfLab_ActionScript_SetBallFlag_2:
# 156 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_1
	return

TestProfLab_ActionScript_SetBallFlag_5:
# 160 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_2
	return

TestProfLab_ActionScript_SetBallFlag_7:
# 164 "data/maps/TestProfLab/scripts.pory"
	setflag FLAG_PROF_BALL_3
	return


TestProfLab_ActionScript_StarterFade::
# 170 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 171 "data/maps/TestProfLab/scripts.pory"
	delay 20
# 172 "data/maps/TestProfLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


TestProfLab_ActionScript_NicknamePartyMon::
# 177 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 178 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 179 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknamePartyMon_1
	return

TestProfLab_ActionScript_NicknamePartyMon_1:
# 180 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 181 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


TestProfLab_ActionScript_NicknameBoxMon::
# 186 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_ActionScript_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 187 "data/maps/TestProfLab/scripts.pory"
	hidemonpic
# 188 "data/maps/TestProfLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestProfLab_ActionScript_NicknameBoxMon_2
TestProfLab_ActionScript_NicknameBoxMon_1:
# 191 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

TestProfLab_ActionScript_NicknameBoxMon_2:
# 189 "data/maps/TestProfLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto TestProfLab_ActionScript_NicknameBoxMon_1


TestProfLab_TriggerScript_StartStarterSequence::
# 195 "data/maps/TestProfLab/scripts.pory"
	lock
# 196 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_MeetTestProf
# 197 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 198 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TextScript_BeginAdventureText
# 199 "data/maps/TestProfLab/scripts.pory"
	waitmessage
# 200 "data/maps/TestProfLab/scripts.pory"
	closemessage
# 201 "data/maps/TestProfLab/scripts.pory"
	applymovement 1, TestProfLab_MovementScript_ProfMoves
# 202 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 203 "data/maps/TestProfLab/scripts.pory"
	setvar VAR_LITTLEROOT_STATE, 1
# 204 "data/maps/TestProfLab/scripts.pory"
	release
	return


TestProfLab_TriggerScript_StartStarterSequence2::
# 208 "data/maps/TestProfLab/scripts.pory"
	lock
# 209 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_MeetTestProf2
# 210 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 211 "data/maps/TestProfLab/scripts.pory"
	goto TestProfLab_TriggerScript_StartStarterSequence
	return


TestProfLab_TriggerScript_StopLeaving::
# 215 "data/maps/TestProfLab/scripts.pory"
	lockall
# 216 "data/maps/TestProfLab/scripts.pory"
	msgbox TestProfLab_TriggerScript_StopLeaving_Text_0
# 217 "data/maps/TestProfLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestProfLab_MovementScript_DoNotLeave
# 218 "data/maps/TestProfLab/scripts.pory"
	waitmovement 0
# 219 "data/maps/TestProfLab/scripts.pory"
	releaseall
	return


# 222 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MeetTestProf:
# 223 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 223 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 223 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 223 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

# 226 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_MeetTestProf2:
# 227 "data/maps/TestProfLab/scripts.pory"
	walk_left
	step_end

# 230 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_ProfMoves:
# 231 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 232 "data/maps/TestProfLab/scripts.pory"
	walk_right
# 232 "data/maps/TestProfLab/scripts.pory"
	walk_right
# 233 "data/maps/TestProfLab/scripts.pory"
	walk_up
# 234 "data/maps/TestProfLab/scripts.pory"
	face_down
	step_end

# 237 "data/maps/TestProfLab/scripts.pory"
TestProfLab_MovementScript_DoNotLeave:
# 238 "data/maps/TestProfLab/scripts.pory"
	walk_up
	step_end

TestProfLab_PersonScript_TestProf_Text_0:
# 14 "data/maps/TestProfLab/scripts.pory"
	.string "Hello, would you like to see more?$"

TestProfLab_PersonScript_TestProf_Text_1:
# 29 "data/maps/TestProfLab/scripts.pory"
	.string "Choose wisely...$"

TestProfLab_PersonScript_TestProf_Text_2:
# 34 "data/maps/TestProfLab/scripts.pory"
	.string "Please take care of your Pokemon.$"

TestProfLab_ObjectScript_PokeballOne_Text_0:
# 60 "data/maps/TestProfLab/scripts.pory"
	.string "Don't Take Another.$"

TestProfLab_ActionScript_GiveStarter_Text_0:
# 123 "data/maps/TestProfLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

TestProfLab_ActionScript_GiveStarter_Text_1:
# 130 "data/maps/TestProfLab/scripts.pory"
	.string "Received {STR_VAR_1}!$"

TestProfLab_ActionScript_GiveStarter_Text_2:
# 141 "data/maps/TestProfLab/scripts.pory"
	.string "Transferred {STR_VAR_1} to PC$"

TestProfLab_ActionScript_GiveStarter_Text_3:
# 145 "data/maps/TestProfLab/scripts.pory"
	.string "No more room for Pokemon!$"

TestProfLab_ActionScript_NicknamePartyMon_Text_0:
# 177 "data/maps/TestProfLab/scripts.pory"
	.string "Give it a nickname?$"

TestProfLab_TriggerScript_StopLeaving_Text_0:
# 216 "data/maps/TestProfLab/scripts.pory"
	.string "You need to choose a Pokemon!$"

TestProfLab_TextScript_BeginAdventureText::
# 241 "data/maps/TestProfLab/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}TestProf:{COLOR DARK_GRAY}"
	.string "    {SHADOW LIGHT_GRAY} Hello {PLAYER}, my name is TestProf.\n"
	.string "This is my lab.\p"
	.string "Today is the day that you will be\n"
	.string "receiving a Pokemon.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Now choose wisely.\n"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}If you would like to"
	.string "    see more options\l"
	.string "come and talk to me.$"

TestProfLab_TextScript_NotChosen::
# 253 "data/maps/TestProfLab/scripts.pory"
	.string "You did not choose {STR_VAR_1}.$"
