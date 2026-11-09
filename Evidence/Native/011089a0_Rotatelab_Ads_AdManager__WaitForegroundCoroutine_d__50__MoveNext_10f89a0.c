/* IL2CPP: Rotatelab.Ads.AdManager.<WaitForegroundCoroutine>d__50$$MoveNext
bool Rotatelab_Ads_AdManager__WaitForegroundCoroutine_d__50__MoveNext (Rotatelab_Ads_AdManager__WaitForegroundCoroutine_d__50_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager.<WaitForegroundCoroutine>d__50$$MoveNext
   bool Rotatelab_Ads_AdManager__WaitForegroundCoroutine_d__50__MoveNext
   (Rotatelab_Ads_AdManager__WaitForegroundCoroutine_d__50_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Ads_AdManager__WaitForegroundCoroutine_d__50__MoveNext_10f89a0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar2 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(char *)(param_1 + 0x14) != '\0') {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar3 + 0x40);
      if (iVar3 != *(int *)(param_1 + 0x24)) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(int *)(param_1 + 0x24) = iVar3;
        goto LAB_01108a54;
      }
    }
    fVar5 = *(float *)(param_1 + 0x20);
    fVar1 = (float)UnityEngine_Time__get_unscaledDeltaTime_3610a80(0);
    fVar4 = _UNK_01108ab8;
    if (fVar1 < _UNK_01108ab8) {
      fVar4 = fVar1;
    }
    *(float *)(param_1 + 0x20) = fVar5 + fVar4;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar3 + 0x40);
  }
LAB_01108a54:
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
    if ((iVar3 == 0) && (*(float *)(param_1 + 0x20) < *(float *)(param_1 + 0x1c))) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      uVar2 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

