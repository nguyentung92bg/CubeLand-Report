/* IL2CPP: Rotatelab.Boosters.BounceBoosterController$$OnEnable
void Rotatelab_Boosters_BounceBoosterController__OnEnable (Rotatelab_Boosters_BounceBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BounceBoosterController$$OnEnable
   void Rotatelab_Boosters_BounceBoosterController__OnEnable
   (Rotatelab_Boosters_BounceBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BounceBoosterController__OnEnable_11328d0(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_01142a04 + 0x11428e4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142a08 + 0x11428f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142a0c + 0x1142904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142a10 + 0x1142910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142a14 + 0x114291c));
    *pcVar5 = '\x01';
  }
  Rotatelab_Boosters_BaseBoosterController__OnEnable_1131c7c(param_1);
  piVar7 = *(int **)(_UNK_01142a18 + 0x1142938);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar8 = *(undefined4 **)(_UNK_01142a1c + 0x114295c);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x34);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01142a20 + 0x114297c),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x34) = uVar4;
  thunk_FUN_00ec5080();
  uVar6 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x38);
  uVar4 = thunk_FUN_00f00cdc(*puVar8);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01142a24 + 0x11429d4),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
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

