/* IL2CPP: Rotatelab.Boosters.Booster$$OnEnable
void Rotatelab_Boosters_Booster__OnEnable (Rotatelab_Boosters_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$OnEnable
   void Rotatelab_Boosters_Booster__OnEnable (Rotatelab_Boosters_Booster_o* __this, const
   MethodInfo* method); */

void Rotatelab_Boosters_Booster__OnEnable_113a2d0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  pcVar7 = (char *)(_UNK_0114a7f8 + 0x114a2e8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a7fc + 0x114a2fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a800 + 0x114a308));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a804 + 0x114a314));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a808 + 0x114a320));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a80c + 0x114a32c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a810 + 0x114a338));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a814 + 0x114a344));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a818 + 0x114a350));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a81c + 0x114a35c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a820 + 0x114a368));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a824 + 0x114a374));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a828 + 0x114a380));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a82c + 0x114a38c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a830 + 0x114a398));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a834 + 0x114a3a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a838 + 0x114a3b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a83c + 0x114a3bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a840 + 0x114a3c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114a844 + 0x114a3d4));
    *pcVar7 = '\x01';
  }
  piVar10 = *(int **)(_UNK_0114a848 + 0x114a3e8);
  iVar4 = *piVar10;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar10;
  }
  puVar11 = *(undefined4 **)(_UNK_0114a84c + 0x114a40c);
  uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x74);
  uVar5 = thunk_FUN_00f00cdc(*puVar11);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_0114a850 + 0x114a42c),0);
  uVar5 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar5,0);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x74) = uVar5;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x124);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114a854 + 0x114a46c));
  System_Action_object____ctor_1f11414(uVar5,param_1,**(undefined4 **)(_UNK_0114a858 + 0x114a48c),0)
  ;
  uVar5 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar8,uVar5,**(undefined4 **)(_UNK_0114a85c + 0x114a4a4));
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x124) = uVar5;
  thunk_FUN_00ec5080();
  puVar12 = *(undefined4 **)(_UNK_0114a860 + 0x114a4d4);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xa8);
  uVar5 = thunk_FUN_00f00cdc(*puVar12);
  System_Action_Int32Enum____ctor_1f10670
            (uVar5,param_1,**(undefined4 **)(_UNK_0114a864 + 0x114a4f4),0);
  puVar6 = *(undefined4 **)(_UNK_0114a868 + 0x114a510);
  uVar5 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar8,uVar5,*puVar6);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xa8) = uVar5;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xb0);
  uVar5 = thunk_FUN_00f00cdc(*puVar12);
  System_Action_Int32Enum____ctor_1f10670
            (uVar5,param_1,**(undefined4 **)(_UNK_0114a86c + 0x114a554),0);
  uVar5 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar8,uVar5,*puVar6);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xb0) = uVar5;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xd4);
  uVar5 = thunk_FUN_00f00cdc(*puVar11);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_0114a870 + 0x114a5ac),0);
  uVar5 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar5,0);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xd4) = uVar5;
  thunk_FUN_00ec5080();
  puVar12 = *(undefined4 **)(_UNK_0114a874 + 0x114a5ec);
  uVar8 = **(undefined4 **)(*piVar10 + 0x5c);
  uVar5 = thunk_FUN_00f00cdc(*puVar12);
  puVar13 = *(undefined4 **)(_UNK_0114a878 + 0x114a60c);
  System_Action_object____ctor_1f11414(uVar5,param_1,*puVar13,0);
  puVar6 = *(undefined4 **)(_UNK_0114a87c + 0x114a624);
  uVar5 = Rotatelab_GameAction_object___op_Addition_23a2f60(uVar8,uVar5,*puVar6);
  **(undefined4 **)(*piVar10 + 0x5c) = uVar5;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar10 + 0x5c));
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 4);
  uVar5 = thunk_FUN_00f00cdc(*puVar12);
  System_Action_object____ctor_1f11414(uVar5,param_1,*puVar13,0);
  uVar5 = Rotatelab_GameAction_object___op_Addition_23a2f60(uVar8,uVar5,*puVar6);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 4) = uVar5;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xc4);
  uVar5 = thunk_FUN_00f00cdc(*puVar11);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_0114a880 + 0x114a6bc),0);
  uVar5 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar5,0);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xc4) = uVar5;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x1c);
  uVar5 = thunk_FUN_00f00cdc(*puVar11);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_0114a884 + 0x114a714),0);
  uVar5 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar5,0);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x1c) = uVar5;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x1a8);
  uVar5 = thunk_FUN_00f00cdc(*puVar11);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_0114a888 + 0x114a76c),0);
  uVar5 = Rotatelab_GameAction__op_Addition_fbfed8(uVar8,uVar5,0);
  *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x1a8) = uVar5;
  thunk_FUN_00ec5080();
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114a88c + 0x114a7a4));
  uVar5 = thunk_FUN_00f00cdc(*puVar11);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_0114a890 + 0x114a7cc),0);
  if (iVar4 != 0) {
    pcVar7 = (char *)(_UNK_0103a134 + 0x103a0b8);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0103a138 + 0x103a0cc),uVar5,0);
      *pcVar7 = '\x01';
    }
    piVar10 = *(int **)(_UNK_0103a13c + 0x103a0e4);
    iVar1 = *(int *)(iVar4 + 0xb4);
    while( true ) {
      piVar2 = (int *)System_Delegate__Combine_2bbca94(iVar1,uVar5,0);
      piVar9 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (piVar9 = piVar2, *piVar2 != *piVar10)) break;
      iVar3 = FUN_00efd180((int *)(iVar4 + 0xb4),piVar9,iVar1);
      bVar14 = iVar3 == iVar1;
      iVar1 = iVar3;
      if (bVar14) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

