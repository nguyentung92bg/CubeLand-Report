/* IL2CPP: Rotatelab.RemoteConfigManager$$ApplyInterstitialCooldown
void Rotatelab_RemoteConfigManager__ApplyInterstitialCooldown (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$ApplyInterstitialCooldown
   void Rotatelab_RemoteConfigManager__ApplyInterstitialCooldown (Rotatelab_RemoteConfigManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager__ApplyInterstitialCooldown_10748fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint in_fpscr;
  undefined8 uVar5;
  
  pcVar4 = (char *)(_UNK_010849e8 + 0x1084914);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010849ec + 0x1084928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010849f0 + 0x1084934));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010849f4 + 0x1084948));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x34) + 0x10);
    if (*(int *)(**(int **)(_UNK_010849f8 + 0x1084984) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    uVar5 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar2,0);
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Networking_SatoriAdsConfigFlag_InterstitialConfig__GetTimerSeconds_fe719c
                      (iVar3,uVar2,(int)uVar5,uVar2,0);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(iVar1 + 0x40) = uVar2;
  }
  return;
}

