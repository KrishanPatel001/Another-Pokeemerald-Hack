<<<<<<< HEAD
MtEmber_RubyPath_B5F_Frlg_MapScripts::
=======
MtEmber_RubyPath_B5F_MapScripts::
>>>>>>> db2b5dd6cf (fuck this noise chat upcoming has been copy pasted)
	.byte 0

MtEmber_RubyPath_B5F_EventScript_BrailleMessage::
	lockall
	setvar VAR_0x8005, 130
	braillemessage_wait Braille_Text_Everything
	braillemessage_wait Braille_Text_HasMeaning1
	braillemessage_wait Braille_Text_Existence
	braillemessage_wait Braille_Text_HasMeaning2
	braillemessage_wait Braille_Text_BeingAlive
	braillemessage_wait Braille_Text_HasMeaning3
	braillemessage_wait Braille_Text_HaveDreams
	braillemsgbox Braille_Text_UsePower
	releaseall
	end
