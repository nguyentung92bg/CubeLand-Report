/* IL2CPP: Rotatelab.Boosters.BaseBooster3DIconController$$OnDisable
void Rotatelab_Boosters_BaseBooster3DIconController__OnDisable (Rotatelab_Boosters_BaseBooster3DIconController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBooster3DIconController$$OnDisable
   void Rotatelab_Boosters_BaseBooster3DIconController__OnDisable
   (Rotatelab_Boosters_BaseBooster3DIconController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BaseBooster3DIconController__OnDisable_11307ac(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_011408ec + 0x11407c0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011408f0 + 0x11407d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011408f4 + 0x11407e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011408f8 + 0x11407ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011408fc + 0x11407f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140900 + 0x1140804));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01140904 + 0x1140818);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  puVar9 = *(undefined4 **)(_UNK_01140908 + 0x114083c);
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa4);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_0114090c + 0x114085c),0);
  puVar6 = *(undefined4 **)(_UNK_01140910 + 0x1140878);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar7,uVar4,*puVar6);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa4) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xac);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_01140914 + 0x11408bc),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar7,uVar4,*puVar6);
  puVar6 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xac);
  *puVar6 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

