/* IL2CPP: Rotatelab.Scripts.ObjectManager$$OnDestroy
void Rotatelab_Scripts_ObjectManager__OnDestroy (Rotatelab_Scripts_ObjectManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ObjectManager$$OnDestroy
   void Rotatelab_Scripts_ObjectManager__OnDestroy (Rotatelab_Scripts_ObjectManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_ObjectManager__OnDestroy_102a540(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0103a7e8 + 0x103a554);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a7ec + 0x103a568));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a7f0 + 0x103a574));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a7f4 + 0x103a580));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a7f8 + 0x103a58c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a7fc + 0x103a598));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a800 + 0x103a5a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a804 + 0x103a5b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a808 + 0x103a5bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a80c + 0x103a5c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a810 + 0x103a5d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a814 + 0x103a5e0));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0103a818 + 0x103a5f4);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103a81c + 0x103a618));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0103a820 + 0x103a638),0);
  uVar4 = Rotatelab_GameAction_bool___op_Subtraction_23a2944
                    (uVar6,uVar4,**(undefined4 **)(_UNK_0103a824 + 0x103a650));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x10) = uVar4;
  thunk_FUN_00ec5080();
  puVar8 = *(undefined4 **)(_UNK_0103a828 + 0x103a680);
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0103a82c + 0x103a6a0),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xc4);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0103a830 + 0x103a6f8),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xc4) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0103a834 + 0x103a738));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0103a838 + 0x103a758),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar6,uVar4,**(undefined4 **)(_UNK_0103a83c + 0x103a770));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x120) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x98);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0103a840 + 0x103a7b8),0);
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

