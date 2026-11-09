/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$OnDisable
void Rotatelab_Boosters_Magnet3DController__OnDisable (Rotatelab_Boosters_Magnet3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$OnDisable
   void Rotatelab_Boosters_Magnet3DController__OnDisable (Rotatelab_Boosters_Magnet3DController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_Magnet3DController__OnDisable_11315e8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01141744 + 0x11415fc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141748 + 0x1141610));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114174c + 0x114161c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141750 + 0x1141628));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141754 + 0x1141634));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01141758 + 0x1141640));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114175c + 0x114164c));
    *pcVar6 = '\x01';
  }
  Rotatelab_Boosters_BaseBooster3DIconController__OnDisable_11307ac(param_1);
  piVar8 = *(int **)(_UNK_01141760 + 0x1141668);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01141764 + 0x114168c));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01141768 + 0x11416ac),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0114176c + 0x11416c4));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x24) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x28);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01141770 + 0x11416f4));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01141774 + 0x1141714),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x28);
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

