/* IL2CPP: Rotatelab.Save.SaveManager$$SetBool
void Rotatelab_Save_SaveManager__SetBool (System_String_o* key, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SaveManager$$SetBool
   void Rotatelab_Save_SaveManager__SetBool (System_String_o* key, bool value, const MethodInfo*
   method); */

void Rotatelab_Save_SaveManager__SetBool_107f178(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = UnityEngine_PlayerPrefs__TrySetInt_35f6358(param_1,param_2,0);
  if (iVar1 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b64 + 0x3606b28));
  uVar2 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b68 + 0x3606b3c));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar2,uVar3);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b6c + 0x3606b54));
  FUN_01f4fe28(uVar2,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

