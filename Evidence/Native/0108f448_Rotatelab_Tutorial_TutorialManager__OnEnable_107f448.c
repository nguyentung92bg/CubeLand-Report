/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$OnEnable
void Rotatelab_Tutorial_TutorialManager__OnEnable (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$OnEnable
   void Rotatelab_Tutorial_TutorialManager__OnEnable (Rotatelab_Tutorial_TutorialManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__OnEnable_107f448(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_0108f600 + 0x108f45c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f604 + 0x108f470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f608 + 0x108f47c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f60c + 0x108f488));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f610 + 0x108f494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f614 + 0x108f4a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f618 + 0x108f4ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f61c + 0x108f4b8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0108f620 + 0x108f4cc);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108f624 + 0x108f4f0));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0108f628 + 0x108f510),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x9c) = uVar4;
  thunk_FUN_00ec5080();
  puVar9 = *(undefined4 **)(_UNK_0108f62c + 0x108f550);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0108f630 + 0x108f570),0);
  puVar5 = *(undefined4 **)(_UNK_0108f634 + 0x108f58c);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c(uVar7,uVar4,*puVar5);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0108f638 + 0x108f5d0),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c(uVar7,uVar4,*puVar5);
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

