TestingGrounds_MapScripts::
# 2 "data/maps/TestingGrounds/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestingGrounds_ControlScript_OnTransition
# 6 "data/maps/TestingGrounds/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TestingGrounds_ControlScript_OnResume
# 3 "data/maps/TestingGrounds/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestingGrounds_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestingGrounds_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/TestingGrounds/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, TestingGrounds_ActionScript_EveryFrame
	.2byte 0


TestingGrounds_ControlScript_OnTransition::
# 10 "data/maps/TestingGrounds/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


TestingGrounds_ControlScript_OnResume::
# 14 "data/maps/TestingGrounds/scripts.pory"
	goto_if_set FLAG_TESTING_GROUNDS, TestingGrounds_ControlScript_OnResume_1
# 19 "data/maps/TestingGrounds/scripts.pory"
	setflag FLAG_TESTING_GROUNDS
# 20 "data/maps/TestingGrounds/scripts.pory"
	showobjectat 1, MAP_TESTING_GROUNDS
	return

TestingGrounds_ControlScript_OnResume_1:
# 15 "data/maps/TestingGrounds/scripts.pory"
	clearflag FLAG_TESTING_GROUNDS
# 16 "data/maps/TestingGrounds/scripts.pory"
	hideobjectat 1, MAP_TESTING_GROUNDS
	return


TestingGrounds_PersonScript_TestNPC::
# 25 "data/maps/TestingGrounds/scripts.pory"
	lock
# 26 "data/maps/TestingGrounds/scripts.pory"
	faceplayer
# 27 "data/maps/TestingGrounds/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_0
# 28 "data/maps/TestingGrounds/scripts.pory"
	setvar VAR_TEMP_2, 0
# 29 "data/maps/TestingGrounds/scripts.pory"
	msgbox TestingGrounds_PersonScript_TestNPC_Text_0
# 30 "data/maps/TestingGrounds/scripts.pory"
	waitmessage
# 31 "data/maps/TestingGrounds/scripts.pory"
	release
	end


TestingGrounds_ActionScript_EveryFrame::
# 36 "data/maps/TestingGrounds/scripts.pory"
	lock
# 37 "data/maps/TestingGrounds/scripts.pory"
	addvar VAR_TEMP_0, 1
# 38 "data/maps/TestingGrounds/scripts.pory"
	msgbox TestingGrounds_ActionScript_EveryFrame_Text_0
# 39 "data/maps/TestingGrounds/scripts.pory"
	waitmessage
# 40 "data/maps/TestingGrounds/scripts.pory"
	setvar VAR_TEMP_2, 1
# 41 "data/maps/TestingGrounds/scripts.pory"
	release
	return


TestingGrounds_PersonScript_TestNPC_Text_0:
# 29 "data/maps/TestingGrounds/scripts.pory"
	.string "It's {STR_VAR_1}$"

TestingGrounds_ActionScript_EveryFrame_Text_0:
# 38 "data/maps/TestingGrounds/scripts.pory"
	.string "Updated On Frame...$"
