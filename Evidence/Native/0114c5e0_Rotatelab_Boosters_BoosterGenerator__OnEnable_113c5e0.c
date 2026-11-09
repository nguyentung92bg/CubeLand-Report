/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$OnEnable
void Rotatelab_Boosters_BoosterGenerator__OnEnable (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$OnEnable
   void Rotatelab_Boosters_BoosterGenerator__OnEnable (Rotatelab_Boosters_BoosterGenerator_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_BoosterGenerator__OnEnable_113c5e0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_0114c864 + 0x114c5f4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c868 + 0x114c608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c86c + 0x114c614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c870 + 0x114c620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c874 + 0x114c62c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c878 + 0x114c638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c87c + 0x114c644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c880 + 0x114c650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c884 + 0x114c65c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c888 + 0x114c668));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c88c + 0x114c674));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0114c890 + 0x114c688);
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(iVar6,*(char *)(*(int *)(iVar3 + 0x5c) + 4) != '\0',0);
  piVar8 = *(int **)(_UNK_0114c894 + 0x114c6d8);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  puVar9 = *(undefined4 **)(_UNK_0114c898 + 0x114c6fc);
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9c);
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0114c89c + 0x114c71c),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x9c) = uVar4;
  thunk_FUN_00ec5080();
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114c8a0 + 0x114c754));
  uVar4 = thunk_FUN_00f00cdc(*puVar9);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0114c8a4 + 0x114c77c),0);
  if (iVar3 != 0) {
    Rotatelab_RemoteConfigManager__add_OnSatoriFlagsRefreshed_1073b50(iVar3,uVar4,0);
    uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114c8a8 + 0x114c7b4));
    System_Action_object____ctor_1f11414
              (uVar4,param_1,**(undefined4 **)(_UNK_0114c8ac + 0x114c7d4),0);
    uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                      (uVar7,uVar4,**(undefined4 **)(_UNK_0114c8b0 + 0x114c7ec));
    *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124) = uVar4;
    thunk_FUN_00ec5080();
    uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1a4);
    uVar4 = thunk_FUN_00f00cdc(*puVar9);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0114c8b4 + 0x114c834),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
    puVar9 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1a4);
    *puVar9 = uVar4;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar9 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar9 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

