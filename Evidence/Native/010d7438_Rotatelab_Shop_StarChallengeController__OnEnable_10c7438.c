/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnEnable
void Rotatelab_Shop_StarChallengeController__OnEnable (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnEnable
   void Rotatelab_Shop_StarChallengeController__OnEnable (Rotatelab_Shop_StarChallengeController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController__OnEnable_10c7438(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_010d7654 + 0x10d744c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7658 + 0x10d7460));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d765c + 0x10d746c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7660 + 0x10d7478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7664 + 0x10d7484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7668 + 0x10d7490));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d766c + 0x10d749c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7670 + 0x10d74a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d7674 + 0x10d74b4));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010d7678 + 0x10d74c8);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_010d767c + 0x10d74ec);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x78);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d7680 + 0x10d750c),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x78) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x154);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d7684 + 0x10d7564),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x154) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d7688 + 0x10d75a4));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_010d768c + 0x10d75c4),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar6,uVar4,**(undefined4 **)(_UNK_010d7690 + 0x10d75dc));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x98);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d7694 + 0x10d7624),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
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

