/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$OnDailyQuestWeeklyRewardClaimedHandler
void Rotatelab_Shop_DailyQuestCanvasController__OnDailyQuestWeeklyRewardClaimedHandler (Rotatelab_Shop_DailyQuestCanvasController_o* __this, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$OnDailyQuestWeeklyRewardClaimedHandler
   void Rotatelab_Shop_DailyQuestCanvasController__OnDailyQuestWeeklyRewardClaimedHandler
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, int32_t amount, const MethodInfo* method);
    */

void Rotatelab_Shop_DailyQuestCanvasController__OnDailyQuestWeeklyRewardClaimedHandler_10bcd78
               (int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint in_fpscr;
  
  pcVar8 = (char *)(_UNK_010cc16c + 0x10cc070);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc170 + 0x10cc084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc174 + 0x10cc090));
    *pcVar8 = '\x01';
  }
  piVar9 = (int *)(param_1 + 0x80);
  if (*piVar9 != 0) {
    DG_Tweening_TweenExtensions__Kill_1168b64(*piVar9,0,0);
  }
  iVar11 = *(int *)(param_1 + 0x84);
  iVar3 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestWeeklyValue_10b9274();
  iVar4 = iVar3 + param_2;
  if (iVar11 < iVar3 + param_2) {
    iVar4 = iVar11;
  }
  Rotatelab_Shop_DailyQuestCanvasController__set_DailyQuestWeeklyValue_10b92c8(iVar4);
  piVar10 = *(int **)(param_1 + 0x60);
  if (piVar10 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar10 + 0x230))(piVar10,*(undefined4 *)(*piVar10 + 0x234));
    uVar6 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestWeeklyValue_10b9274();
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cc178 + 0x10cc108));
    DG_Tweening_TweenCallback_float____ctor_1bf9864
              (uVar7,param_1,**(undefined4 **)(_UNK_010cc17c + 0x10cc128),0);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = DG_Tweening_DOVirtual__Float_11682ec(uVar5,uVar6,0x3ecccccd,uVar7,0);
    *(undefined4 *)(param_1 + 0x80) = uVar5;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar9 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar9 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

