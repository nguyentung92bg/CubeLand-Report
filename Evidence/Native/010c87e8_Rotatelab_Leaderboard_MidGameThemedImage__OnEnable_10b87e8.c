/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedImage$$OnEnable
void Rotatelab_Leaderboard_MidGameThemedImage__OnEnable (Rotatelab_Leaderboard_MidGameThemedImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedImage$$OnEnable
   void Rotatelab_Leaderboard_MidGameThemedImage__OnEnable
   (Rotatelab_Leaderboard_MidGameThemedImage_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameThemedImage__OnEnable_10b87e8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_010c88c0 + 0x10c87fc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c88c4 + 0x10c8810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c88c8 + 0x10c881c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c88cc + 0x10c8828));
    *pcVar5 = '\x01';
  }
  Rotatelab_Leaderboard_MidGameThemedImage__Apply_10b88dc(param_1);
  piVar7 = *(int **)(_UNK_010c88d0 + 0x10c8844);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  uVar6 = **(undefined4 **)(iVar3 + 0x5c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c88d4 + 0x10c8868));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010c88d8 + 0x10c8888),0);
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

