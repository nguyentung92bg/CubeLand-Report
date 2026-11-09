/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$Awake
void Rotatelab_Scripts_BlasterDockController__Awake (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$Awake
   void Rotatelab_Scripts_BlasterDockController__Awake (Rotatelab_Scripts_BlasterDockController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterDockController__Awake_100c74c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Renderer__get_sharedMaterial_35c59b8(*(int *)(param_1 + 0x1c),0);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x3c),uVar3);
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = UnityEngine_Animator__get_runtimeAnimatorController_35918d8(*(int *)(param_1 + 0x18),0);
    puVar4 = (undefined4 *)(param_1 + 0x40);
    *puVar4 = uVar3;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

