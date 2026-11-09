/* IL2CPP: Rotatelab.Save.SavedString$$SetSavedValue
void Rotatelab_Save_SavedString__SetSavedValue (Rotatelab_Save_SavedString_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedString$$SetSavedValue
   void Rotatelab_Save_SavedString__SetSavedValue (Rotatelab_Save_SavedString_o* __this,
   System_String_o* value, const MethodInfo* method); */

void Rotatelab_Save_SavedString__SetSavedValue_1083220(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = UnityEngine_PlayerPrefs__TrySetSetString_35f67d0(*(undefined4 *)(param_1 + 8),param_2,0);
  if (iVar1 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070b8 + 0x360707c));
  uVar2 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070bc + 0x3607090));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar2,uVar3);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam036070c0 + 0x36070a8));
  FUN_01f4fe28(uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

