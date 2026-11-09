/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog.<OnBeforeClaimOrDiscardButtonClickedAsync>d__12$$MoveNext
void Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_d__12__MoveNext (Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_d__12_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.UI.HiroRewardDialog.<OnBeforeClaimOrDiscardButtonClickedAsync>d__12$$MoveNext
   void 
   Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_d__12__MoveNext
   (Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_d__12_o
   __this, const MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_d__12__MoveNext_fec6dc
               (int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_00ffcc24 + 0xffc6f4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc28 + 0xffc708));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc2c + 0xffc714));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc30 + 0xffc720));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc34 + 0xffc72c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc38 + 0xffc738));
    *pcVar5 = '\x01';
  }
  iVar6 = param_1[3];
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  uStack_2c = 0;
  if (*param_1 == 0) {
    piVar8 = (int *)param_1[4];
    iVar6 = param_1[5];
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
    piStack_28 = piVar8;
    iStack_24 = iVar6;
  }
  else {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar6,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
    puVar7 = *(undefined4 **)(_UNK_00ffcc3c + 0xffc7a4);
    uVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (*(int *)(**(int **)(_UNK_00ffcc40 + 0xffc7b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar1,0,iVar6,0);
    }
    puVar7 = *(undefined4 **)(_UNK_00ffcc44 + 0xffc818);
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = Hiro_NetworkMonitor__get_Online_296750c(*(int *)(iVar6 + 0x2c),0);
    if (iVar6 != 0) goto LAB_00ffca64;
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Networking_HiroController__ShowInternetConnectionDialogAsync_114ce04
              (&piStack_38,iVar6,0,0);
    piVar8 = *(int **)(_UNK_00ffcc48 + 0xffc888);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    thunk_FUN_00ec5080(&piStack_38,0);
    pcVar5 = (char *)(_UNK_00ffcc4c + 0xffc8bc);
    iStack_24 = iStack_34;
    piStack_28 = piStack_38;
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc50 + 0xffc8d8));
      *pcVar5 = '\x01';
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar5 = (char *)(_UNK_00ffcc54 + 0xffc900);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc58 + 0xffc914));
      *pcVar5 = '\x01';
    }
    iVar6 = (int)(short)iStack_34;
    if (piStack_38 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      iVar1 = *piStack_38;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_00ffcc5c + 0xffc938)) {
            puVar7 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_00ffc9a8;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_00ffcc5c + 0xffc938),0);
LAB_00ffc9a8:
      iVar1 = (*(code *)*puVar7)(piStack_38,iVar6,puVar7[1]);
      piVar8 = piStack_38;
      if (iVar1 == 0) {
        param_1[5] = iStack_34;
        *param_1 = 0;
        param_1[4] = (int)piStack_38;
        thunk_FUN_00ec5080(param_1 + 4,0);
        func_0x0101283c(param_1 + 1,&piStack_28,param_1,**(undefined4 **)(_UNK_00ffcc60 + 0xffcb38))
        ;
        return;
      }
    }
  }
  pcVar5 = (char *)(_UNK_00ffcc64 + 0xffc9d4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc68 + 0xffc9e8));
    *pcVar5 = '\x01';
  }
  if (piVar8 != (int *)0x0) {
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_00ffcc6c + 0xffca08)) {
          puVar7 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
          goto LAB_00ffca50;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_00ffcc6c + 0xffca08),2);
LAB_00ffca50:
    (*(code *)*puVar7)(piVar8,(int)(short)iVar6,puVar7[1]);
  }
LAB_00ffca64:
  iVar6 = _UNK_00ffcc70;
  *param_1 = -2;
  if (*(char *)(iVar6 + 0xffca78) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffcc74 + 0xffca8c));
    *(char *)(iVar6 + 0xffca78) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar6 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_00ffcc78 + 0xffcab0)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xd0);
          goto LAB_00ffcaf8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_00ffcc78 + 0xffcab0),2);
LAB_00ffcaf8:
    (*(code *)*puVar7)(piVar8,puVar7[1]);
  }
  return;
}

