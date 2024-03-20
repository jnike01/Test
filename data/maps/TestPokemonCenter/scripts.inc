TestPokemonCenter_MapScripts::
# 2 "data/maps/TestPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestPokemonCenter_ControlScript_OnTransition
# 3 "data/maps/TestPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


TestPokemonCenter_ControlScript_OnTransition::
# 7 "data/maps/TestPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
	end


TestPokemonCenter_PersonScript_NurseJoy::
# 12 "data/maps/TestPokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 13 "data/maps/TestPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/TestPokemonCenter/scripts.pory"
	waitmessage
# 15 "data/maps/TestPokemonCenter/scripts.pory"
	waitbuttonpress
# 16 "data/maps/TestPokemonCenter/scripts.pory"
	release
	end


TestPokemonCenter_PersonScript_BasicNurse::
# 21 "data/maps/TestPokemonCenter/scripts.pory"
	lock
# 22 "data/maps/TestPokemonCenter/scripts.pory"
	faceplayer
# 23 "data/maps/TestPokemonCenter/scripts.pory"
	msgbox TestPokemonCenter_PersonScript_BasicNurse_Text_0, MSGBOX_YESNO
# 24 "data/maps/TestPokemonCenter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestPokemonCenter_PersonScript_BasicNurse_1
# 33 "data/maps/TestPokemonCenter/scripts.pory"
	msgbox TestPokemonCenter_PersonScript_BasicNurse_Text_2, MSGBOX_NPC
	return

TestPokemonCenter_PersonScript_BasicNurse_1:
# 25 "data/maps/TestPokemonCenter/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 26 "data/maps/TestPokemonCenter/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/TestPokemonCenter/scripts.pory"
	msgbox TestPokemonCenter_PersonScript_BasicNurse_Text_1
# 28 "data/maps/TestPokemonCenter/scripts.pory"
	waitmessage
# 29 "data/maps/TestPokemonCenter/scripts.pory"
	release
	end


TestPokemonCenter_PersonScript_BasicNurse_Text_0:
# 23 "data/maps/TestPokemonCenter/scripts.pory"
	.string "Would you like me to heal your party?$"

TestPokemonCenter_PersonScript_BasicNurse_Text_1:
# 27 "data/maps/TestPokemonCenter/scripts.pory"
	.string "Come again soon!$"

TestPokemonCenter_PersonScript_BasicNurse_Text_2:
# 33 "data/maps/TestPokemonCenter/scripts.pory"
	.string "Have a nice day!$"
