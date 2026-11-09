/* IL2CPP: Rotatelab.Boosters.BounceBoosterController$$OnDisable
void Rotatelab_Boosters_BounceBoosterController__OnDisable (Rotatelab_Boosters_BounceBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BounceBoosterController$$OnDisable
   void Rotatelab_Boosters_BounceBoosterController__OnDisable
   (Rotatelab_Boosters_BounceBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BounceBoosterController__OnDisable_1132a28(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_01142b5c + 0x1142a3c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142b60 + 0x1142a50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142b64 + 0x1142a5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142b68 + 0x1142a68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142b6c + 0x1142a74));
    *pcVar5 = '\x01';
  }
  Rotatelab_Boosters_BaseBoosterController__OnDisable_1131de8(param_1);
  piVar7 = *(int **)(_UNK_01142b70 + 0x1142a90);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_01142b74 + 0x1142ab4);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x34);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01142b78 + 0x1142ad4),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x34) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x38);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01142b7c + 0x1142b2c),0);
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

