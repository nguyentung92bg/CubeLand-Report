/* IL2CPP: Rotatelab.Scripts.HiddenChestLockController$$Initialize
void Rotatelab_Scripts_HiddenChestLockController__Initialize (Rotatelab_Scripts_HiddenChestLockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HiddenChestLockController$$Initialize
   void Rotatelab_Scripts_HiddenChestLockController__Initialize
   (Rotatelab_Scripts_HiddenChestLockController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_HiddenChestLockController__Initialize_100feb0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0101ff28 + 0x101fec4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ff2c + 0x101fed8));
    *pcVar6 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0101ff30 + 0x101feec));
  if (iVar3 != 0) {
    uVar4 = Rotatelab_Grid_GridManager__GetCellsEncapsulatedByRenderer_1107118
                      (iVar3,*(undefined4 *)(param_1 + 0x10),0);
    puVar5 = (undefined4 *)(param_1 + 0x1c);
    *puVar5 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

