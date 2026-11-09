/* IL2CPP: Rotatelab.OfflinePlayController.<ShowDialogWhileOfflineDelayedAsync>d__3$$MoveNext
void Rotatelab_OfflinePlayController__ShowDialogWhileOfflineDelayedAsync_d__3__MoveNext (Rotatelab_OfflinePlayController__ShowDialogWhileOfflineDelayedAsync_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.OfflinePlayController.<ShowDialogWhileOfflineDelayedAsync>d__3$$MoveNext
   void Rotatelab_OfflinePlayController__ShowDialogWhileOfflineDelayedAsync_d__3__MoveNext
   (Rotatelab_OfflinePlayController__ShowDialogWhileOfflineDelayedAsync_d__3_o __this, const
   MethodInfo* method); */

void Rotatelab_OfflinePlayController__ShowDialogWhileOfflineDelayedAsync_d__3__MoveNext_fb8398
               (int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_30;
  undefined1 uStack_29;
  int *piStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_00fc876c + 0xfc83b0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8770 + 0xfc83c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8774 + 0xfc83d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8778 + 0xfc83dc));
    *pcVar6 = '\x01';
  }
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  uStack_29 = 0;
  uStack_30 = 0;
  if (*param_1 == 0) {
    piVar8 = (int *)param_1[2];
    iVar7 = param_1[3];
    *param_1 = -1;
    param_1[2] = 0;
    param_1[3] = 0;
    piStack_28 = piVar8;
    iStack_24 = iVar7;
  }
  else {
    if (*(int *)(**(int **)(_UNK_00fc877c + 0xfc8410) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = UnityEngine_Application__get_exitCancellationToken_35a9498(0);
    piVar8 = *(int **)(_UNK_00fc8780 + 0xfc8438);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__Delay_32169f8(&piStack_40,2000,1,8,uVar1,0,0);
    thunk_FUN_00ec5080(&piStack_40,0);
    pcVar6 = (char *)(_UNK_00fc8784 + 0xfc8498);
    iStack_24 = iStack_3c;
    piStack_28 = piStack_40;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8788 + 0xfc84b8));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_00fc878c + 0xfc84e0);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00fc8790 + 0xfc84f4));
      *pcVar6 = '\x01';
    }
    iVar7 = (int)(short)iStack_3c;
    if (piStack_40 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      iVar2 = *piStack_40;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_00fc8794 + 0xfc8518)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_00fc8588;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_40,**(int **)(_UNK_00fc8794 + 0xfc8518),0);
LAB_00fc8588:
      iVar2 = (*(code *)*puVar3)(piStack_40,iVar7,puVar3[1]);
      piVar8 = piStack_40;
      if (iVar2 == 0) {
        param_1[3] = iStack_3c;
        *param_1 = 0;
        param_1[2] = (int)piStack_40;
        thunk_FUN_00ec5080(param_1 + 2,0);
        func_0x00fcf770(param_1 + 1,&piStack_28,param_1,**(undefined4 **)(_UNK_00fc8798 + 0xfc869c))
        ;
        return;
      }
    }
  }
  pcVar6 = (char *)(_UNK_00fc879c + 0xfc85b4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc87a0 + 0xfc85c8));
    *pcVar6 = '\x01';
  }
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_00fc87a4 + 0xfc85e8)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
          goto LAB_00fc8630;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_00fc87a4 + 0xfc85e8),2);
LAB_00fc8630:
    (*(code *)*puVar3)(piVar8,(int)(short)iVar7,puVar3[1]);
  }
  uStack_29 = Rotatelab_OfflinePlayController__ShowDialogWhileOfflineAsync_fb7cf8();
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_29,0);
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

