/* IL2CPP: Rotatelab.Currency.CurrencyManager$$Start
void Rotatelab_Currency_CurrencyManager__Start (Rotatelab_Currency_CurrencyManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.CurrencyManager$$Start
   void Rotatelab_Currency_CurrencyManager__Start (Rotatelab_Currency_CurrencyManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Currency_CurrencyManager__Start_1083574(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_01093704 + 0x1093588);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093708 + 0x109359c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109370c + 0x10935a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093710 + 0x10935b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093714 + 0x10935c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01093718 + 0x10935cc));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0109371c + 0x10935e0);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_01093720 + 0x1093604);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x7c);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01093724 + 0x1093624),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x7c) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x74);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01093728 + 0x109367c),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x74) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x94);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0109372c + 0x10936d4),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  puVar8 = (undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x94);
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

