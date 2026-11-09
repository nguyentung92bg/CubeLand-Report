/* IL2CPP: Rotatelab.Save.SavedGenericValue<object>$$SetSavedValue
void Rotatelab_Save_SavedGenericValue_object___SetSavedValue (Rotatelab_Save_SavedGenericValue_T__o* __this, Il2CppObject* value, const MethodInfo_1A89284* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedGenericValue<object>$$SetSavedValue
   void Rotatelab_Save_SavedGenericValue_object___SetSavedValue
   (Rotatelab_Save_SavedGenericValue_T__o* __this, Il2CppObject* value, const MethodInfo_1A89284*
   method); */

void Rotatelab_Save_SavedGenericValue_object___SetSavedValue_1a89284(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01a992f8 + 0x1a9929c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01a992fc + 0x1a992b0));
    *pcVar4 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_01a99300 + 0x1a992c4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Newtonsoft_Json_JsonConvert__SerializeObject_2c33b34(param_2,0);
  iVar2 = UnityEngine_PlayerPrefs__TrySetSetString_35f67d0
                    (uVar3,uVar1,0,extraout_r3,unaff_r4,unaff_lr);
  if (iVar2 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070b8 + 0x360707c));
  uVar3 = thunk_FUN_00f00cdc();
  uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070bc + 0x3607090));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar3,uVar1);
  uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070c0 + 0x36070a8));
  FUN_01f4fe28(uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

