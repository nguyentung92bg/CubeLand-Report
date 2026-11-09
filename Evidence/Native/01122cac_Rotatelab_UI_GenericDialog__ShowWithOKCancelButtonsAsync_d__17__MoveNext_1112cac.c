/* IL2CPP: Rotatelab.UI.GenericDialog.<ShowWithOKCancelButtonsAsync>d__17$$MoveNext
void Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync_d__17__MoveNext (Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync_d__17_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog.<ShowWithOKCancelButtonsAsync>d__17$$MoveNext
   void Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync_d__17__MoveNext
   (Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync_d__17_o __this, const MethodInfo*
   method); */

void Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync_d__17__MoveNext_1112cac(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uStack_58;
  int iStack_50;
  undefined4 uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01123280 + 0x1122cc4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123284 + 0x1122cd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123288 + 0x1122ce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112328c + 0x1122cf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123290 + 0x1122cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123294 + 0x1122d08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01123298 + 0x1122d14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112329c + 0x1122d20));
    *pcVar7 = '\x01';
  }
  iVar8 = param_1[4];
  uStack_30 = 0;
  iStack_28 = 0;
  uStack_40 = 0;
  iStack_38 = 0;
  uStack_44 = 0;
  if (*param_1 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 9);
    iStack_28 = param_1[0xb];
    *param_1 = -1;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    piVar2 = (int *)uStack_30;
LAB_01122ff0:
    if (piVar2 != (int *)0x0) {
      iVar1 = (int)(short)iStack_28;
      iVar8 = *(int *)(**(int **)(_UNK_011232b4 + 0x1123004) + 0x10);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768();
      }
      iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 0x14);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768(iVar8);
      }
      iVar3 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar8) {
            puVar10 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
            goto LAB_011230d0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined4 *)FUN_00efdb38(piVar2,iVar8,0);
LAB_011230d0:
      iVar8 = (*(code *)*puVar10)(piVar2,iVar1,puVar10[1]);
      goto LAB_011230e8;
    }
  }
  else {
    iVar1 = param_1[5];
    iVar11 = param_1[6];
    iVar12 = param_1[7];
    piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_011232a0 + 0x1122d74),2);
    iVar9 = param_1[8];
    puVar10 = *(undefined4 **)(_UNK_011232a4 + 0x1122d90);
    iVar3 = thunk_FUN_00f00cdc(*puVar10);
    Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor_1111944(iVar3,iVar9,0);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar3 != 0) &&
       (iVar9 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar9 == 0)) {
      uVar4 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar4,0);
    }
    if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[4] = iVar3;
    thunk_FUN_00ec5080(piVar2 + 4,iVar3);
    iVar3 = thunk_FUN_00f00cdc(*puVar10);
    Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor_1111944(iVar3,0,0);
    if ((iVar3 != 0) &&
       (iVar9 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar9 == 0)) {
      uVar4 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar4,0);
    }
    if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[5] = iVar3;
    thunk_FUN_00ec5080(piVar2 + 5,iVar3);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_GenericDialog__ShowAsync_1111b68(&uStack_58,iVar8,iVar1,iVar11,iVar12,piVar2);
    iStack_38 = iStack_50;
    uStack_40 = uStack_58;
    uStack_58 = 0;
    iStack_50 = 0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_011232a8 + 0x1122e9c) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iStack_50 = iStack_38;
    uStack_58 = uStack_40;
    thunk_FUN_00ec5080(&uStack_58,0);
    iStack_28 = iStack_50;
    uStack_30 = uStack_58;
    iVar8 = *(int *)(**(int **)(_UNK_011232ac + 0x1122ef4) + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768();
    }
    piVar2 = (int *)uStack_30;
    if ((int *)uStack_30 != (int *)0x0) {
      iVar1 = (int)(short)iStack_28;
      iVar8 = *(int *)(*(int *)(*(int *)(iVar8 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768();
      }
      iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 4);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768(iVar8);
      }
      iVar3 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar8) {
            puVar10 = (undefined4 *)(iVar3 + *piVar6 * 8 + 200);
            goto LAB_01122fd4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined4 *)FUN_00efdb38(piVar2,iVar8,1);
LAB_01122fd4:
      iVar8 = (*(code *)*puVar10)(piVar2,iVar1,puVar10[1]);
      if (iVar8 == 0) {
        *param_1 = 0;
        param_1[0xb] = iStack_28;
        *(undefined8 *)(param_1 + 9) = uStack_30;
        thunk_FUN_00ec5080(param_1 + 9);
        func_0x01133b68(param_1 + 1,&uStack_30,param_1,**(undefined4 **)(_UNK_011232b0 + 0x11230b0))
        ;
        return;
      }
      goto LAB_01122ff0;
    }
  }
  iVar8 = uStack_30._4_4_;
LAB_011230e8:
  piVar2 = (int *)param_1[1];
  *param_1 = -2;
  if (piVar2 == (int *)0x0) {
    *(bool *)(param_1 + 3) = iVar8 == 0;
  }
  else {
    iVar1 = *(int *)(**(int **)(_UNK_011232c0 + 0x1123108) + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar3 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar1) {
          puVar10 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd0);
          goto LAB_01123198;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined4 *)FUN_00efdb38(piVar2,iVar1,2);
LAB_01123198:
    (*(code *)*puVar10)(piVar2,iVar8 == 0,puVar10[1]);
  }
  return;
}

