/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$Update
void Rotatelab_Shop_DailyQuestMemberController__Update (Rotatelab_Shop_DailyQuestMemberController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$Update
   void Rotatelab_Shop_DailyQuestMemberController__Update
   (Rotatelab_Shop_DailyQuestMemberController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestMemberController__Update_10bf408(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  undefined4 auStack_24 [3];
  
  cVar2 = *(char *)(param_1 + 0x26);
  bVar11 = cVar2 == '\0';
  if (bVar11) {
    cVar2 = *(char *)(param_1 + 0x24);
  }
  if ((!bVar11 || cVar2 != '\0') || (*(char *)(param_1 + 0x25) != '\0')) {
    fVar13 = *(float *)(param_1 + 0x28);
    fVar4 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
    fVar13 = fVar13 + fVar4;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar13 < _UNK_010cf484) << 0x1f;
    uVar12 = uVar1 | (uint)(NAN(fVar13) || NAN(_UNK_010cf484)) << 0x1c;
    *(float *)(param_1 + 0x28) = fVar13;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      cVar2 = *(char *)(param_1 + 0x24);
      bVar11 = cVar2 == '\0';
      if (bVar11) {
        cVar2 = *(char *)(param_1 + 0x25);
      }
      if (!bVar11 || cVar2 != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuest_10bc9e0
                        (*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c));
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(param_1 + 0x30);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Shop_DailyQuestCanvasController__SaveCurrentDailyQuests_10bc1a8(iVar10);
      uVar6 = *(undefined4 *)(iVar5 + 0x10);
      pcVar7 = (char *)(_UNK_010cee1c + 0x10cec9c);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cee20 + 0x10cecb0));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cee24 + 0x10cecbc));
        *pcVar7 = '\x01';
      }
      piVar8 = *(int **)(param_1 + 0x1c);
      auStack_24[0] = 0;
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar4 = (float)VectorSignedToFloat(uVar6,(byte)(uVar12 >> 0x16) & 3);
      (**(code **)(*piVar8 + 0x238))(piVar8,fVar4,*(undefined4 *)(*piVar8 + 0x23c));
      piVar8 = *(int **)(param_1 + 0x18);
      piVar9 = *(int **)(param_1 + 0x1c);
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      auStack_24[0] = (**(code **)(*piVar9 + 0x230))(piVar9,*(undefined4 *)(*piVar9 + 0x234));
      uVar6 = System_Single__ToString_2b8501c(auStack_24,0);
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      auStack_24[0] = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc4);
      uVar3 = System_Single__ToString_2b8501c(auStack_24,0);
      uVar6 = System_String__Concat_2a0b574
                        (uVar6,**(undefined4 **)(_UNK_010cee28 + 0x10ced6c),uVar3,0);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar6,*(undefined4 *)(*piVar8 + 0x2b4));
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((*(float *)(*(int *)(param_1 + 0x1c) + 0xc4) <= fVar4) &&
         (*(char *)(param_1 + 0x24) == '\0')) {
        piVar8 = *(int **)(_UNK_010cee2c + 0x10cedd8);
        *(undefined1 *)(param_1 + 0x25) = 1;
        iVar5 = *piVar8;
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar8;
        }
        iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x168);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction__Raise_fc08b8(iVar5,0);
      }
      return;
    }
  }
  return;
}

