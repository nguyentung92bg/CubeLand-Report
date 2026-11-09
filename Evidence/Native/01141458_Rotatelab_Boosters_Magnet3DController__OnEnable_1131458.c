/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$OnEnable
void Rotatelab_Boosters_Magnet3DController__OnEnable (Rotatelab_Boosters_Magnet3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Magnet3DController$$OnEnable
   void Rotatelab_Boosters_Magnet3DController__OnEnable (Rotatelab_Boosters_Magnet3DController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_Magnet3DController__OnEnable_1131458(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_011415b4 + 0x114146c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011415b8 + 0x1141480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011415bc + 0x114148c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011415c0 + 0x1141498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011415c4 + 0x11414a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011415c8 + 0x11414b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011415cc + 0x11414bc));
    *pcVar6 = '\x01';
  }
  Rotatelab_Boosters_BaseBooster3DIconController__OnEnable_1130640(param_1);
  piVar8 = *(int **)(_UNK_011415d0 + 0x11414d8);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011415d4 + 0x11414fc));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_011415d8 + 0x114151c),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_011415dc + 0x1141534));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x24) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x28);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011415e0 + 0x1141564));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_011415e4 + 0x1141584),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
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

