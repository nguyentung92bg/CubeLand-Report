/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedRect$$OnEnable
void Rotatelab_Leaderboard_MidGameThemedRect__OnEnable (Rotatelab_Leaderboard_MidGameThemedRect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedRect$$OnEnable
   void Rotatelab_Leaderboard_MidGameThemedRect__OnEnable
   (Rotatelab_Leaderboard_MidGameThemedRect_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameThemedRect__OnEnable_10b8c58(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_010c8d30 + 0x10c8c6c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8d34 + 0x10c8c80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8d38 + 0x10c8c8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8d3c + 0x10c8c98));
    *pcVar5 = '\x01';
  }
  Rotatelab_Leaderboard_MidGameThemedRect__Apply_10b8d4c(param_1);
  piVar7 = *(int **)(_UNK_010c8d40 + 0x10c8cb4);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = **(undefined4 **)(iVar3 + 0x5c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c8d44 + 0x10c8cd8));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010c8d48 + 0x10c8cf8),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar6,uVar4,0);
  **(undefined4 **)(*piVar7 + 0x5c) = uVar4;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar7 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar7 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

