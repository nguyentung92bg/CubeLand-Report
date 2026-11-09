/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$OnDisable
void Rotatelab_Boosters_SpecialBooster__OnDisable (Rotatelab_Boosters_SpecialBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.SpecialBooster$$OnDisable
   void Rotatelab_Boosters_SpecialBooster__OnDisable (Rotatelab_Boosters_SpecialBooster_o* __this,
   const MethodInfo* method); */

void Rotatelab_Boosters_SpecialBooster__OnDisable_113d668(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0114d730 + 0x114d67c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d734 + 0x114d690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d738 + 0x114d69c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114d73c + 0x114d6a8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0114d740 + 0x114d6bc);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x48);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114d744 + 0x114d6e0));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0114d748 + 0x114d700),0);
  uVar4 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar7,uVar4,0);
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x48);
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

