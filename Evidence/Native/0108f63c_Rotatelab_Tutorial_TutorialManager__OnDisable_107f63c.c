/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$OnDisable
void Rotatelab_Tutorial_TutorialManager__OnDisable (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$OnDisable
   void Rotatelab_Tutorial_TutorialManager__OnDisable (Rotatelab_Tutorial_TutorialManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__OnDisable_107f63c(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar6 = (char *)(_UNK_0108f7f4 + 0x108f650);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f7f8 + 0x108f664));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f7fc + 0x108f670));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f800 + 0x108f67c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f804 + 0x108f688));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f808 + 0x108f694));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f80c + 0x108f6a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f810 + 0x108f6ac));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0108f814 + 0x108f6c0);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108f818 + 0x108f6e4));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0108f81c + 0x108f704),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x9c) = uVar4;
  thunk_FUN_00ec5080();
  puVar9 = *(undefined4 **)(_UNK_0108f820 + 0x108f744);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0108f824 + 0x108f764),0);
  puVar5 = *(undefined4 **)(_UNK_0108f828 + 0x108f780);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0108f82c + 0x108f7c4),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8(uVar7,uVar4,*puVar5);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
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

