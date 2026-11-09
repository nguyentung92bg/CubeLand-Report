/* IL2CPP: Rotatelab.Save.SavedFloat$$SetSavedValue
void Rotatelab_Save_SavedFloat__SetSavedValue (Rotatelab_Save_SavedFloat_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedFloat$$SetSavedValue
   void Rotatelab_Save_SavedFloat__SetSavedValue (Rotatelab_Save_SavedFloat_o* __this, float value,
   const MethodInfo* method); */

void Rotatelab_Save_SavedFloat__SetSavedValue_1083148(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = UnityEngine_PlayerPrefs__TrySetFloat_35f6594(*(undefined4 *)(param_1 + 8),param_2,0);
  if (iVar1 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606e0c + 0x3606dd0));
  uVar2 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606e10 + 0x3606de4));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar2,uVar3);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606e14 + 0x3606dfc));
  FUN_01f4fe28(uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

