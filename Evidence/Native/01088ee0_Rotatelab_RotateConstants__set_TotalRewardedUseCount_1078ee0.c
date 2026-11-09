/* IL2CPP: Rotatelab.RotateConstants$$set_TotalRewardedUseCount
void Rotatelab_RotateConstants__set_TotalRewardedUseCount (int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RotateConstants$$set_TotalRewardedUseCount
   void Rotatelab_RotateConstants__set_TotalRewardedUseCount (int32_t value, const MethodInfo*
   method); */

void Rotatelab_RotateConstants__set_TotalRewardedUseCount_1078ee0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01088f2c + 0x1088ef4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01088f30 + 0x1088f08));
    *pcVar4 = '\x01';
    param_4 = extraout_r3;
  }
  iVar1 = UnityEngine_PlayerPrefs__TrySetInt_35f6358
                    (**(undefined4 **)(_UNK_01088f34 + 0x1088f24),param_1,0,param_4,unaff_r4,
                     unaff_lr);
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

