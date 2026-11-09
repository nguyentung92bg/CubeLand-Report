/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c$$<ShowSecondaryBlaster>b__161_1
void Rotatelab_Scripts_BlasterController___c___ShowSecondaryBlaster_b__161_1 (Rotatelab_Scripts_BlasterController___c_o* __this, Rotatelab_Scripts_BlasterController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController.<>c$$<ShowSecondaryBlaster>b__161_1
   void Rotatelab_Scripts_BlasterController___c___ShowSecondaryBlaster_b__161_1
   (Rotatelab_Scripts_BlasterController___c_o* __this, Rotatelab_Scripts_BlasterController_o* this,
   const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController___c___ShowSecondaryBlaster_b__161_1_1039b3c
               (undefined4 param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Scripts_BlasterController__get_UsesGhostDockScale_1034040(param_2);
  if (iVar4 != 0) {
    Rotatelab_Scripts_BlasterController__RefreshGhostDockScale_1034104(param_2);
  }
  if (*(char *)((int)param_2 + 0xc1) == '\0') {
    iVar4 = (**(code **)(*param_2 + 0x138))(param_2,*(undefined4 *)(*param_2 + 0x13c));
    if (iVar4 != 0) {
      piVar5 = param_2 + 0x42;
      if (*piVar5 != 0) {
        return;
      }
      uVar3 = Rotatelab_Scripts_BlasterController__ShootingCoroutine_103694c(param_2);
      iVar4 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_2,uVar3,0);
      param_2[0x42] = iVar4;
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
    iVar4 = param_2[0x42];
    *(undefined1 *)((int)param_2 + 0xc3) = 0;
    if (iVar4 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_2,iVar4,0);
      param_2[0x42] = 0;
      thunk_FUN_00ec5080(param_2 + 0x42,0);
    }
    if ((param_2[0x2b] | 2U) == 7) {
                    /* WARNING: Could not recover jumptable at 0x010463c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x150))(param_2,6,*(undefined4 *)(*param_2 + 0x154));
      return;
    }
  }
  return;
}

