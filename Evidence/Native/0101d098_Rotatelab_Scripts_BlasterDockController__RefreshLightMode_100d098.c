/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$RefreshLightMode
void Rotatelab_Scripts_BlasterDockController__RefreshLightMode (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$RefreshLightMode
   void Rotatelab_Scripts_BlasterDockController__RefreshLightMode
   (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockController__RefreshLightMode_100d098(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  Rotatelab_Scripts_BlasterDockController__ApplyLightMode_100cc0c(param_1);
  iVar4 = *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x44) = 0;
  pcVar5 = (char *)(_UNK_0101d088 + 0x101ceb8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101d08c + 0x101cecc));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x44) != iVar4) {
    piVar6 = (int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x44) = iVar4;
    if (*piVar6 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar6,0);
      *(undefined4 *)(param_1 + 0x30) = 0;
      thunk_FUN_00ec5080(piVar6,0);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x18),1,0);
    if (*(int *)(param_1 + 0x44) == 2) {
      iVar4 = Rotatelab_Scripts_BlasterDockController__get_HasIvyLock_100c628(param_1);
      if (iVar4 == 0) {
        piVar6 = *(int **)(_UNK_0101d094 + 0x101d010);
        iVar8 = *(int *)(param_1 + 0x18);
        iVar4 = *piVar6;
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          iVar4 = *piVar6;
        }
        iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 4);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar4 + 0xc) <= *(uint *)(param_1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Animator__Play_35915ac
                  (iVar8,*(undefined4 *)(iVar4 + *(uint *)(param_1 + 0x34) * 4 + 0x10),0,0,0);
      }
    }
    else if (*(int *)(param_1 + 0x44) == 1) {
      piVar7 = *(int **)(_UNK_0101d090 + 0x101cf54);
      iVar8 = *(int *)(param_1 + 0x18);
      iVar4 = *piVar7;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar7;
      }
      iVar4 = **(int **)(iVar4 + 0x5c);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= *(uint *)(param_1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar8 != 0) {
        UnityEngine_Animator__Play_35915ac
                  (iVar8,*(undefined4 *)(iVar4 + *(uint *)(param_1 + 0x34) * 4 + 0x10),0,0,0);
        uVar3 = Rotatelab_Scripts_BlasterDockController__SleepAnimatorAfterCurrentTransitionCoroutine_100d0cc
                          (param_1);
        uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
        *(undefined4 *)(param_1 + 0x30) = uVar3;
        if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
          puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar6 >> 0x11) * 4 + 0xf547cc);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 | 1 << (((uint)piVar6 & 0x1ffff) >> 0xc);
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  return;
}

