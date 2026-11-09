/* IL2CPP: Rotatelab.CustomRotateEventsController$$SetLevelBaseBoosterUseCount
void Rotatelab_CustomRotateEventsController__SetLevelBaseBoosterUseCount (bool isPreBooster, int32_t boosterId, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$SetLevelBaseBoosterUseCount
   void Rotatelab_CustomRotateEventsController__SetLevelBaseBoosterUseCount (bool isPreBooster,
   int32_t boosterId, int32_t value, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__SetLevelBaseBoosterUseCount_fc6850
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_00fd68c4 + 0xfd686c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd68c8 + 0xfd6880));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fd68cc + 0xfd6894) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_CustomRotateEventsController__GetBoosterUseCountKey_fc66bc(param_1,1,param_2);
  iVar2 = UnityEngine_PlayerPrefs__TrySetInt_35f6358(uVar1,param_3,0,extraout_r3,unaff_r4,unaff_lr);
  if (iVar2 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b64 + 0x3606b28));
  uVar1 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b68 + 0x3606b3c));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar1,uVar3);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b6c + 0x3606b54));
  FUN_01f4fe28(uVar1,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

