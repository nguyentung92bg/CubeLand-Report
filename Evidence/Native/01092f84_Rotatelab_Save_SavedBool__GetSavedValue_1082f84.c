/* IL2CPP: Rotatelab.Save.SavedBool$$GetSavedValue
bool Rotatelab_Save_SavedBool__GetSavedValue (Rotatelab_Save_SavedBool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedBool$$GetSavedValue
   bool Rotatelab_Save_SavedBool__GetSavedValue (Rotatelab_Save_SavedBool_o* __this, const
   MethodInfo* method); */

bool Rotatelab_Save_SavedBool__GetSavedValue_1082f84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_01092ff0 + 0x1092f98);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01092ff4 + 0x1092fac));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar1 = Rotatelab_Save_SavedValue_bool___get_DefaultValue_1a8ae04
                    (param_1,**(undefined4 **)(_UNK_01092ff8 + 0x1092fc0));
  iVar2 = UnityEngine_PlayerPrefs__GetInt_35f6b70(uVar4,uVar1,0);
  return 0 < iVar2;
}

