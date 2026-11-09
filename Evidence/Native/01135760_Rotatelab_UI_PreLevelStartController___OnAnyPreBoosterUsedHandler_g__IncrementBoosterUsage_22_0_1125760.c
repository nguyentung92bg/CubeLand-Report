/* IL2CPP: Rotatelab.UI.PreLevelStartController$$<OnAnyPreBoosterUsedHandler>g__IncrementBoosterUsage|22_0
void Rotatelab_UI_PreLevelStartController___OnAnyPreBoosterUsedHandler_g__IncrementBoosterUsage_22_0 (bool isPreBooster, int32_t boosterId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.UI.PreLevelStartController$$<OnAnyPreBoosterUsedHandler>g__IncrementBoosterUsage|22_0
   void 
   Rotatelab_UI_PreLevelStartController___OnAnyPreBoosterUsedHandler_g__IncrementBoosterUsage_22_0
   (bool isPreBooster, int32_t boosterId, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController___OnAnyPreBoosterUsedHandler_g__IncrementBoosterUsage_22_0_1125760
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01135838 + 0x1135778);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113583c + 0x113578c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135840 + 0x1135798));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01135844 + 0x11357ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_CustomRotateEventsController__GetLevelBaseBoosterUseCount_fc67d4
                    (param_1,param_2,0);
  Rotatelab_CustomRotateEventsController__SetLevelBaseBoosterUseCount_fc6850
            (param_1,param_2,iVar1 + 1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01135848 + 0x11357ec));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar1,param_1,param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(uint *)(iVar1 + 0x28);
  *(uint *)(iVar1 + 0x28) = uVar2 + 1;
  *(uint *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + (uint)(0xfffffffe < uVar2);
  return;
}

