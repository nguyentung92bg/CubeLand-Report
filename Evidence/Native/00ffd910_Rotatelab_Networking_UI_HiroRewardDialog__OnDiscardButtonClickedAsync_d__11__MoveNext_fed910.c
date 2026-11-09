/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<OnDiscardButtonClickedAsync>d__11$$MoveNext
void Rotatelab_Networking_UI_HiroRewardDialog__OnDiscardButtonClickedAsync_d__11__MoveNext (Rotatelab_Networking_UI_HiroRewardDialog__OnDiscardButtonClickedAsync_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<OnDiscardButtonClickedAsync>d__11$$MoveNext
   void Rotatelab_Networking_UI_HiroRewardDialog__OnDiscardButtonClickedAsync_d__11__MoveNext
   (Rotatelab_Networking_UI_HiroRewardDialog__OnDiscardButtonClickedAsync_d__11_o __this, const
   MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardDialog__OnDiscardButtonClickedAsync_d__11__MoveNext_fed910
               (int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_00ffdf50 + 0xffd928);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdf54 + 0xffd93c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdf58 + 0xffd948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdf5c + 0xffd954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdf60 + 0xffd960));
    *pcVar4 = '\x01';
  }
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  iVar7 = param_1[2];
  pcVar4 = (char *)(_UNK_00ffdf64 + 0xffd990);
  if (*param_1 == 0) {
    piStack_30 = (int *)param_1[3];
    iStack_2c = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    if (*param_1 == 1) {
      piStack_30 = (int *)param_1[3];
      iStack_2c = param_1[4];
      *param_1 = -1;
      param_1[3] = 0;
      param_1[4] = 0;
      goto LAB_00ffdd40;
    }
    if (*(int *)(**(int **)(_UNK_00ffdf68 + 0xffd9e8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogWarning_35b0090(**(undefined4 **)(_UNK_00ffdf6c + 0xffda04),0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_fea10c
              (&piStack_40,iVar7);
    piVar8 = *(int **)(_UNK_00ffdf70 + 0xffda30);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_40,0);
    pcVar6 = (char *)(_UNK_00ffdf74 + 0xffda6c);
    iStack_2c = iStack_3c;
    piStack_30 = piStack_40;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdf78 + 0xffda88));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_00ffdf7c + 0xffdab0);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdf80 + 0xffdac4));
      *pcVar6 = '\x01';
    }
    piVar8 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar5 = *piStack_30;
      uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
      iVar9 = (int)(short)iStack_2c;
      if (uVar2 != 0) {
        piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_00ffdf84 + 0xffdae8)) {
            puVar1 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
            goto LAB_00ffdb3c;
          }
          uVar2 = uVar2 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffdf84 + 0xffdae8),0);
LAB_00ffdb3c:
      iVar5 = (*(code *)*puVar1)(piVar8,iVar9,puVar1[1]);
      if (iVar5 == 0) {
        param_1[4] = iStack_2c;
        *param_1 = 0;
        param_1[3] = (int)piStack_30;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x01012a7c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ffdf88 + 0xffde6c))
        ;
        return;
      }
    }
  }
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdf8c + 0xffdb74));
    *pcVar4 = '\x01';
  }
  piVar8 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar5 = *piStack_30;
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    iVar9 = (int)(short)iStack_2c;
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_00ffdf90 + 0xffdb98)) {
          puVar1 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xd0);
          goto LAB_00ffdbec;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffdf90 + 0xffdb98),2);
LAB_00ffdbec:
    (*(code *)*puVar1)(piVar8,iVar9,puVar1[1]);
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_UI_HiroRewardDialog__OnAfterClaimOrDiscardButtonClickedAsync_fea1d4
            (&piStack_40,iVar7);
  piVar8 = *(int **)(_UNK_00ffdf94 + 0xffdc28);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  thunk_FUN_00ec5080(&piStack_40,0);
  pcVar6 = (char *)(_UNK_00ffdf98 + 0xffdc5c);
  iStack_2c = iStack_3c;
  piStack_30 = piStack_40;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdf9c + 0xffdc78));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_00ffdfa0 + 0xffdca0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdfa4 + 0xffdcb4));
    *pcVar6 = '\x01';
  }
  piVar8 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar7 = *piStack_30;
    uVar2 = (uint)*(ushort *)(iVar7 + 0xb6);
    iVar5 = (int)(short)iStack_2c;
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_00ffdfa8 + 0xffdcd8)) {
          puVar1 = (undefined4 *)(iVar7 + *piVar3 * 8 + 0xc0);
          goto LAB_00ffdd24;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffdfa8 + 0xffdcd8),0);
LAB_00ffdd24:
    iVar7 = (*(code *)*puVar1)(piVar8,iVar5,puVar1[1]);
    if (iVar7 == 0) {
      param_1[4] = iStack_2c;
      *param_1 = 1;
      param_1[3] = (int)piStack_30;
      thunk_FUN_00ec5080(param_1 + 3,0);
      func_0x01012a7c(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_00ffdfac + 0xffde28));
      return;
    }
  }
LAB_00ffdd40:
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffdfb0 + 0xffdd58));
    *pcVar4 = '\x01';
  }
  piVar8 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar7 = *piStack_30;
    uVar2 = (uint)*(ushort *)(iVar7 + 0xb6);
    iVar5 = (int)(short)iStack_2c;
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_00ffdfb4 + 0xffdd7c)) {
          puVar1 = (undefined4 *)(iVar7 + *piVar3 * 8 + 0xd0);
          goto LAB_00ffddc8;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)FUN_00efdb38(piStack_30,**(int **)(_UNK_00ffdfb4 + 0xffdd7c),2);
LAB_00ffddc8:
    (*(code *)*puVar1)(piVar8,iVar5,puVar1[1]);
  }
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

