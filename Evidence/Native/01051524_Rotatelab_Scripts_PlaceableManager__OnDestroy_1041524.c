/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnDestroy
void Rotatelab_Scripts_PlaceableManager__OnDestroy (Rotatelab_Scripts_PlaceableManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$OnDestroy
   void Rotatelab_Scripts_PlaceableManager__OnDestroy (Rotatelab_Scripts_PlaceableManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__OnDestroy_1041524(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01051808 + 0x1051538);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105180c + 0x105154c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051810 + 0x1051558));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051814 + 0x1051564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051818 + 0x1051570));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105181c + 0x105157c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051820 + 0x1051588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051824 + 0x1051594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051828 + 0x10515a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105182c + 0x10515ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01051830 + 0x10515b8));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01051834 + 0x10515cc);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_01051838 + 0x10515f0);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa4);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_0105183c + 0x1051610),0);
  puVar9 = *(undefined4 **)(_UNK_01051840 + 0x105162c);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa4) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa8);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_01051844 + 0x1051670),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa8) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xac);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_01051848 + 0x10516c8),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Subtraction_23a2e14(uVar6,uVar4,*puVar9);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xac) = uVar4;
  thunk_FUN_00ec5080();
  puVar8 = *(undefined4 **)(_UNK_0105184c + 0x1051708);
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x2c);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01051850 + 0x1051728),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x2c) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01051854 + 0x1051780),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xc);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01051858 + 0x10517d8),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xc);
  *puVar8 = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar8 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar8 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

