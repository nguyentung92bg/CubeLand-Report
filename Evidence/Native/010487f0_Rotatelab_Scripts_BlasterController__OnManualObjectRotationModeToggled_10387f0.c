/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnManualObjectRotationModeToggled
void Rotatelab_Scripts_BlasterController__OnManualObjectRotationModeToggled (Rotatelab_Scripts_BlasterController_o* __this, bool isEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$OnManualObjectRotationModeToggled
   void Rotatelab_Scripts_BlasterController__OnManualObjectRotationModeToggled
   (Rotatelab_Scripts_BlasterController_o* __this, bool isEnabled, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__OnManualObjectRotationModeToggled_10387f0
               (int *param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (*(char *)((int)param_1 + 0xc1) == '\0') {
    iVar3 = (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
    if (iVar3 != 0 && param_2 != 1) {
      piVar5 = param_1 + 0x42;
      if (*piVar5 != 0) {
        return;
      }
      uVar4 = Rotatelab_Scripts_BlasterController__ShootingCoroutine_103694c(param_1);
      iVar3 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar4,0);
      param_1[0x42] = iVar3;
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
    iVar3 = param_1[0x42];
    *(undefined1 *)((int)param_1 + 0xc3) = 0;
    if (iVar3 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,iVar3,0);
      param_1[0x42] = 0;
      thunk_FUN_00ec5080(param_1 + 0x42,0);
    }
    if ((param_1[0x2b] | 2U) == 7) {
                    /* WARNING: Could not recover jumptable at 0x010463c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x150))(param_1,6,*(undefined4 *)(*param_1 + 0x154));
      return;
    }
  }
  return;
}

