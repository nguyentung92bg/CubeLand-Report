/* IL2CPP: Rotatelab.SeasonPassUnClaimedReward$$ClaimReward
void Rotatelab_SeasonPassUnClaimedReward__ClaimReward (Rotatelab_SeasonPassUnClaimedReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassUnClaimedReward$$ClaimReward
   void Rotatelab_SeasonPassUnClaimedReward__ClaimReward (Rotatelab_SeasonPassUnClaimedReward_o*
   __this, const MethodInfo* method); */

void Rotatelab_SeasonPassUnClaimedReward__ClaimReward_fc447c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_28 [16];
  
  pcVar3 = (char *)(_UNK_00fd4624 + 0xfd4494);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4628 + 0xfd44a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd462c + 0xfd44b4));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    pcVar3 = (char *)(_UNK_00fd4630 + 0xfd44e4);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4634 + 0xfd44f8));
      *pcVar3 = '\x01';
    }
    iVar2 = *(int *)(**(int **)(_UNK_00fd4638 + 0xfd4510) + 0x5c);
    fVar6 = *(float *)(iVar2 + 0x10);
    fVar7 = *(float *)(iVar2 + 0x14);
    fVar5 = *(float *)(iVar2 + 0xc);
    if (*(int *)(**(int **)(_UNK_00fd463c + 0xfd4538) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__PunchScale_2ceb894
              (auStack_28,uVar1,fVar5 * 0.5,fVar6 * 0.5,fVar7 * 0.5,0x3f000000,0x41200000,1,0,0,1,0,
               0,0,0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fd4640 + 0xfd45b4));
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
              (iVar2,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x18),
               *(undefined4 *)(iVar4 + 0x1c),0,0,0);
  }
  return;
}

