/* IL2CPP: Rotatelab.Boosters.Bounce3DController$$OnDisable
void Rotatelab_Boosters_Bounce3DController__OnDisable (Rotatelab_Boosters_Bounce3DController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Bounce3DController$$OnDisable
   void Rotatelab_Boosters_Bounce3DController__OnDisable (Rotatelab_Boosters_Bounce3DController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_Bounce3DController__OnDisable_1130c84(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_01140db8 + 0x1140c98);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140dbc + 0x1140cac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140dc0 + 0x1140cb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140dc4 + 0x1140cc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01140dc8 + 0x1140cd0));
    *pcVar5 = '\x01';
  }
  Rotatelab_Boosters_BaseBooster3DIconController__OnDisable_11307ac(param_1);
  piVar7 = *(int **)(_UNK_01140dcc + 0x1140cec);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_01140dd0 + 0x1140d10);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x34);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01140dd4 + 0x1140d30),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x34) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x38);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01140dd8 + 0x1140d88),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x38);
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

