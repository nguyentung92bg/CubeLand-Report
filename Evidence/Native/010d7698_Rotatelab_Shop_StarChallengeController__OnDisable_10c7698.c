/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnDisable
void Rotatelab_Shop_StarChallengeController__OnDisable (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnDisable
   void Rotatelab_Shop_StarChallengeController__OnDisable (Rotatelab_Shop_StarChallengeController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__OnDisable_10c7698(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_010d78b4 + 0x10d76ac);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d78b8 + 0x10d76c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d78bc + 0x10d76cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d78c0 + 0x10d76d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d78c4 + 0x10d76e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d78c8 + 0x10d76f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d78cc + 0x10d76fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d78d0 + 0x10d7708));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d78d4 + 0x10d7714));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010d78d8 + 0x10d7728);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_010d78dc + 0x10d774c);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x78);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d78e0 + 0x10d776c),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x78) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x154);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d78e4 + 0x10d77c4),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x154) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d78e8 + 0x10d7804));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010d78ec + 0x10d7824),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar6,uVar4,**(undefined4 **)(_UNK_010d78f0 + 0x10d783c));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x98);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d78f4 + 0x10d7884),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x98);
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

