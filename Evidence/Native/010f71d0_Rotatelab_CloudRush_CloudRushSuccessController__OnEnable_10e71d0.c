/* IL2CPP: Rotatelab.CloudRush.CloudRushSuccessController$$OnEnable
void Rotatelab_CloudRush_CloudRushSuccessController__OnEnable (Rotatelab_CloudRush_CloudRushSuccessController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushSuccessController$$OnEnable
   void Rotatelab_CloudRush_CloudRushSuccessController__OnEnable
   (Rotatelab_CloudRush_CloudRushSuccessController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushSuccessController__OnEnable_10e71d0(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010f7298 + 0x10f71e4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f729c + 0x10f71f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f72a0 + 0x10f7204));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f72a4 + 0x10f7210));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010f72a8 + 0x10f7224);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1a0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f72ac + 0x10f7248));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010f72b0 + 0x10f7268),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1a0);
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

