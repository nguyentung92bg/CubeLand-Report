/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnInterstitialFilledHandler
void Rotatelab_CustomRotateEventsController__OnInterstitialFilledHandler (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, System_String_o* role, bool isFloored, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnInterstitialFilledHandler
   void Rotatelab_CustomRotateEventsController__OnInterstitialFilledHandler
   (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, System_String_o*
   role, bool isFloored, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnInterstitialFilledHandler_fd28a4
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_00fe2a08 + 0xfe28c4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2a0c + 0xfe28dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2a10 + 0xfe28e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2a14 + 0xfe28f4));
    *pcVar5 = '\x01';
  }
  if (param_4 != 0) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fe2a18 + 0xfe2910));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Networking_SatoriFlag_bool___op_Implicit_1a88b00
                      (*(undefined4 *)(iVar3 + 0x74),**(undefined4 **)(_UNK_00fe2a1c + 0xfe2930));
    if (iVar3 == 0) {
      iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (0.0 < *(float *)(iVar3 + 0xe0)) {
        return;
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x24) = param_2;
      thunk_FUN_00ec5080((int *)(param_1 + 0x24),param_2);
      *(undefined4 *)(param_1 + 0x28) = param_3;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),param_3);
      uVar4 = Rotatelab_CustomRotateEventsController__WriteParkedEcpmCoroutine_fd2a24(param_1);
      uVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      goto code_r0x00ec375c;
    }
  }
  iVar3 = Rotatelab_CustomRotateEventsController__SetEcpmProperties_fd2a9c
                    (param_1,param_2,param_3,**(undefined4 **)(_UNK_00fe2a20 + 0xfe2954),1);
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),0);
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*(int *)(param_1 + 0x2c),0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
code_r0x00ec375c:
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + (param_1 + 0x2cU >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << ((param_1 + 0x2cU & 0x1ffff) >> 0xc);
  return;
}

