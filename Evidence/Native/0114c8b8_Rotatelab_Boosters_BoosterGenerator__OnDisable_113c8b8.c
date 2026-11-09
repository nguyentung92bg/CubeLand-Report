/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$OnDisable
void Rotatelab_Boosters_BoosterGenerator__OnDisable (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$OnDisable
   void Rotatelab_Boosters_BoosterGenerator__OnDisable (Rotatelab_Boosters_BoosterGenerator_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_BoosterGenerator__OnDisable_113c8b8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0114cae0 + 0x114c8cc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cae4 + 0x114c8e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cae8 + 0x114c8ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114caec + 0x114c8f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114caf0 + 0x114c904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114caf4 + 0x114c910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114caf8 + 0x114c91c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cafc + 0x114c928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cb00 + 0x114c934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cb04 + 0x114c940));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0114cb08 + 0x114c954);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_0114cb0c + 0x114c978);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9c);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0114cb10 + 0x114c998),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x9c) = uVar4;
  thunk_FUN_00ec5080();
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114cb14 + 0x114c9d0));
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0114cb18 + 0x114c9f8),0);
  if (iVar3 != 0) {
    Rotatelab_RemoteConfigManager__remove_OnSatoriFlagsRefreshed_1073bf0(iVar3,uVar4,0);
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x124);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114cb1c + 0x114ca30));
    System_Action_object____ctor_1f11414
              (uVar4,param_1,**(undefined4 **)(_UNK_0114cb20 + 0x114ca50),0);
    uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                      (uVar6,uVar4,**(undefined4 **)(_UNK_0114cb24 + 0x114ca68));
    *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x124) = uVar4;
    thunk_FUN_00ec5080();
    uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1a4);
    uVar4 = thunk_FUN_00f00cdc(*puVar8);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0114cb28 + 0x114cab0),0);
    uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
    puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1a4);
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
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

