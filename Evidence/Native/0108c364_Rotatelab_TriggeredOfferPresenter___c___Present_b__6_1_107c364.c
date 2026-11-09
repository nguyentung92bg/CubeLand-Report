/* IL2CPP: Rotatelab.TriggeredOfferPresenter.<>c$$<Present>b__6_1
int32_t Rotatelab_TriggeredOfferPresenter___c___Present_b__6_1 (Rotatelab_TriggeredOfferPresenter___c_o* __this, Rotatelab_ITriggeredOffer_o* offer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.TriggeredOfferPresenter.<>c$$<Present>b__6_1
   int32_t Rotatelab_TriggeredOfferPresenter___c___Present_b__6_1
   (Rotatelab_TriggeredOfferPresenter___c_o* __this, Rotatelab_ITriggeredOffer_o* offer, const
   MethodInfo* method); */

void Rotatelab_TriggeredOfferPresenter___c___Present_b__6_1_107c364(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0108c40c + 0x108c378);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c410 + 0x108c38c));
    *pcVar5 = '\x01';
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0108c414 + 0x108c3b0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
        goto LAB_0108c3f8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_0108c414 + 0x108c3b0),1);
LAB_0108c3f8:
                    /* WARNING: Could not recover jumptable at 0x0108c408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}

