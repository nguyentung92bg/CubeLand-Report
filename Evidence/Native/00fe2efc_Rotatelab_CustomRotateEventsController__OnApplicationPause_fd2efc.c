/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnApplicationPause
void Rotatelab_CustomRotateEventsController__OnApplicationPause (Rotatelab_CustomRotateEventsController_o* __this, bool pauseStatus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnApplicationPause
   void Rotatelab_CustomRotateEventsController__OnApplicationPause
   (Rotatelab_CustomRotateEventsController_o* __this, bool pauseStatus, const MethodInfo* method);
    */

void Rotatelab_CustomRotateEventsController__OnApplicationPause_fd2efc(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  
  pbVar7 = (byte *)(_UNK_00fe2fc8 + 0xfe2f14);
  uVar3 = (uint)*pbVar7;
  if (uVar3 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2fcc + 0xfe2f28));
    uVar3 = 1;
    *pbVar7 = 1;
  }
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x24);
  }
  if (param_2 != 0 && uVar3 != 0) {
    puVar8 = *(undefined4 **)(_UNK_00fe2fd0 + 0xfe2f50);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Ads_InterstitialAdFormat__get_IsShowing_10efeb4(*(int *)(iVar4 + 0x48),0);
    if (iVar4 != 0) {
      return;
    }
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(int *)(iVar4 + 0x4c) == 0) ||
       (iVar4 = Rotatelab_Ads_RewardedAdFormat__get_IsShowing_10f4040(*(int *)(iVar4 + 0x4c),0),
       iVar4 == 0)) {
      pcVar6 = (char *)(_UNK_00fe2ef0 + 0xfe2e70);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2ef4 + 0xfe2e84));
        *pcVar6 = '\x01';
      }
      iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(float *)(iVar4 + 0xe0) <= 0.0) {
        Rotatelab_CustomRotateEventsController__SetEcpmProperties_fd2a9c
                  (param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                   **(undefined4 **)(_UNK_00fe2ef8 + 0xfe2ec0),0);
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),0);
      *(undefined4 *)(param_1 + 0x28) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),0);
      piVar5 = (int *)(param_1 + 0x2c);
      if (*piVar5 == 0) {
        return;
      }
      UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar5,0);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar5 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar5 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

