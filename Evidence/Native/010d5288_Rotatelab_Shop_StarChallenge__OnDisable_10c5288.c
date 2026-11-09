/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnDisable
void Rotatelab_Shop_StarChallenge__OnDisable (Rotatelab_Shop_StarChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnDisable
   void Rotatelab_Shop_StarChallenge__OnDisable (Rotatelab_Shop_StarChallenge_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallenge__OnDisable_10c5288(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_010d53b4 + 0x10d529c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d53b8 + 0x10d52b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d53bc + 0x10d52bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d53c0 + 0x10d52c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d53c4 + 0x10d52d4));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010d53c8 + 0x10d52e8);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_010d53cc + 0x10d530c);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x158);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d53d0 + 0x10d532c),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x158) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x160);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d53d4 + 0x10d5384),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar6,uVar4,0);
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x160);
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

