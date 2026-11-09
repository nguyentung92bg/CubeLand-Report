/* IL2CPP: Rotatelab.TriggeredOfferPresenter.<>c__DisplayClass6_0$$<Present>b__0
bool Rotatelab_TriggeredOfferPresenter___c__DisplayClass6_0___Present_b__0 (Rotatelab_TriggeredOfferPresenter___c__DisplayClass6_0_o* __this, Rotatelab_ITriggeredOffer_o* offer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.TriggeredOfferPresenter.<>c__DisplayClass6_0$$<Present>b__0
   bool Rotatelab_TriggeredOfferPresenter___c__DisplayClass6_0___Present_b__0
   (Rotatelab_TriggeredOfferPresenter___c__DisplayClass6_0_o* __this, Rotatelab_ITriggeredOffer_o*
   offer, const MethodInfo* method); */

void Rotatelab_TriggeredOfferPresenter___c__DisplayClass6_0___Present_b__0_107c418
               (int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0108c4cc + 0x108c430);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c4d0 + 0x108c444));
    *pcVar6 = '\x01';
  }
  uVar5 = *(undefined4 *)(param_1 + 8);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0108c4d4 + 0x108c46c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0108c4b4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_0108c4d4 + 0x108c46c),0);
LAB_0108c4b4:
                    /* WARNING: Could not recover jumptable at 0x0108c4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,uVar5,puVar2[1]);
  return;
}

