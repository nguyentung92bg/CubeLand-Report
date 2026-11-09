/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnEnable
void Rotatelab_Shop_StarChallenge__OnEnable (Rotatelab_Shop_StarChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$OnEnable
   void Rotatelab_Shop_StarChallenge__OnEnable (Rotatelab_Shop_StarChallenge_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallenge__OnEnable_10c5138(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_010d5264 + 0x10d514c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5268 + 0x10d5160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d526c + 0x10d516c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5270 + 0x10d5178));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d5274 + 0x10d5184));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010d5278 + 0x10d5198);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_010d527c + 0x10d51bc);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x158);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d5280 + 0x10d51dc),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x158) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x160);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010d5284 + 0x10d5234),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
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

