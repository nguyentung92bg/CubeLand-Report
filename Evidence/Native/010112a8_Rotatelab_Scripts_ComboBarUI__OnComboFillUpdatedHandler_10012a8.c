/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnComboFillUpdatedHandler
void Rotatelab_Scripts_ComboBarUI__OnComboFillUpdatedHandler (Rotatelab_Scripts_ComboBarUI_o* __this, float fill01, int32_t currentMax, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnComboFillUpdatedHandler
   void Rotatelab_Scripts_ComboBarUI__OnComboFillUpdatedHandler (Rotatelab_Scripts_ComboBarUI_o*
   __this, float fill01, int32_t currentMax, const MethodInfo* method); */

void Rotatelab_Scripts_ComboBarUI__OnComboFillUpdatedHandler_10012a8
               (int param_1,float param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  uint in_fpscr;
  double dVar8;
  float fVar9;
  double dVar10;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_010114a8 + 0x10112cc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010114ac + 0x10112e0));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_fillAmount_3721d6c(*(int *)(param_1 + 0x10),param_2,0);
  fVar9 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  pcVar6 = (char *)(_UNK_010114b0 + 0x1011320);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010114b4 + 0x1011334));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010114b8 + 0x101134c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar8 = (double)(fVar9 * param_2);
  dVar10 = (double)modf(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),&iStack_30);
  if (0.0 <= fVar9 * param_2) {
    if (dVar10 != 0.5) {
      dVar8 = (double)floor(SUB84(dVar8 + 0.5,0),(int)((ulonglong)(dVar8 + 0.5) >> 0x20));
      goto LAB_010113e8;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar10 != -0.5) {
      dVar8 = (double)ceil(SUB84(dVar8 + -0.5,0),(int)((ulonglong)(dVar8 + -0.5) >> 0x20));
      goto LAB_010113e8;
    }
    dVar8 = -1.0;
  }
  uVar1 = FUN_00f88224(iStack_30,uStack_2c);
  dVar8 = (double)CONCAT44(uStack_2c,iStack_30) + dVar8;
  if ((uVar1 & 1) == 0) {
    dVar8 = (double)CONCAT44(uStack_2c,iStack_30);
  }
LAB_010113e8:
  iStack_30 = (int)(longlong)dVar8;
  iVar2 = *(int *)(param_1 + 0x44);
  if (dVar8 == _UNK_010114a0) {
    iStack_30 = -0x80000000;
  }
  bVar7 = iStack_30 == iVar2;
  if (bVar7) {
    iVar2 = *(int *)(param_1 + 0x48);
  }
  if (!bVar7 || iVar2 != param_3) {
    iVar2 = *(int *)(_UNK_010114bc + 0x1011424);
    *(int *)(param_1 + 0x44) = iStack_30;
    piVar5 = *(int **)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(iVar2 + 0x24);
    *(int *)(param_1 + 0x48) = param_3;
    uVar3 = FUN_00ec393c(uVar3,&iStack_30);
    iStack_34 = param_3;
    uVar4 = FUN_00ec393c(*(undefined4 *)(iVar2 + 0x24),&iStack_34);
    uVar3 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_010114c0 + 0x1011464),uVar3,uVar4,0);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar3,*(undefined4 *)(*piVar5 + 0x2b4));
  }
  return;
}

